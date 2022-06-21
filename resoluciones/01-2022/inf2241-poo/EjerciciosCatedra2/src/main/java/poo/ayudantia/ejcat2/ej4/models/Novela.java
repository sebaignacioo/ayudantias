package poo.ayudantia.ejcat2.ej4.models;

public class Novela extends Libro {

    TipoNovela tipo;

    public Novela(String titulo, String autor, double precio, TipoNovela tipo) {
        super(titulo, autor, precio);
        this.tipo = tipo;
    }

    @Override
    public void imprimir() {
        System.out.printf("-> Título libro    : %s\n", this.getTitulo());
        System.out.printf("-> Autor(es)       : %s\n", this.getAutor());
        System.out.printf("-> Precio de venta : %.2f\n", this.getPrecio());
        System.out.printf("-> Género          : %s\n", TipoNovela.genero(this.tipo));
    }

    public TipoNovela getTipo() {
        return tipo;
    }

    public void setTipo(TipoNovela tipo) {
        this.tipo = tipo;
    }
}
