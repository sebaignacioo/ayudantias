package poo.ayudantia.ejcat2.ej3.classes;

import poo.ayudantia.ejcat2.ej3.classes.exceptions.MontoLimiteExcedidoException;

public class CuentaCorriente extends Cuenta {
    private float sobregiro;

    public CuentaCorriente(float saldo, float tasaAnual) {
        super(saldo, tasaAnual);
        this.sobregiro = 0.0f;
    }

    public void consignar(float monto) {
        float queda = 0;
        if (this.sobregiro > 0) {
            queda = sobregiro - monto;
            if (queda > 0)
                super.consignar(this.sobregiro - monto);
            this.sobregiro -= monto;
        } else {
            super.consignar(monto);
        }
    }

    public void retirar(float monto) throws MontoLimiteExcedidoException {
        if (getSaldo() - monto < 0) {
            this.sobregiro += (monto - getSaldo());
            super.retirar(getSaldo());
        }
        else super.retirar(monto);
    }

    public void imprimir() {
        String txt = "Cuenta corriente\n" +
                "-> Saldo actual      : $%.2f\n" +
                "-> Comision mensual  : $%.2f\n" +
                "-> Sobregiro         : $%.2f\n" +
                "-> Nº transacciones  : %d";
        System.out.println(String.format(txt,
                getSaldo(),
                getComisionMensual(),
                getSobregiro(),
                getnConsignaciones() + getnRetiros()));
    }

    public float getSobregiro() {
        return sobregiro;
    }

    public void setSobregiro(float sobregiro) {
        this.sobregiro = sobregiro;
    }
}
