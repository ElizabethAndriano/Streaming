#ifndef STREAMING_H
#define STREAMING_H

#include "catalogo.h"

class Streaming{
private:
    Catalogo catalogo;

public:
    void iniciar();
    
    void cargarCatalogo();
    void verCalificacionOGenero();
    void verEpisodios();
    void verCalificacion();
    void calificar();

};


#endif