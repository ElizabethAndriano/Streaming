#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"
#include <string>

using namespace std;

class Episodio : public Video
{
private:
    int temporada;
    int numero;

public:
    Episodio();
    Episodio(int &t, int &num, string &i, string &n, double &c, int &d, string &f);

    int getTemporada();

    void display();
};

#endif