package poo.ayudantia.ejcat2.ej4;

import poo.ayudantia.ejcat2.ej4.models.*;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.List;

public class App {
    private final List<Libro> libros;

    public App() {
        this.libros = new LinkedList<>();
    }

    private int menu() {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        int opt = -1;
        System.out.println("Menú principal");
        System.out.println("-> (1) - Ver libros");
        System.out.println("-> (2) - Agregar libro");
        System.out.println("-> (3) - Modificar libro");
        System.out.println("-> (4) - Eliminar libro");
        System.out.println("-> (0) - Salir");
        try {
            System.out.print("\nIngrese opción: ");
            opt = Integer.parseInt(lector.readLine());
        } catch (NumberFormatException ex) {
            System.out.println("ERROR: Debe ingresar un número.\n");
        } catch (IOException ex) {
            System.out.println("ERROR en lectura de datos\n");
        }
        return opt;
    }

    private void mostrarLibros() {
        int n = 1;
        if (libros.isEmpty()) System.out.println("No hay libros.");
        else {
            for (Libro libro : this.libros) {
                System.out.printf("Libro %d\n", n);
                libro.imprimir();
                n++;
            }
        }
    }

    private void agregarLibro() {
        Libro libro = null;
        String titulo, autor, curso, escuela;
        double precio;
        int tipo;
        TipoNovela tipoNovela;
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        try {
            System.out.print("Ingrese el título: ");
            titulo = lector.readLine();
            System.out.print("Ingrese el autor: ");
            autor = lector.readLine();
            System.out.print("Ingrese el precio (decimal con punto): ");
            precio = Double.parseDouble(lector.readLine());
            System.out.print("Ingrese el tipo de libro (1 - Texto, 2 - Texto PUCV, 3 - Novela): ");
            tipo = Integer.parseInt(lector.readLine());
            switch (tipo) {
                case 1 -> {
                    System.out.print("Ingrese el nombre del curso: ");
                    curso = lector.readLine();
                    libro = new LibroTexto(titulo, autor, precio, curso);
                }
                case 2 -> {
                    System.out.print("Ingrese el nombre del curso: ");
                    curso = lector.readLine();
                    System.out.print("Ingrese la escuela que publica: ");
                    escuela = lector.readLine();
                    libro = new LibroTextoPUCV(titulo, autor, precio, curso, escuela);
                }
                case 3 -> {
                    System.out.println("Tipos de novela:");
                    System.out.println("1 - Histórica, 2 - Realista, 3 - Aventuras");
                    System.out.println("4 - Policiaca, 5 - Romántica, 6 - Ciencia ficción");
                    tipoNovela = switch (Integer.parseInt(lector.readLine())) {
                        case 1 -> TipoNovela.HISTORICA;
                        case 2 -> TipoNovela.REALISTA;
                        case 3 -> TipoNovela.AVENTURAS;
                        case 4 -> TipoNovela.POLICIACA;
                        case 5 -> TipoNovela.ROMANTICA;
                        case 6 -> TipoNovela.CIENCIA_FICCION;
                        default -> null;
                    };
                    if (tipoNovela != null)
                        libro = new Novela(titulo, autor, precio, tipoNovela);
                    else
                        System.out.println("ERROR: El típo de novela ingresado no existe.");
                }
                default -> {
                    System.out.println("ERROR.");
                    return;
                }
            }
            this.libros.add(libro);
        } catch (IOException ex) {
            System.out.println("Error en lectura de datos.");
        } catch (NumberFormatException ex) {
            System.out.println("Error: Ha ingresado un valor no válido.");
        }
    }

    private void eliminarLibro() {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        int libro;
        mostrarLibros();
        if (!this.libros.isEmpty()) {
            try {
                System.out.print("Ingrese el número del libro a eliminar: ");
                libro = Integer.parseInt(lector.readLine());
                this.libros.get(libro - 1).imprimir();
                this.libros.remove(libro - 1);
                System.out.println("Libro eliminado con éxito!");
            } catch (IOException ex) {
                System.out.println("ERROR en lectura de datos");
            } catch (NumberFormatException ex) {
                System.out.println("Error: Ha ingresado un valor no válido.");
            }
        }
    }

    private void xd() {
        System.out.println("Funcionalidad no implementada.");
    }

    public void iniciar() {
        int opt;
        do {
            opt = menu();
            switch (opt) {
                case 1 -> mostrarLibros();
                case 2 -> agregarLibro();
                case 3 -> xd();
                case 4 -> eliminarLibro();
                case 0 -> System.out.println("Saliendo...");
                default -> System.out.println("ERROR: Ingrese una opción válida.");
            }
        } while (opt != 0);
    }

    public List<Libro> getLibros() {
        return libros;
    }

    public static void main(String[] args) {
        App app = new App();
        app.iniciar();
    }
}
