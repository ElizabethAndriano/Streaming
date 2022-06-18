#ifndef SERIE_H
#define SERIE_H

#include "episodio.h"
#include <vector>
#include <string>

using namespace std;

class Serie
{
private:
    string id;
    string titulo;
    string genero;
    vector<Episodio> episodios;

public:
    Serie();
    Serie(string i, string t, string g);

    void agregarEpisodio(Episodio &ep);
    void agregarTemporada(vector<Episodio> &temp);
    void vaciar();

    string getId();
    string getNombre();
    string getGenero();
    vector<Episodio> getCalificacion(double &calif);
    void verEpisodios();
    void verTemporada(int &temp);
};

#endif