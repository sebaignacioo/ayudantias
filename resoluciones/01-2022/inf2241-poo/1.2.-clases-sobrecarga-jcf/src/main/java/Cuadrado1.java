public class Cuadrado1 {
    // Atributos de la clase
    private double lado;

    // Constructor de la clase
    public Cuadrado1(double lado) {
        this.lado = lado;
    }

    // Métodos
    public double getLado() {
        return lado;
    }

    public void setLado(double lado) {
        this.lado = lado;
    }

    public double getArea() {
        return lado * lado;
    }

    public double getPerimetro() {
        return 4.0 * lado;
    }
}
