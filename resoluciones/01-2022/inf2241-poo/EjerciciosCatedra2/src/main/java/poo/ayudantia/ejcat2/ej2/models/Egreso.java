package poo.ayudantia.ejcat2.ej2.models;

public class Egreso extends Movimiento {

    private Usuario usuario;

    public Egreso(Producto producto, int cantidad, Usuario usuario) {
        super(producto, cantidad);
        this.usuario = usuario;
    }

    @Override
    public int getTotal() {
        return -(this.getCantidad() * this.getProducto().getValor());
    }

    public Usuario getUsuario() {
        return usuario;
    }

    public void setUsuario(Usuario usuario) {
        this.usuario = usuario;
    }
}
