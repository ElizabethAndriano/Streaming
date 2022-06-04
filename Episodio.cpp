#include "episodio.h"
#include <iostream>

using namespace std;

Episodio::Episodio()
{
    temporada = 0;
    numero = 0;
}

Episodio::Episodio(int &t, int &num, string &i, string &n, double &c, int &d, string &f) : Video(i, n, c, d, f)
{
    temporada = t;
    numero = num;
}

int Episodio::getTemporada()
{
    return temporada;
}

void Episodio::display()
{
    cout << "Reproduciendo Capítulo..." << endl;
    cout << "ID: " << getId() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Calificación: " << getCalificacion() << endl;
    cout << "Duración: " << getDuracion() << endl;
    cout << "Fecha De Estreno: " << getFechaEstreno() << endl;
    cout << "Temporada: " << temporada << endl;
    cout << "Numero: " << numero << endl;
}