#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include "catalogo.h"

using namespace std;

Catalogo::Catalogo()
{
}
Catalogo::Catalogo(string file)
{
    ifstream archivo(file);
    string linea;
    
    getline(archivo,linea);

    while(getline(archivo,linea)){
        stringstream stream(linea);

        string id, nombre, duracion, genero, calificacion, fecha, nombreEp, temporada, numero, idEp;

        getline(stream,id,',');
        getline(stream,nombre,',');
        getline(stream,duracion,',');
        getline(stream,genero,',');
        getline(stream,calificacion,',');
        getline(stream,fecha,',');
        getline(stream,nombreEp,',');
        getline(stream,temporada,',');
        getline(stream,numero,',');
        getline(stream,idEp,',');

        double cal = stod(calificacion);
        int dur = stoi(duracion);

        if (idEp.empty()){
            Pelicula pelicula(genero,id,nombre,cal,dur,fecha);
            agregar(pelicula);
        }
        else {
            int temp = stoi(temporada);
            int num = stoi(numero);

            Episodio episodio(temp,num,idEp,nombreEp,cal,dur,fecha);

            if (series.empty()){
                Serie serie(id,nombre,genero);
                serie.agregarEpisodio(episodio);
                agregar(serie);
            }
            else{
                bool existe = false;
                for (int i = 0; i < series.size(); i++){
                    if (id == series[i].getId()){
                        series[i].agregarEpisodio(episodio);
                        existe = true;
                    }
                }
                if (!existe){
                    Serie serie(id,nombre,genero);
                    serie.agregarEpisodio(episodio);
                    agregar(serie);   
                }
            }
        }
    }
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
    
}

void Catalogo::ver()
{

    cout << "********************    Catalogo    ********************" << endl
         << endl;

    for (int i = 0; i < peliculas.size(); i++)
    {
        peliculas[i].display();
    }
    for (int i = 0; i < series.size(); i++)
    {
        series[i].verEpisodios();
    }

    cout << "********************************************************" << endl
         << endl;
}
void Catalogo::ver(string tipo)
{
    if (tipo == "peliculas")
    {

        cout << "********************    Peliculas    *******************" << endl
             << endl;

        for (int i = 0; i < peliculas.size(); i++)
        {
            peliculas[i].display();
        }
    }
    else if (tipo == "series")
    {

        cout << "*********************    Series    *********************" << endl
             << endl;

        for (int i = 0; i < series.size(); i++)
        {
            series[i].verEpisodios();
        }
    }

    cout << "********************************************************" << endl
         << endl;
}
void Catalogo::verCalificacion(double calif)
{
    cout << "*****************    Calificacion " << calif << "    *****************" << endl
         << endl;

    for (int i = 0; i < peliculas.size(); i++)
    {
        if (peliculas[i].getCalificacion() >= calif)
        {
            peliculas[i].display();
        }
    }

    for (int i = 0; i < series.size(); i++)
    {
        Serie serie = series[i];
        serie.vaciar();

        vector<Episodio> episodios = series[i].getCalificacion(calif);
        serie.agregarTemporada(episodios);
        if (!episodios.empty()){
            serie.verEpisodios();
        }
    }

    cout << "********************************************************" << endl
         << endl;
}
void Catalogo::verCalificacion(double calif, string tipo)
{
    cout << "*****************    Calificacion " << calif << "    *****************" << endl
         << endl;

    if (tipo == "peliculas")
    {

        cout << "************    Calificacion Peliculas " << calif << "    ************" << endl
             << endl;

        for (int i = 0; i < peliculas.size(); i++)
        {
            if (peliculas[i].getCalificacion() >= calif)
            {
                peliculas[i].display();
            }
        }
    }
    else if (tipo == "series")
    {

        cout << "*************    Calificacion Series " << calif << "    **************" << endl
             << endl;
        for (int i = 0; i < series.size(); i++)
        {
            Serie serie;
            vector<Episodio> episodios = series[i].getCalificacion(calif);
            serie.agregarTemporada(episodios);
            serie.verEpisodios();
        }
    }
    cout << "********************************************************" << endl
         << endl;
}
void Catalogo::verGenero(string genero)
{
    cout << "********************    " << genero << "     *********************" << endl;
    cout << endl;

    for (int i = 0; i < peliculas.size(); i++)
    {
        vector <string> generos;
        string gen;
        stringstream linea(peliculas[i].getGenero());
        while(getline(linea,gen,'/')){
            generos.push_back(gen);
        }

        for (int j = 0; j < generos.size(); j++){
            if (generos[j] == genero)
            {
                peliculas[i].display();
            }
        }
    }

    for (int i = 0; i < series.size(); i++)
    {
        if (series[i].getGenero() == genero)
        {
            series[i].verEpisodios();
        }
    }

    cout << "********************************************************" << endl
         << endl;
}