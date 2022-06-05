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
    // Se agregará cuando veamos leer archivos
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
    }
    else if (tipo == "series"){

        cout << "*********************    Series    *********************" << endl << endl;
        
        for (int i = 0; i < series.size(); i++){
            series[i].verEpisodios();
        }
    }

    cout << "********************************************************" << endl << endl;
}
void Catalogo::verCalificacion(double calif)
{
    cout << "*****************    Calificacion " << calif << "    *****************" << endl << endl;

    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i].getCalificacion() >= calif){
            peliculas[i].display();
        }
    }
    
    for (int i = 0; i < series.size(); i++){
        Serie serie;
        vector<Episodio> episodios = series[i].getCalificacion(calif);
        serie.agregarTemporada(episodios);
        serie.verEpisodios();
    }

    cout << "********************************************************" << endl << endl;
}
void Catalogo::verCalificacion(double calif, string tipo)
{
    cout << "*****************    Calificacion " << calif << "    *****************" << endl << endl;

    if (tipo == "peliculas"){

        cout << "************    Calificacion Peliculas " << calif << "    ************" << endl << endl;

        for (int i = 0; i < peliculas.size(); i++){
            if (peliculas[i].getCalificacion() >= calif){
                peliculas[i].display();
            }
        }
    }
    else if (tipo == "series"){

        cout << "*************    Calificacion Series " << calif << "    **************" << endl << endl;
        for (int i = 0; i < series.size(); i++){
            Serie serie;
            vector<Episodio> episodios = series[i].getCalificacion(calif);
            serie.agregarTemporada(episodios);
            serie.verEpisodios();
        }
    }
    cout << "********************************************************" << endl << endl;
}
void Catalogo::verGenero(string genero)
{
    cout << "********************    Genero     *********************" << endl;
    cout << genero << endl << endl;

    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i].getGenero() >= genero){
            peliculas[i].display();
        }
    }

    for (int i = 0; i < series.size(); i++){
        if (series[i].getGenero() == genero){
            series[i].verEpisodios();
        }
    }

    cout << "********************************************************" << endl << endl;
}