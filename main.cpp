#include <iostream>
//#include <vector>
//#include <string>
#include "streaming.h"

using namespace std;

int main()
{
    /*Episodio episodio(1,1,"tt1668899","Winter Is Coming",9,57,"04/17/2011");
    episodio.display();

    Serie serie("tt0944947","Game Of Thrones","Action, Adventure, Drama, Fantasy, Romance");
    serie.agregarEpisodio(episodio);
    serie.verEpisodios();

    Pelicula pelicula("Action, Adventure, Sci-Fi, Thriller","tt0107290","Jurassic Park",8.1,127,"11/6/1993");
    pelicula.display();

    Catalogo catalogo;
    catalogo.agregar(pelicula);
    catalogo.agregar(serie);

    

    Catalogo catalogo("BasePeliculas.csv");
    catalogo.ver();*/

    Streaming streaming;

    streaming.iniciar();

    return 0;
}