package poo.ayudantia.ejemplozoo.models;

import java.util.ArrayList;

public abstract class Animal {
    private final int id;
    private String nombre;
    private ArrayList<Caso> casos;

    public Animal(int id, String nombre) {
        this.id = id;
        this.nombre = nombre;
        this.casos = new ArrayList<>();
    }

    abstract void efectuarControl(ControlVet vet);
    abstract void efectuarCirugia(CirujanoVet vet);

    public int getId() {
        return id;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public ArrayList<Caso> getCasos() {
        return casos;
    }

    public void setCasos(ArrayList<Caso> casos) {
        this.casos = casos;
    }
}
