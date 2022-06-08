import java.io.*;

/**
 * Clase para ayudantía 1, introductoria a POO en Java
 * @author Sebastián García Delgadillo
 */
public class Arreglos2 {

    /**
     * Programa principal
     * @param args Argumentos de ejecución del programa
     * @throws IOException Posibles errores de entrada/salida de datos (IO).
     */
    public static void main(String[] args) throws IOException {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        String nombre;
        double[] notas = new double[5];
        double suma = 0, promedio;

        System.out.print("Ingrese el nombre del alumno: ");
        nombre = lector.readLine();

        System.out.println("Ingrese las 5 notas:");
        for (int i = 0; i < 5; i++) {
            notas[i] = Double.parseDouble(lector.readLine());
        }

        for (int i = 0; i < notas.length; i++) {
            suma += notas[i];
        }
        promedio = suma / 5;

        System.out.println("El alumno " + nombre + " tiene un promedio de " + promedio);

    }

}
