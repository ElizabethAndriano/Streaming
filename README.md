# Programación Orientada a Objetos 
## Proyecto Integrador

### **Modelado de servicio de streaming **

En los últimos años, han proliferado los servicios de streaming de video bajo demanda por ejemplo Netflix, Disney, DC entre otros. Algunos de ellos se especializan por el volumen de videos que proporcionan a sus usuarios mientras que otros se han puesto el reto de mostrar solamente videos de su propia marca. Una versión limitada para apoyar a un futuro proveedor de este tipo de servicios es la que se describe a continuación:

Se quiere trabajar con dos tipos de videos: películas y series. 

Todo video tiene :

-  ID
- Nombre Pelicula / Serie
- Género
- Calificación
- Duración 
- Fecha Estreno

Las series tienen episodios y cada episodio tiene:

- ID
- Nombre
- Temporada a la que pertenece.
- Número de episodio

Nos interesa conocer la calificación promedio que ha recibido cada uno de los videos. Esta califiación está en escala de 1 a 10 donde 10 es la mejor calificación.

El sistema debe ser capaz de :

La aplicación debe mostrar el siguiente menu ciclado:

1. Cargar archivo de datos (Excel o csv)
2. Mostrar los videos en general con:
   1.  Una calificación mayor a cierto parámtero 
   2.  Un cierto género
3.  Mostrar los episodios de una determinada serie.
4. Mostrar las películas con una calificacion mayor a cierto número
5. Calificar un video
   - Pedir titulo de película o nombre episodio de la serie a calificar
   - Pedir valor otorgado
6. Salir


## Entrega

Se entregara a través de GitHub Classroom todos los archivos h y cpp  junto al diagrama de UML en imagen jpg o png

   2.- Entregar en este espacio en Canvas un archivo ZIP que contenga las siguientes carpetas con el siguiente contenido:

-   <u>doc       (20 pts)</u>
      Un documento PDF con:
        hoja de presentación,
        índice de contenido,
        Introducción (planteamiento del problema).
        diagrama de clases UML con una argumentación del por qué del diseño,,
        ejemplo de ejecución (capturas de pantalla),
        argumentación de las partes del proyecto relacionadas con cada uno de los puntos a) a g) mencionados arriba, con una argumentación de el por qué se optó por esa solución y no por otras.
        identificación de casos que harían que el proyecto deje de funcionar,
        conclusión personal.
        referencias consultadas

      <u>src       (80 pts)</u>
         Todos los archivos fuente necesarios para ejecutar la solución propuesta en el ambiente establecido al inicio del curso