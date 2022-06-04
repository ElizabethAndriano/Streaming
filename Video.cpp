#include "video.h"
#include <string>

using namespace std;

Video::Video()
{
    id = "NE";
    nombre = "NE";
    calificacion = 0;
    duracion = 0;
    fechaEstreno = "NE";
}

Video::Video(string i, string n, double c, int d, string f)
{
    id = i;
    nombre = n;
    calificacion = c;
    duracion = d;
    fechaEstreno = f;
}

string Video::getId(){
    return id;
}
string Video::getNombre(){
    return nombre;
}
double Video::getCalificacion(){
    return calificacion;
}
int Video::getDuracion(){
    return duracion;
}
string Video::getFechaEstreno(){
    return fechaEstreno;
}

void Video::setCalificacion(double &cali)
{
    calificacion = cali;
}