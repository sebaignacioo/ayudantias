package poo.ayudantia.ejcat2.ej2.models;

public class Producto {
    private String nombre;
    private int valor;

    public Producto(String nombre, int valor) {
        this.nombre = nombre;
        this.valor = valor;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getValor() {
        return valor;
    }

    public void setValor(int valor) {
        this.valor = valor;
    }

    @Override
    public String toString() {
        return String.format("%s ($%d)", this.nombre, this.valor);
    }
    
}
