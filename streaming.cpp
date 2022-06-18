#include <iostream>
#include "streaming.h"

using namespace std;

void Streaming::iniciar(){
    cout << "Bienvenidx a la plataforma de streaming" << endl << endl;

    int opcion = -1;
    string input;

    while(opcion != 0){
        cout << "Menu:" << endl
             << "1. Cargar archivo de datos" << endl
             << "2. Ver videos con calificacion o genero especificos" << endl
             << "3. Ver episodios de una serie" << endl
             << "4. Ver peliculas o episodios con cierta calificacion" << endl
             << "5. Calificar un video" << endl
             << "0. Salir" << endl << endl;

        cout << "Ingrese el numero de la opcion elegida: ";
        cin >> input;

        try {
            opcion = stoi(input);
            switch(opcion){
                case 1:
                    cargarCatalogo();
                    break;
                case 2:
                    verCalificacionOGenero();
                    break;
                case 3:
                    verEpisodios();
                    break;
                case 4:
                    verCalificacion();
                    break;
                case 5:
                    calificar();
                    break;
                case 0:
                    // Salir
                    break;
                default:
                    cout << "Error: Ingresa una opcion disponible del menu" << endl;
                    break;

            }
        }
        catch (const invalid_argument &excepcion) {
            cout << endl << "Error: Ingrese un numero" << endl;
        }
    }
}

void Streaming::cargarCatalogo() {
    cout << "Escribe el nombre del archivo (ej. base.csv): " << endl;

    try {
        string input;
        cin.ignore();
        getline(cin, input);

        Catalogo cat(input);
        catalogo = cat;

        cout << endl;
        catalogo.ver();
    }
    catch (...) {
        // completar el catch de error
    }
}

void Streaming::verCalificacionOGenero() {
    int opcion = -1;
    string input;

    while (opcion != 0){
        try {
            cout << "Ingresa 1 para ver calificaciones o 2 para ver generos: ";
            cin.ignore();
            cin >> input;  
            opcion = stoi(input);
            switch (opcion)
            {
            case 1:
                cout << "Ingresa el numero de calificacion: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                opcion = stoi(input);
                catalogo.verCalificacion(opcion);
                break;
            case 2:
                cout << "Ingresa el genero: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                catalogo.verGenero(input);
                break;
            case 0:
                // salir
                break;
            default:
                cout << "Error: Ingresa una opcion valida o 0 para volver al menu" << endl;
                break;
            }
        } 
        catch (const invalid_argument &excepcion){
            cout << endl << "Error: Ingrese un numero" << endl;
        }
    }
}

void Streaming::verEpisodios() {
    string input;
    try {
        cin.ignore();
        cout << "Ingresa el nombre de la serie: ";
        getline(cin, input);
        cout << endl;

        catalogo.verSerie(input);
    }
    catch (const invalid_argument &excepcion){
        cout << endl << "Error: Ingrese el nombre de la serie" << endl;
    }
}

void Streaming::verCalificacion() {
    int opcion = -1;
    int calificacion;
    string input;

    while (opcion != 0){
        try {
            cout << "Ingresa 1 para ver peliculas o 2 para ver series: ";
            cin.ignore();
            cin >> input; 
            cout << endl;

            opcion = stoi(input);

            switch (opcion)
            {
            case 1:
                cout << "Ingresa el numero de calificacion: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                calificacion = stoi(input);
                catalogo.verCalificacion(calificacion,"peliculas");
                break;
            case 2:
                cout << "Ingresa el numero de calificacion: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                calificacion = stoi(input);
                catalogo.verCalificacion(calificacion,"series");
                break;
            case 0:
                // salir
                break;
            default:
                cout << "Error: Ingresa una opcion valida o 0 para volver al menu" << endl;
                break;
            }
        } 
        catch (const invalid_argument &excepcion){
            cout << endl << "Error: Ingrese un numero" << endl;
        }
    }
}
void Streaming::calificar(){
    int opcion = -1;
    int calificacion;
    string input, nombre, episodio;

    while (opcion != 0){
        try {
            cout << "Ingresa 1 para calificar una pelicula o 2 para calificar una serie: ";
            cin.ignore();
            cin >> input; 
            cout << endl;

            opcion = stoi(input);

            switch (opcion)
            {
            case 1:
                cout << "Ingresa el nombre de la película: ";
                cin.ignore();
                cin >> nombre;
                cout << endl;

                cout << "Ingresa la nueva calificacion: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                calificacion = stoi(input);
                catalogo.calificar(calificacion,nombre);

                opcion = 0;
                break;
            case 2:
                cout << "Ingresa el nombre de la serie: ";
                cin.ignore();
                cin >> nombre;
                cout << endl;

                cout << "Ingresa el nombre del episodio: ";
                cin.ignore();
                cin >> episodio;
                cout << endl;

                cout << "Ingresa la nueva calificacion: ";
                cin.ignore();
                cin >> input;
                cout << endl;

                calificacion = stoi(input);
                catalogo.calificar(calificacion,nombre,episodio);

                opcion = 0;
                break;
            case 0:
                // salir
                break;
            default:
                cout << "Error: Ingresa una opcion valida o 0 para volver al menu" << endl;
                break;
            }
        } 
        catch (const invalid_argument &excepcion){
            cout << endl << "Error: Ingrese un numero" << endl;
        }
    }
}