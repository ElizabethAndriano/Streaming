#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"
#include <string>

using namespace std;

class Pelicula : public Video
{
private:
    string genero;

public:
    Pelicula();
    Pelicula(string &g, string &i, string &n, double &c, int &d, string &f);

    void display();
};

#endif