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

string Pelicula::getGenero(){
    return genero;
}

void Pelicula::display()
{
    cout << "Pelicula " << getId() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Calificacion: " << getCalificacion() << endl;
    cout << "Duracion: " << getDuracion() << endl;
    cout << "Fecha De Estreno: " << getFechaEstreno() << endl;
    cout << "Genero: " << genero << endl << endl;
}