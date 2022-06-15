package poo.ayudantia.ejcat2.ej3;

import poo.ayudantia.ejcat2.ej3.classes.Cuenta;
import poo.ayudantia.ejcat2.ej3.classes.CuentaAhorros;
import poo.ayudantia.ejcat2.ej3.classes.CuentaCorriente;
import poo.ayudantia.ejcat2.ej3.classes.exceptions.MontoLimiteExcedidoException;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class App {

    public static void movimiento(int tipo, Cuenta cuenta) {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        float monto;
        String txt;
        if (tipo == 1) txt = "Agregar";
        else txt = "Quitar";
        System.out.printf("-- %s dinero --\n", txt);
        System.out.print("  -> Ingrese monto: ");
        try {
            monto = Float.parseFloat(lector.readLine());
            if (cuenta instanceof CuentaAhorros cuentaAhorros && !cuentaAhorros.isActiva())
                System.out.println("La cuenta está inactiva, por lo que no se pueden efectuar movimientos en ella.");
            else
                if (tipo == 1)
                    cuenta.consignar(monto);
                else
                    cuenta.retirar(monto);
        } catch (IOException ioex) {
            System.out.println("Error en lectura de datos.");
        } catch (NumberFormatException numex) {
            System.out.println("Debe ingresar un valor numérico. Si es decimal, el separador es el punto (.)");
        } catch (MontoLimiteExcedidoException montoLimEx) {
            // montoLimEx.printStackTrace();
            System.out.printf("No puede retirar más dinero del que posee. Faltan $%.2f.\n",
                    montoLimEx.getMontoExcedido());
        }
    }

    public static void main(String[] args) {
        CuentaAhorros cuentaAhorros = new CuentaAhorros(100000, 0.15f);
        CuentaCorriente cuentaCorriente = new CuentaCorriente(1000000, 0.23f);
        cuentaAhorros.imprimir();
        movimiento(1, cuentaAhorros);
        movimiento(2, cuentaAhorros);
        movimiento(2, cuentaAhorros);
        movimiento(2, cuentaAhorros);
        movimiento(2, cuentaAhorros);
        movimiento(2, cuentaAhorros);
        cuentaAhorros.extractoMensual();
        cuentaAhorros.imprimir();
    }
}