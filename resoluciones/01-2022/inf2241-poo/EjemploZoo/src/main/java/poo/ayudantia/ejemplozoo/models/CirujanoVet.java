package poo.ayudantia.ejemplozoo.models;

public class CirujanoVet extends Veterinario {

    public CirujanoVet(String nombre, String rut, String universidad) {
        super(nombre, rut, universidad);
    }

    public CirujanoVet(String nombre, String rut, String universidad, int annoIngresoZoo) {
        super(nombre, rut, universidad, annoIngresoZoo);
    }

    @Override
    public void efectuarTratamiento(Animal animal) {

    }

    @Override
    public void controlAnimal(Animal animal) {

    }
}
