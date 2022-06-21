package poo.ayudantia.ejcat2.ej4.models;

public class LibroTextoPUCV extends LibroTexto {

    String escuela;

    public LibroTextoPUCV(String titulo, String autor, double precio, String curso, String escuela) {
        super(titulo, autor, precio, curso);
        this.escuela = escuela;
    }

    @Override
    public void imprimir() {
        System.out.printf("-> Título libro        : %s\n", this.getTitulo());
        System.out.printf("-> Autor(es)           : %s\n", this.getAutor());
        System.out.printf("-> Precio de venta     : %.2f\n", this.getPrecio());
        System.out.printf("-> Curso asociado      : %s\n", this.getCurso());
        System.out.printf("-> Escuela que publica : %s\n", this.getCurso());
    }

    public String getEscuela() {
        return escuela;
    }

    public void setEscuela(String escuela) {
        this.escuela = escuela;
    }
}
