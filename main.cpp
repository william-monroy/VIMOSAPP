#include <iostream>
#include <string>
#include <fstream>

#ifdef _WIN64
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

#include "Pelicula.h"
#include "Episodio.h"
#include "Usuario.h"
#include "Utils.h"

int main(int argc, char const *argv[])
{
    Video *videos[50];
    Usuario usuario;
    string nomArchivo;
    cin >> nomArchivo;

    fstream archivo;

    char tipoVideo;
    int idVideo, duracion, calificacion, numeroEp, numTemporada;
    string titulo, serie, genero;
    int cantVideos = 0;
    archivo.open(nomArchivo);
    while (archivo >> tipoVideo)
    {
        if (tipoVideo == 'p')
        {
            archivo >> idVideo >> titulo >> genero >> duracion >> calificacion;
            videos[cantVideos] = new Pelicula(idVideo, titulo, genero, duracion, calificacion);
            cantVideos++;
        }
        else
        {
            archivo >> idVideo >> titulo >> genero >> duracion >> calificacion >> titulo >> numeroEp >> numTemporada;
            videos[cantVideos] = new Episodio(idVideo, titulo, genero, duracion, calificacion, titulo, numeroEp, numTemporada);
            cantVideos++;
        }
    }
    archivo.close();
    string SO = "";

    #if defined(_WIN64)
        cout << "Estoy en Windows de 64 bits.\n"
            << endl;
        SO = "Windows";
    #elif defined(__linux__)
        cout << "Estoy en Linux." << endl;
        SO = "Linux";
    #elif defined(__MACH__)
        cout << "Estoy en Mac." << endl;
        SO = "Mac";
    #endif
    
    clear(SO);
    vimosapp();

    return 0;
}
