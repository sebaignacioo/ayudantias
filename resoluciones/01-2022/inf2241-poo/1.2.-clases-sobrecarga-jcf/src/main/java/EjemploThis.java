public class EjemploThis {

    private int numerito = 10;

    public void ejecutarEjemplo(int numerito) {
        System.out.println("Numerito sin el this: " + numerito);
        System.out.println("Numerito con el this: " + this.numerito + "\n");

        System.out.println("¿Qué es this?");
        System.out.println(this);
    }

}
