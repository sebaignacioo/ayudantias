package poo.ayudantia.ejcat2.ej4.models;

public enum TipoNovela {
    HISTORICA,
    ROMANTICA,
    POLICIACA,
    REALISTA,
    CIENCIA_FICCION,
    AVENTURAS;

    public static String genero(TipoNovela tipo) {
        return switch (tipo) {
            case HISTORICA -> "Histórica";
            case REALISTA -> "Realista";
            case AVENTURAS -> "Aventuras";
            case POLICIACA -> "Policiaca";
            case ROMANTICA -> "Romántica";
            case CIENCIA_FICCION -> "Ciencia ficción";
        };
    }

}
