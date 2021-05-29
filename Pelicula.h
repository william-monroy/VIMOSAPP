#ifndef Pelicula_h
#define Pelicula_h

#include "Video.h"

class Pelicula : public Video
{
private:
    
public:
    Pelicula();
    Pelicula(int idVideo, string titulo, string genero, int duracion, int calificacion);
    void muestra();
};

Pelicula::Pelicula() : Video()
{
}

Pelicula::Pelicula(int idVideo, string titulo, string genero, int duracion, int calificacion) : Video(idVideo,titulo,genero,duracion,calificacion)
{
}

void Video::muestra(){
    
} 

#endif // !Pelicula_h