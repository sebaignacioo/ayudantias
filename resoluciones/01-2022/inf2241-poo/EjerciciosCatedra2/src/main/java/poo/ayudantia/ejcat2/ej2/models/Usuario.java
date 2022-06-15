package poo.ayudantia.ejcat2.ej2.models;

public class Usuario {
    TipoUsuario tipo;
    private String username, pass;

    public Usuario(TipoUsuario tipo, String username, String pass) {
        this.tipo = tipo;
        this.username = username;
        this.pass = pass;
    }
    public boolean comparePass(String pass) {
        return this.pass.equals(pass);
    }

    public TipoUsuario getTipo() {
        return tipo;
    }

    public void setTipo(TipoUsuario tipo) {
        this.tipo = tipo;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public void setPass(String pass) {
        this.pass = pass;
    }
        
}
