#include <iostream>
#include <vector>
#include <string>
#include "catalogo.h"

using namespace std;

Catalogo::Catalogo()
{

}
Catalogo::Catalogo(string file)
{
    // Leer el archivo y almacenarlo en los vectores
}

void Catalogo::agregar(Pelicula &pelicula)
{
    peliculas.push_back(pelicula);
}
void Catalogo::agregar(Serie &serie)
{
    series.push_back(serie);
}
void Catalogo::calificar()
{
    // En proceso
}

void Catalogo::ver(){
    
    cout << "********************    Catalogo    ********************" << endl << endl;

    for (int i = 0; i < peliculas.size(); i++){
        peliculas[i].display();
    }
    for (int i = 0; i < series.size(); i++){
        series[i].verEpisodios();
    }

    cout << "********************************************************" << endl << endl;
}
void Catalogo::ver(string tipo){
    if (tipo == "peliculas"){
        
        cout << "********************    Peliculas    *******************" << endl << endl;
        
        for (int i = 0; i < peliculas.size(); i++){
            peliculas[i].display();
        }

        cout << "********************************************************" << endl << endl;
    }
    else if (tipo == "series"){

        cout << "*********************    Series    *********************" << endl << endl;
        
        for (int i = 0; i < series.size(); i++){
            series[i].verEpisodios();
        }

        cout << "********************************************************" << endl << endl;
    }
}
void Catalogo::verCalificacion(int calif)
{
    cout << "*****************    Calificacion " << calif << "    *****************" << endl << endl;

    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i].getCalificacion() >= calif){
            peliculas[i].display();
        }
    }

    /*for (int i = 0; i < series.size(); i++){
        if (series[i].getCalificacion() >= calif){
            series[i].display();
        }
    }*/

    cout << "********************************************************" << endl << endl;
}
void Catalogo::verCalificacion(int calif, string tipo)
{
    // En proceso (usar un while)
}
void Catalogo::verGenero()
{
    // En proceso (usar un while)
}