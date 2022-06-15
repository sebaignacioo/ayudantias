package poo.ayudantia.ejcat2.ej2;

import java.awt.event.ActionEvent;
import java.util.TreeMap;

import poo.ayudantia.ejcat2.ej2.models.TipoUsuario;
import poo.ayudantia.ejcat2.ej2.models.Usuario;
import poo.ayudantia.ejcat2.ej2.views.AppFrame;
import poo.ayudantia.ejcat2.ej2.views.LoginFrame;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import poo.ayudantia.ejcat2.ej2.models.Dia;
import poo.ayudantia.ejcat2.ej2.models.Egreso;
import poo.ayudantia.ejcat2.ej2.models.Ingreso;
import poo.ayudantia.ejcat2.ej2.models.Movimiento;
import poo.ayudantia.ejcat2.ej2.models.Producto;
import poo.ayudantia.ejcat2.ej2.views.panels.CierreDiarioPanel;
import poo.ayudantia.ejcat2.ej2.views.panels.ComprasPanel;
import poo.ayudantia.ejcat2.ej2.views.panels.VentasPanel;

public class App {
    
    private final Dia dia;
    
    private final LoginFrame loginFrame;
    private AppFrame appFrame;
    
    private final ComprasPanel comprasPanel;
    private final VentasPanel ventasPanel;
    private final CierreDiarioPanel cierreDiarioPanel;
    
    private final TreeMap<String, Usuario> usuarios = new TreeMap<>();
    private Usuario usuario;

    public App() {
        this.loginFrame = new LoginFrame();
        this.comprasPanel = new ComprasPanel();
        this.ventasPanel = new VentasPanel();
        this.cierreDiarioPanel = new CierreDiarioPanel();
        this.dia = new Dia();
        usuarios.put("cierre", new Usuario(TipoUsuario.ENCARGADO_CIERRE, "cierre", "12345abc"));
        usuarios.put("caja", new Usuario(TipoUsuario.ENCARGADO_CAJA, "caja", "password"));
    }

    private void errorPermisos() {
        JOptionPane.showMessageDialog(this.loginFrame,
                "No tiene permisos para realizar esta operación.",
                "Error típo de usuario",
                JOptionPane.ERROR_MESSAGE);
    }

    private void updateCierreInfo() {
        this.cierreDiarioPanel.getTxtCantIng().setText(Integer.toString(dia.getCantIngresos()));
        this.cierreDiarioPanel.getTxtTotalIng().setText("$" + Integer.toString(dia.getSumaIngresos()));
        this.cierreDiarioPanel.getTxtCantEg().setText(Integer.toString(dia.getCantEgresos()));
        this.cierreDiarioPanel.getTxtTotalEg().setText("$" + Integer.toString(dia.getSumaEgresos()));
        this.cierreDiarioPanel.getTxtUtilidad().setText("$" + Integer.toString(dia.getUtilidad()));
    }

    public void initApp() {
        this.appFrame = new AppFrame(this.usuario);
        
        for (Producto insumo: dia.getInsumos())
            this.comprasPanel.getCbInsumos().addItem(insumo);
        for (Producto prodVenta: dia.getEnVenta())
            this.ventasPanel.getCbProdVenta().addItem(prodVenta);
        
        this.comprasPanel.getBtnAgregarCompra().addActionListener((evt) -> {
            if (this.usuario.getTipo() == TipoUsuario.ENCARGADO_CAJA) {
                JComboBox<Producto> cb = comprasPanel.getCbInsumos();
                Producto prod = cb.getItemAt(cb.getSelectedIndex());
                int cant = (Integer) comprasPanel.getTxtCantidadAComprar().getValue();
                Movimiento mov = new Egreso(prod, cant, this.usuario);
                dia.getMovimientos().add(mov);
                ((DefaultTableModel) comprasPanel.getTableCompras().getModel())
                        .addRow(new Object[]{prod.getNombre(), cant, this.usuario.getUsername(), -mov.getTotal()});
            } else errorPermisos();
        });
        
        this.ventasPanel.getBtnAgregarVenta().addActionListener((evt) -> {
            if (this.usuario.getTipo() == TipoUsuario.ENCARGADO_CAJA) {
                JComboBox<Producto> cb = ventasPanel.getCbProdVenta();
                Producto prod = cb.getItemAt(cb.getSelectedIndex());
                int cant = (Integer) ventasPanel.getTxtCantidadAVender().getValue();
                Movimiento mov = new Ingreso(prod, cant);
                dia.getMovimientos().add(mov);
                ((DefaultTableModel) ventasPanel.getTableVentas().getModel())
                        .addRow(new Object[]{prod.getNombre(), cant, mov.getTotal()});
            } else errorPermisos();
        });

        this.appFrame.getPanelMain().addChangeListener(e -> {
            if (appFrame.getPanelMain().getSelectedIndex() == 2)
                updateCierreInfo();
        });
        
        this.appFrame.getPanelMain().addTab("Compras", comprasPanel);
        this.appFrame.getPanelMain().addTab("Ventas", ventasPanel);
        if (usuario.getTipo() == TipoUsuario.ENCARGADO_CIERRE)
            this.appFrame.getPanelMain().addTab("Cierre diario", cierreDiarioPanel);
        
        this.loginFrame.setVisible(false);
        this.appFrame.setVisible(true);
    }
    
    private boolean tryLogin(String username, String pass) {
        if (usuarios.get(username) != null && usuarios.get(username).comparePass(pass)) {
            this.usuario = usuarios.get(username);
            return true;
        }
        return false;
    }

    private void errorLogin() {
        loginFrame.setTxtPass("");
        loginFrame.setTxtUsuario("");
        JOptionPane.showMessageDialog(this.loginFrame,
                            "Error en los datos ingresados",
                                "Error en inicio de sesión",
                                     JOptionPane.ERROR_MESSAGE);
    }

    public void login() {
        this.loginFrame.getBtnLogin().addActionListener((ActionEvent e) -> {
            if (tryLogin(loginFrame.getTxtUsuario().getText(), new String(loginFrame.getTxtPass().getPassword())))
                initApp();
            else errorLogin();
        });
        this.loginFrame.setVisible(true);
    }

    public static void main(String[] args) {
        App app = new App();
        app.login();
    }

}
