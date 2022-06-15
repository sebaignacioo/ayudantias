package poo.ayudantia.ejcat2.ej3.classes;

import poo.ayudantia.ejcat2.ej3.classes.exceptions.MontoLimiteExcedidoException;

public class CuentaAhorros extends Cuenta {
    private boolean activa;

    public CuentaAhorros(float saldo, float tasaAnual) {
        super(saldo, tasaAnual);
        this.activa = saldo >= 10000;
    }

    public void consignar(float monto) {
        if (this.activa) super.consignar(monto);
    }

    public void retirar(float monto) throws MontoLimiteExcedidoException {
        if (this.activa) super.retirar(monto);
    }

    public void extractoMensual() {
        if (getnRetiros() > 4)
            setComisionMensual((getnRetiros() - 4) * 1000);
        super.extractoMensual();
        if (getSaldo() < 10000)
            this.activa = false;
    }

    public void imprimir() {
        String txt = "Cuenta de ahorros\n" +
                "-> Saldo actual      : $%.2f\n" +
                "-> Activa            : %s\n" +
                "-> Comision mensual  : $%.2f\n" +
                "-> Nº transacciones  : %d";
        System.out.println(String.format(txt,
                getSaldo(),
                this.activa ? "Si" : "No",
                getComisionMensual(),
                getnConsignaciones() + getnRetiros()));
    }

    public boolean isActiva() {
        return activa;
    }

    public void setActiva(boolean activa) {
        this.activa = activa;
    }
}
