package poo.ayudantia.ejcat2.ej2.models;

public abstract class Movimiento {
    private Producto producto;
    private int cantidad;

    public Movimiento(Producto producto, int cantidad) {
        this.producto = producto;
        this.cantidad = cantidad;
    }

    public abstract int getTotal();

    public Producto getProducto() {
        return producto;
    }

    public void setProducto(Producto producto) {
        this.producto = producto;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }
}
