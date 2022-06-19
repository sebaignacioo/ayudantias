package poo.ayudantia.ejemplozoo.models;

import java.util.Date;

public class Caso {
    private final Date fecha;
    private TipoTratamiento tipoTratamiento;
    private String descripcion;
    private Veterinario veterinarioACargo;

    public Caso(TipoTratamiento tipoTratamiento, String descripcion, Veterinario veterinarioACargo) {
        this.fecha = new Date();
        this.tipoTratamiento = tipoTratamiento;
        this.descripcion = descripcion;
        this.veterinarioACargo = veterinarioACargo;
    }

    public Date getFecha() {
        return fecha;
    }

    public TipoTratamiento getTipoTratamiento() {
        return tipoTratamiento;
    }

    public void setTipoTratamiento(TipoTratamiento tipoTratamiento) {
        this.tipoTratamiento = tipoTratamiento;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public Veterinario getVeterinarioACargo() {
        return veterinarioACargo;
    }

    public void setVeterinarioACargo(Veterinario veterinarioACargo) {
        this.veterinarioACargo = veterinarioACargo;
    }
}
