# Fabuloso Fred (C)

Juego de memoria en consola inspirado en la dinamica de repetir secuencias de colores.

## Descripcion

El programa muestra un tablero de 4 colores en consola. En cada ronda parpadea una secuencia y el jugador debe escribir los numeros correctos en el mismo orden.

- Rojo = 1
- Verde = 2
- Morado = 3
- Azul = 4

Si fallas un numero, el juego termina y muestra tu puntuacion.

## Modos de juego

Al iniciar, el menu principal permite:

- `c`: Comenzar por niveles (Nivel 1, 2 y 3)
- `q`: Juego infinito
- `i`: Ver instrucciones (Como jugar)
- `s`: Salir

### Progreso por niveles

- Nivel 1 termina en `20` puntos
- Nivel 2 termina en `40` puntos
- Nivel 3 termina en `60` puntos (ganas el juego)

Cada acierto suma `10` puntos.

## Tecnologias y dependencias

- Lenguaje: C/C++ (estilo ANSI C)
- Librerias usadas:
	- `stdio.h`
	- `stdlib.h`
	- `time.h`
	- `conio.h`
	- `windows.h`

Nota: el codigo usa funciones de Windows como `Sleep`, `Beep`, `SetConsoleTextAttribute` y `system("cls")`, por lo que esta pensado para ejecutarse en Windows.

## Compilar y ejecutar

Archivo principal:

- `FABULOSO FREDD -BlancoOrtiz-TrejoTapia-GallardoJimenez-LopezCardenas.cpp`

### Opcion 1: g++ (MinGW) en Windows

```bash
g++ "FABULOSO FREDD.exe
fabuloso_fredd.exe
```

### Opcion 2: Visual Studio

1. Crear un proyecto de consola C++.
2. Agregar el archivo `.cpp`.
3. Compilar y ejecutar.

## Estructura basica del codigo

- `menu()`: controla opciones, niveles y flujo principal.
- `comoJugar()`: muestra instrucciones y relacion color-numero.
- `numeroRandom()`: genera valores aleatorios del 1 al 4.
- `parpadear(int)`: reproduce visualmente el color de la secuencia.
- `cuadros()` y `colorRojo/Verde/Morado/Azul()`: dibujan tablero y efecto de parpadeo.

## Integrantes

- Luis Ernesto Lopez Cardenas
- Javier Sinued Trejo Tapia
- Alan Gael Gallardo Jimenez
- Carlos Enrique Blanco Ortiz

## Estado

Proyecto funcional para consola en Windows. Listo para demostraciones academicas y mejoras futuras (por ejemplo: validaciones adicionales, record de puntuacion y mejor interfaz).
