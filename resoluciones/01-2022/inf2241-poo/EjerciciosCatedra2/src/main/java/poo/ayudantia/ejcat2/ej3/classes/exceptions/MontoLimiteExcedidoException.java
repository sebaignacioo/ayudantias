package poo.ayudantia.ejcat2.ej3.classes.exceptions;

public class MontoLimiteExcedidoException extends Exception {
    private final float montoSolicitadoARetirar, saldo;

    public MontoLimiteExcedidoException(float saldo, float montoSolicitadoARetirar) {
        super("El monto a retirar excede el límite.");
        this.saldo = saldo;
        this.montoSolicitadoARetirar = montoSolicitadoARetirar;
    }

    public float getMontoExcedido() {
        return montoSolicitadoARetirar - saldo;
    }

}
