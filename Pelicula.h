#ifndef Pelicula_h
#define Pelicula_h

#include "Video.h"

class Pelicula : public Video
{
private:
public:
    Pelicula();
    //Pelicula(int idVideo, string titulo, string genero, int duracion, int calificacion);
    Pelicula(int, string, string, int, int);
    void muestra();
};

Pelicula::Pelicula() : Video()
{
}

Pelicula::Pelicula(int idVideo, string titulo, string genero, int duracion, int calificacion) : Video(idVideo, titulo, genero, duracion, calificacion)
{
}

void Pelicula::muestra()
{
    cout << "Muestra";
}

#endif // !Pelicula_h