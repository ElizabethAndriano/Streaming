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

Serie::Serie(string &i, string &t, string &g, vector<Episodio> &episodiosIniciales)
{
    id = i;
    titulo = t;
    genero = g;
    episodios = episodiosIniciales;
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

void Serie::verEpisodios()
{
    cout << "Reproduciendo Serie..." << endl;
    cout << "ID: " << id << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Genero: " << genero << endl;

    for (int i = 0; i < episodios.size(); i++)
    {
        episodios[i].display();
    }
}

void Serie::verTemporada(int &temp)
{
    cout << "Reproduciendo Temporada " << temp << " De " << titulo << endl;
    cout << "ID: " << id << endl;
    cout << "Genero: " << genero << endl;

    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getTemporada() == temp)
        {
            episodios[i].display();
        }
    }
}