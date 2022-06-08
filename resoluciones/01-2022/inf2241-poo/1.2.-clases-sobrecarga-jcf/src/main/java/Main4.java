import java.util.LinkedList;
import java.util.Map;
import java.util.TreeMap;

public class Main4 {

    public static void main(String[] args) {
        TreeMap<String, Streamer> mapStreamers = new TreeMap<>();
        LinkedList<Streamer> listStreamers = new LinkedList<>();

        Streamer rubius = new Streamer("elrubiusOMG", "Rubius");
        Streamer ibai = new Streamer("Ibai");
        Streamer auronplay = new Streamer("AuronPlay", "auronplay");

        // Agregando datos al TreeMap
        mapStreamers.put("rubius", rubius);
        mapStreamers.put("ibai", ibai);
        mapStreamers.put("auronplay", auronplay);

        // Agregando datos al LinkedList
        listStreamers.add(rubius);
        listStreamers.add(ibai);
        listStreamers.add(auronplay);

        System.out.println("Usando TreeMap");
        for (Map.Entry<String, Streamer> streamer: mapStreamers.entrySet()) {
            System.out.println("-> YouTube: https://www.youtube.com/c/" + streamer.getValue().getUsuarioYoutube());
            System.out.println("-> Twitch : https://www.twitch.tv/" + streamer.getValue().getUsuarioTwitch() +
                    "\n");
        }

        System.out.println("Usando LinkedList");
        for (Streamer streamer: listStreamers) {
            System.out.println("-> YouTube: https://www.youtube.com/c/" + streamer.getUsuarioYoutube());
            System.out.println("-> Twitch : https://www.twitch.tv/" + streamer.getUsuarioTwitch() + "\n");
        }

        /*  La clave NO SE PUEDE REPETIR, y si se intenta agregar un dato con la misma clave anterior,
            el nuevo dato REEMPLAZARÁ al anterior.
         */
        if (!mapStreamers.containsKey("rubius")) {
            mapStreamers.put("rubius", new Streamer(",jmngbfv", "sdfhgdfhs"));
        }

        System.out.println("Rubius YouTube: https://www.youtube.com/c/" + mapStreamers.get("rubius").getUsuarioYoutube());
        System.out.println("Rubius Twitch : https://www.twitch.tv/" + mapStreamers.get("rubius").getUsuarioTwitch());

    }

}
