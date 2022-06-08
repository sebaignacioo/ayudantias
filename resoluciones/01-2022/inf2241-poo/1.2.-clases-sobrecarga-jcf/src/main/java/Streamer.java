public class Streamer {

    private String usuarioYoutube, usuarioTwitch;

    public Streamer(String usuarioYoutube, String usuarioTwitch) {
        this.usuarioYoutube = usuarioYoutube;
        this.usuarioTwitch = usuarioTwitch;
    }

    public Streamer(String usuario) {
        this.usuarioYoutube = usuario;
        this.usuarioTwitch = usuario;
    }

    public String getUsuarioYoutube() {
        return usuarioYoutube;
    }

    public void setUsuarioYoutube(String usuarioYoutube) {
        this.usuarioYoutube = usuarioYoutube;
    }

    public String getUsuarioTwitch() {
        return usuarioTwitch;
    }

    public void setUsuarioTwitch(String usuarioTwitch) {
        this.usuarioTwitch = usuarioTwitch;
    }
}
