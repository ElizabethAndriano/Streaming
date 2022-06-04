#include <iostream>
#include "episodio.h"

using namespace std;

Episodio::Episodio()
{
    temporada = 0;
    numero = 0;
}

Episodio::Episodio(int t, int num, string i, string n, double c, int d, string f) : Video(i, n, c, d, f)
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
    cout << "   Episodio " << getId() << endl;
    cout << "   Nombre: " << getNombre() << endl;
    cout << "   Calificacion: " << getCalificacion() << endl;
    cout << "   Duracion: " << getDuracion() << endl;
    cout << "   Fecha De Estreno: " << getFechaEstreno() << endl;
    cout << "   Temporada: " << temporada << endl;
    cout << "   Numero: " << numero << endl << endl;
}