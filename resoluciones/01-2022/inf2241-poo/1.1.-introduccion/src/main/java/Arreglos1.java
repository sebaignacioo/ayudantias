/**
 * Clase para ayudantía 1, introductoria a POO en Java
 * @author Sebastián García Delgadillo
 */
public class Arreglos1 {

    /**
     * Programa principal
     * @param args Argumentos de ejecución del programa
     */
    public static void main(String[] args) {
        String nombre = "Mbappe";
        double[] notas = {4.0, 5.0, 6.0, 3.0, 2.0};
        double suma = 0, promedio;

        for (int i = 0; i < notas.length; i++) {
            suma += notas[i];
        }
        promedio = suma / 5;

        System.out.println("El alumno " + nombre + " tiene un promedio de " + promedio);

    }

}
