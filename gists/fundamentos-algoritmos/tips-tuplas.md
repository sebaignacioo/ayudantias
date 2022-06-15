# Python - Funciones de utilidad para tuplas

- **Fundamentos de algorítmos**
- Escuela de Ingeniería Informática PUCV
- Ayudante Sebastián García

## Descripción

Una **tupla** es un objeto en `python` que permite almacenar una secuencia de objetos de cualquier típo, al igual que lo hacen las **listas**, con la diferencia que las tuplas son **inmutables**, es decir, una vez es creado, **no se puede modificar después**.

Por lo general, la forma de trabajar las tuplas es almacenándolas en listas, por lo que es necesario trabajar tanto con **la lista que almacena las tuplas**, como con las tuplas en sí.

## Funciones

1. **Creación de una tupla**

   ```python
   """

   Ejemplo de creación de tuplas.
   - Estructura de tupla: Campeones de League of Legends (nombre, rol, usaMana)

   """

   camp1 = ('Ashe', 'Tirador', True)
   camp2 = tuple('Brand', 'Mago', true)

   # Usando variables
   nombre = 'Tryndamere'
   rol = 'Luchador'
   usaMana = False
   camp3 = (nombre, rol, usaMana)
   ```

2. **Lectura de datos y tuplas**

   1. _Forma 1:_

      ```python
      """

      Ejemplo de lectura de datos con tuplas, almacenando las tuplas en una lista .
      - Estructura de tupla: Campeones de League of Legends (nombre, rol, usaMana)

      """

      listaTuplas = []

      # Se lee un valor de n, y los n datos
      n = int(input())
      for i in range(n):
          nombre = input()
          rol = input()
          usaMana = bool(input())
          tupla = (nombre, rol, usaMana)
          listaTuplas.append(tupla)
      ```

   2. _Forma 2:_

      ```python
      """

      Ejemplo de lectura de datos con tuplas, almacenando las tuplas en una lista .
      - Estructura de tupla: Campeones de League of Legends (nombre, rol, usaMana)

      """

      listaTuplas = []

      # Se lee un valor de n, y los n datos
      n = int(input())
      for i in range(n):
          tupla = (input(), input(), bool(input()))
          listaTuplas.append(tupla)
      ```

   3. _Forma 3:_

      ```python
      """

      Ejemplo de lectura de datos con tuplas, almacenando las tuplas en una lista .
      - Estructura de tupla: Campeones de League of Legends (nombre, rol, usaMana)

      """

      listaTuplas = []

      # Se lee un valor de n, y los n datos
      n = int(input())
      for i in range(n):
          listaTuplas.append((input(), input(), bool(input())))
      ```
