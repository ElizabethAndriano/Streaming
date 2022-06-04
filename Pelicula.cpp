#include "pelicula.h"
#include <iostream>

using namespace std;

Pelicula::Pelicula()
{
    genero = "NE";
}

Pelicula::Pelicula(string g, string i, string n, double c, int d, string f) : Video(i, n, c, d, f)
{
    genero = g;
}

void Pelicula::display()
{
    cout << "Reproduciendo Película..." << endl;
    cout << "ID: " << getId() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Calificación: " << getCalificacion() << endl;
    cout << "Duración: " << getDuracion() << endl;
    cout << "Fecha De Estreno: " << getFechaEstreno() << endl;
    cout << "Género: " << genero << endl;
}