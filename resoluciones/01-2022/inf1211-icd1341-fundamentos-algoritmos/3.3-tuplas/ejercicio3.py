def getIndiceProducto(codProd, listaProds):
    for i in range(len(listaProds)):
        if listaProds[i] == codProd:
            return i
    return -1


def ordenarListaProd(totales):
    n = len(totales)
    for i in range(n - 1):
        for j in range(n - i - 1):
            codProd, total = totales[j]
            codProdSig, totalSig = totales[j + 1]
            if (total < totalSig) or (total == totalSig and
                 codProd > codProdSig):
                aux = totales[j]
                totales[j] = totales[j + 1]
                totales[j + 1] = aux


def obtenerTotales(ventas):
    productos = []
    totales = []
    totalesTuplas = []
    for codSuc, codProd, ventasSuc in ventas:
        i = getIndiceProducto(codProd, productos)
        if i == -1:
            productos.append(codProd)
            totales.append(ventasSuc)
        else:
            totales[i] += ventasSuc
    for i in range(len(productos)):
        totalesTuplas.append((productos[i], totales[i]))
    return totalesTuplas


def mostrarTotales(totales):
    print('Código de Producto - Total de Ventas')
    print('====================================')
    for codProd, total in totales:
        print(f'         {codProd}              {total}')


def rankingSuper(ventas):
    totales = obtenerTotales(ventas)
    ordenarListaProd(totales)
    mostrarTotales(totales)

