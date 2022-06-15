package poo.ayudantia.ejcat2.ej2.models;

import java.util.ArrayList;

public class Dia {
    private ArrayList<Movimiento> movimientos;
    private final ArrayList<Producto> insumos;
    private final ArrayList<Producto> enVenta;

    public Dia(ArrayList<Producto> insumos, ArrayList<Producto> enVenta) {
        this.movimientos = new ArrayList<>();
        this.insumos = insumos;
        this.enVenta = enVenta;
    }

    public Dia() {
        this.movimientos = new ArrayList<>();
        this.insumos = getListInsumos();
        this.enVenta = getListProdVenta();
    }
    
    private ArrayList<Producto> getListInsumos() {
        ArrayList<Producto> prods = new ArrayList<>();
        prods.add(new Producto("Kilo de Carne", 5000));
        prods.add(new Producto("Kilo de Pollo", 6000));
        prods.add(new Producto("Kilo de Cerdo", 6500));
        prods.add(new Producto("Kilo de Maíz Amarillo", 7500));
        prods.add(new Producto("Libra de Pan", 5000));
        prods.add(new Producto("Kilo de Queso", 10000));
        prods.add(new Producto("Libra de Fresa", 4000));
        return prods;
    }
    
    private ArrayList<Producto> getListProdVenta() {
        ArrayList<Producto> prods = new ArrayList<>();
        prods.add(new Producto("Desgranado de Mazorca", 6000));
        prods.add(new Producto("Empanada", 7000));
        prods.add(new Producto("Bebida", 2000));
        return prods;
    }

    public int getCantIngresos() {
        int cont = 0;
        for (Movimiento mov: this.movimientos)
            if (mov instanceof Ingreso)
                cont++;
        return cont;
    }

    public int getCantEgresos() {
        int cont = 0;
        for (Movimiento mov: this.movimientos)
            if (mov instanceof Egreso)
                cont++;
        return cont;
    }

    public int getSumaIngresos() {
        int suma = 0;
        for (Movimiento mov: this.movimientos)
            if (mov instanceof Ingreso)
                suma += mov.getTotal();
        return suma;
    }

    public int getSumaEgresos() {
        int suma = 0;
        for (Movimiento mov: this.movimientos)
            if (mov instanceof Egreso)
                suma -= (mov.getTotal());
        return suma;
    }

    public int getUtilidad() {
        int suma = 0;
        for (Movimiento mov: this.movimientos)
            suma += mov.getTotal();
        return suma;
    }

    public Producto getInsumo(String nombre) {
        for(Producto insumo: this.insumos)
            if (insumo.getNombre().equals(nombre))
                return insumo;
        return null;
    }

    public Producto getProdEnVenta(String nombre) {
        for(Producto prod: this.enVenta)
            if (prod.getNombre().equals(nombre))
                return prod;
        return null;
    }

    public int getPrecioInsumo(String nombre) {
        for(Producto insumo: this.insumos)
            if (insumo.getNombre().equals(nombre))
                return insumo.getValor();
        return 0;
    }

    public ArrayList<Movimiento> getMovimientos() {
        return movimientos;
    }

    public void setMovimientos(ArrayList<Movimiento> movimientos) {
        this.movimientos = movimientos;
    }

    public ArrayList<Producto> getInsumos() {
        return insumos;
    }

    public ArrayList<Producto> getEnVenta() {
        return enVenta;
    }
    
}
