import java.io.*;

public class Main1 {

    public static void main(String[] args) throws IOException {
        double nuevoLado;
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        Cuadrado1 cuadrado = new Cuadrado1(2.0);

        System.out.println("Cuadrado de lado " + cuadrado.getLado());
        System.out.println("-> Área = " + cuadrado.getArea());
        System.out.println("-> Perímetro = " + cuadrado.getPerimetro());

        System.out.print("Ingrese nuevo valor del lado del cuadrado (como double): ");
        nuevoLado = Double.parseDouble(lector.readLine());
        cuadrado.setLado(nuevoLado);

        System.out.println("Cuadrado de lado " + cuadrado.getLado());
        System.out.println("-> Área = " + cuadrado.getArea());
        System.out.println("-> Perímetro = " + cuadrado.getPerimetro());
    }

}
