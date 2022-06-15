package poo.ayudantia.ejcat2.ej3.classes;

import poo.ayudantia.ejcat2.ej3.classes.exceptions.MontoLimiteExcedidoException;

public class Cuenta {
    private float saldo, tasaAnual, comisionMensual;
    private int nConsignaciones, nRetiros;

    public Cuenta(float saldo, float tasaAnual) {
        this.saldo = saldo;
        this.tasaAnual = tasaAnual;
        this.comisionMensual = 0;
        this.nConsignaciones = 0;
        this.nRetiros = 0;
    }

    public void consignar(float monto) {
        this.saldo += monto;
        this.nConsignaciones++;
    }

    public void retirar(float monto) throws MontoLimiteExcedidoException {
        if (monto > this.saldo) throw new MontoLimiteExcedidoException(this.saldo, monto);
        else {
            this.saldo -= monto;
            this.nRetiros++;
        }
    }

    private void actualizarInteres() {
        this.saldo += this.saldo * (this.tasaAnual / 12);
    }

    public void extractoMensual() {
        this.saldo -= this.comisionMensual;
        actualizarInteres();
    }

    public void imprimir() {
        String txt = "Cuenta\n" +
                     "-> Saldo actual      : $%.2f\n" +
                     "-> Tasa anual        : %.2f %%\n" +
                     "-> Comision mensual  : $%.2f\n" +
                     "-> Nº consignaciones : %d\n" +
                     "-> Nº retiros        : %d";
        System.out.println(String.format(txt,
                this.saldo,
                this.tasaAnual * 100,
                this.comisionMensual,
                this.nConsignaciones,
                this.nRetiros));
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public float getTasaAnual() {
        return tasaAnual;
    }

    public void setTasaAnual(float tasaAnual) {
        this.tasaAnual = tasaAnual;
    }

    public float getComisionMensual() {
        return comisionMensual;
    }

    public void setComisionMensual(float comisionMensual) {
        this.comisionMensual = comisionMensual;
    }

    public int getnConsignaciones() {
        return nConsignaciones;
    }

    public int getnRetiros() {
        return nRetiros;
    }

}
