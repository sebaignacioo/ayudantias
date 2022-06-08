import java.io.*;

public class Main2 {

    public static void main(String[] args) throws IOException {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));

        final int ladoInicial1 = 2;
        final double ladoInicial2 = 3.0;
        int nuevoLado1;
        double nuevoLado2;

        Cuadrado2 c1 = new Cuadrado2(ladoInicial1);
        Cuadrado2 c2 = new Cuadrado2(ladoInicial2);

        System.out.println("*** Cuadrado 1 ***");
        System.out.println("Cuadrado de lado " + c1.getLado());
        System.out.println("-> Área = " + c1.getArea());
        System.out.println("-> Perímetro = " + c1.getPerimetro());

        System.out.println("*** Cuadrado 2 ***");
        System.out.println("Cuadrado de lado " + c2.getLado());
        System.out.println("-> Área = " + c2.getArea());
        System.out.println("-> Perímetro = " + c2.getPerimetro());

        System.out.print("Ingrese nuevo valor del lado del cuadrado 1 (como int): ");
        nuevoLado1 = Integer.parseInt(lector.readLine());
        c1.setLado(nuevoLado1);

        System.out.println("Cuadrado de lado " + c1.getLado());
        System.out.println("-> Área = " + c1.getArea());
        System.out.println("-> Perímetro = " + c1.getPerimetro());

        System.out.print("Ingrese nuevo valor del lado del cuadrado 2 (como double): ");
        nuevoLado2 = Double.parseDouble(lector.readLine());
        c2.setLado(nuevoLado2);

        System.out.println("Cuadrado de lado " + c2.getLado());
        System.out.println("-> Área = " + c2.getArea());
        System.out.println("-> Perímetro = " + c2.getPerimetro());
    }

}