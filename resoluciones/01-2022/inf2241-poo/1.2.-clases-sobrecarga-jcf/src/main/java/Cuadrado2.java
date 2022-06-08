public class Cuadrado2 {
    // Atributos de la clase
    private double lado;

    // Constructorrd de la clase
    // ** Sobrecarga **
    public Cuadrado2(double lado) {
        this.lado = lado;
    }

    public Cuadrado2(int lado) {
        this.lado = lado; // Promoción automática
    }

    // Métodos
    public double getLado() {
        return lado;
    }

    // ** Sobrecarga **
    public void setLado(double lado) {
        this.lado = lado;
    }

    public void setLado(int lado) {
        this.lado = lado;
    }

    public double getArea() {
        return lado * lado;
    }

    public double getPerimetro() {
        return 4.0 * lado;
    }
}
