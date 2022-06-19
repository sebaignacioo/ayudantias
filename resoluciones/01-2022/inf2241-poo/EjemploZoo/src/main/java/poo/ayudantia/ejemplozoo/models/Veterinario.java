package poo.ayudantia.ejemplozoo.models;

import java.util.Calendar;

public abstract class Veterinario {
    String nombre, rut, universidad;
    int annoIngresoZoo;

    public Veterinario(String nombre, String rut, String universidad) {
        this.nombre = nombre;
        this.rut = rut;
        this.universidad = universidad;
        this.annoIngresoZoo = Calendar.getInstance().get(Calendar.YEAR);
    }

    public Veterinario(String nombre, String rut, String universidad, int annoIngresoZoo) {
        this.nombre = nombre;
        this.rut = rut;
        this.universidad = universidad;
        this.annoIngresoZoo = annoIngresoZoo;
    }

    abstract void efectuarTratamiento(Animal animal);
    abstract void controlAnimal(Animal animal);
}
