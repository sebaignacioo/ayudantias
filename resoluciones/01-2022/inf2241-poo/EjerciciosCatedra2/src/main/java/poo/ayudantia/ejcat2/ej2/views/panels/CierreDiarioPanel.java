/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JPanel.java to edit this template
 */
package poo.ayudantia.ejcat2.ej2.views.panels;

import javax.swing.*;

/**
 *
 * @author sebaignacioo
 */
public class CierreDiarioPanel extends javax.swing.JPanel {

    /**
     * Creates new form ComprasPanel
     */
    public CierreDiarioPanel() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        lblTitulo = new javax.swing.JLabel();
        lblCantIng = new javax.swing.JLabel();
        lblCantEg = new javax.swing.JLabel();
        lblTotalIng = new javax.swing.JLabel();
        lblTotalEg = new javax.swing.JLabel();
        lblUtilidadFinal = new javax.swing.JLabel();
        txtTotalIng = new javax.swing.JLabel();
        txtTotalEg = new javax.swing.JLabel();
        txtUtilidad = new javax.swing.JLabel();
        txtCantIng = new javax.swing.JLabel();
        txtCantEg = new javax.swing.JLabel();

        setMaximumSize(new java.awt.Dimension(780, 440));
        setMinimumSize(new java.awt.Dimension(780, 440));
        setPreferredSize(new java.awt.Dimension(780, 440));
        setSize(new java.awt.Dimension(780, 440));

        lblTitulo.setFont(new java.awt.Font("Helvetica Neue", 0, 16)); // NOI18N
        lblTitulo.setText("Cierre diario");

        lblCantIng.setText("Cantidad de ingresos: ");

        lblCantEg.setText("Cantidad de egresos: ");

        lblTotalIng.setText("Total ingresos:");

        lblTotalEg.setText("Total egresos:");

        lblUtilidadFinal.setText("Utilidad final del día: ");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(15, 15, 15)
                        .addComponent(lblTitulo))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(220, 220, 220)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(lblCantEg, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(lblTotalEg, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(lblUtilidadFinal, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(lblTotalIng, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(lblCantIng, javax.swing.GroupLayout.PREFERRED_SIZE, 150, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(txtCantIng)
                            .addComponent(txtTotalIng)
                            .addComponent(txtCantEg)
                            .addComponent(txtTotalEg)
                            .addComponent(txtUtilidad))))
                .addContainerGap(392, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(16, 16, 16)
                .addComponent(lblTitulo)
                .addGap(100, 100, 100)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblCantIng)
                    .addComponent(txtCantIng))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblTotalIng)
                    .addComponent(txtTotalIng))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblCantEg)
                    .addComponent(txtCantEg))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblTotalEg)
                    .addComponent(txtTotalEg))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblUtilidadFinal)
                    .addComponent(txtUtilidad))
                .addContainerGap(171, Short.MAX_VALUE))
        );
    }// </editor-fold>//GEN-END:initComponents


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel lblCantEg;
    private javax.swing.JLabel lblCantIng;
    private javax.swing.JLabel lblTitulo;
    private javax.swing.JLabel lblTotalEg;
    private javax.swing.JLabel lblTotalIng;
    private javax.swing.JLabel lblUtilidadFinal;
    private javax.swing.JLabel txtCantEg;
    private javax.swing.JLabel txtCantIng;
    private javax.swing.JLabel txtTotalEg;
    private javax.swing.JLabel txtTotalIng;
    private javax.swing.JLabel txtUtilidad;
    // End of variables declaration//GEN-END:variables


    public JLabel getTxtCantEg() {
        return txtCantEg;
    }

    public JLabel getTxtCantIng() {
        return txtCantIng;
    }

    public JLabel getTxtTotalEg() {
        return txtTotalEg;
    }

    public JLabel getTxtTotalIng() {
        return txtTotalIng;
    }

    public JLabel getTxtUtilidad() {
        return txtUtilidad;
    }
}
