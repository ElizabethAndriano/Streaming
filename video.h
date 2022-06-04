#ifndef VIDEO_H
#define VIDEO_H

#include <string>

using namespace std;

class Video
{
private:
    string id;
    string nombre;
    double calificacion;
    int duracion;
    string fechaEstreno;

public:
    Video();
    Video(string i, string n, double c, int d, string f);

    string getId();
    string getNombre();
    double getCalificacion();
    int getDuracion();
    string getFechaEstreno();

    void setCalificacion(double &cali);
    virtual void display() = 0;
};

#endif