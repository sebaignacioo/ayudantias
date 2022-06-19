package poo.ayudantia.ejemplozoo.models;

public class ControlVet extends Veterinario {

    public ControlVet(String nombre, String rut, String universidad) {
        super(nombre, rut, universidad);
    }

    public ControlVet(String nombre, String rut, String universidad, int annoIngresoZoo) {
        super(nombre, rut, universidad, annoIngresoZoo);
    }

    @Override
    void efectuarTratamiento(Animal animal) {

    }

    @Override
    void controlAnimal(Animal animal) {

    }
}
