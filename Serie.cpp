#include "serie.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Serie::Serie()
{
    id = "NE";
    titulo = "NE";
    genero = "NE";
}

Serie::Serie(string i, string t, string g)
{
    id = i;
    titulo = t;
    genero = g;
}

void Serie::agregarEpisodio(Episodio &ep)
{
    episodios.push_back(ep);
}
void Serie::agregarTemporada(vector<Episodio> &temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        episodios.push_back(temp[i]);
    }
}

void Serie::vaciar()
{
    vector<Episodio> ep;
    episodios = ep;
}

string Serie::getId()
{
    return id;
}

string Serie::getNombre()
{
    return titulo;
}

string Serie::getGenero()
{
    return genero;
}

vector<Episodio> Serie::getCalificacion(double &calif)
{
    vector<Episodio> epCalificacion;
    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getCalificacion() >= calif)
        {
            epCalificacion.push_back(episodios[i]);
        }
    }
    return epCalificacion;
}

void Serie::verEpisodios()
{
    cout << "Serie " << id << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Genero: " << genero << endl
         << endl;

    for (int i = 0; i < episodios.size(); i++)
    {
        episodios[i].display();
    }
}

void Serie::verTemporada(int &temp)
{
    cout << "Serie " << id << endl;
    cout << "Titulo: " << titulo << endl
         << endl;
    cout << "Reproduciendo Temporada " << temp << " De " << titulo << endl;
    cout << "ID: " << id << endl;
    cout << "Genero: " << genero << endl
         << endl;

    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getTemporada() == temp)
        {
            episodios[i].display();
        }
    }
}

void Serie::calificarEpisodio(string nombre, double calif)
{
    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getNombre() == nombre)
        {
            episodios[i].setCalificacion(calif);
            episodios[i].display();
        }
    }
}