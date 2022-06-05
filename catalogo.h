#ifndef CATALOGO_H
#define CATALOGO_H

#include <vector>
#include <string>
#include "pelicula.h"
#include "serie.h"

using std::vector;
using std::string;

class Catalogo
{
private:
    vector<Pelicula> peliculas;
    vector<Serie> series;

public:
    Catalogo();
    Catalogo(string file);

    void agregar(Pelicula &pelicula);
    void agregar(Serie &serie);
    void calificar();
    
    void ver();
    void ver(string tipo);
    void verCalificacion(double calif);
    void verCalificacion(double calif, string tipo);
    void verGenero(string genero);

};

#endif