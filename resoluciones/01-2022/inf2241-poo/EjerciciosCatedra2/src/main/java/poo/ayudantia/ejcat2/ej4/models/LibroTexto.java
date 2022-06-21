package poo.ayudantia.ejcat2.ej4.models;

public class LibroTexto extends Libro {
    private String curso;

    public LibroTexto(String titulo, String autor, double precio, String curso) {
        super(titulo, autor, precio);
        this.curso = curso;
    }

    @Override
    public void imprimir() {
        System.out.printf("-> Título libro    : %s\n", this.getTitulo());
        System.out.printf("-> Autor(es)       : %s\n", this.getAutor());
        System.out.printf("-> Precio de venta : %.2f\n", this.getPrecio());
        System.out.printf("-> Curso asociado  : %s\n", this.curso);
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
}
