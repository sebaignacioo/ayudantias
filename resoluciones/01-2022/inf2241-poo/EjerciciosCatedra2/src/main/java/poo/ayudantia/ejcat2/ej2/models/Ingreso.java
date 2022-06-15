package poo.ayudantia.ejcat2.ej2.models;

public class Ingreso extends Movimiento {

    public Ingreso(Producto producto, int cantidad) {
        super(producto, cantidad);
    }

    @Override
    public int getTotal() {
        return getProducto().getValor() * getCantidad();
    }
}
