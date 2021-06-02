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

int main()
{
    
    Video * videos[50];
    Usuario usuario;
    string nomArchivo;
    cin >> nomArchivo;

    ifstream archivo;

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
        clear(SO);
        cout << "Estoy en Windows de 64 bits.\n"
            << endl;
        SO = "Windows";
    #elif defined(__linux__)
        clear(SO);
        cout << "Estoy en Linux." << endl;
        SO = "Linux";
    #elif defined(__MACH__)
        clear(SO);
        cout << "Estoy en Mac." << endl;
        SO = "Mac";
    #endif
    
    bool continuar = true;
    while (continuar)
    {
        clear(SO);
        vimosapp();
        cout << "1 ) Consultar la lista de videos disponibles" << endl;
        cout << "2 ) Consultar la lista de Videos con cierta calificación" << endl;
        cout << "3 ) Consultar la lista de Videos por género" << endl;
        cout << "4 ) Ver datos del usuario" << endl;
        cout << "5 ) Modificar el perfil del usuario" << endl;
        cout << "6 ) Agregar video a la lista del usuario" << endl;
        cout << "7 ) Salir" << endl;
        cout << "\nOPCION: ";
        int opcion;
        cin >> opcion;
        switch (opcion){
            case 1:{
                clear(SO);
                /*• Consultar la lista de videos disponibles. Debe mostrar en la pantalla la lista de videos,
                especificando si se trata de una película o de un episodio de una serie. Debe mostrar todos
                los datos de cada uno de los videos de acuerdo con su tipo.*/
                
                break;
            }
            case 2:{
                clear(SO);
                /*• Consultar la lista de Videos con cierta calificación, debe preguntar al usuario la
                calificación y mostrar todos los datos de los videos que tengan dicha calificación.
                En esta opción es necesario validar que la calificación sea un número entre 0 y 5.*/
                
                break;
            }
            case 3:{
                clear(SO);
                /*• Consultar la lista de Videos por género, debe preguntar al usuario el género y mostrar los
                datos de todos los videos que sean de ese género. El género debe ser un string de una sola
                palabra.*/
                
                break;
            }
            case 4:{
                clear(SO);
                /*• Ver datos del usuario, esta opción debe mostrar el nombre y cuenta del usuario, así como la
                lista con todos los datos de cada uno de los videos que pertenecen a la lista del usuario.*/
                
                break;
            }
            case 5:{
                /*• Modificar el perfil del usuario, debe pedir que se teclee el nombre y la cuenta del usuario y
                modificarlos en el objeto correspondiente.*/
                
                break;
            }
            case 6:{
                clear(SO);
                /*• Agregar video a la lista del usuario, debe preguntar al usuario el id del video que se quiere
                agregar y agregarlo a la lista del usuario. Esta opción se debe resolver utilizando la
                sobrecarga del operador += que se definió en la clase Usuario. 
                En esta opción se debe validar que el id del video exista, en caso de no existir, se debe volver
                a pedir el dato tantas veces como el usuario lo teclee equivocado; o bien si se teclea el valor 0
                se debe salir de la opción y volver al menú.*/
                
                break;
            }
            case 7:{
                clear(SO);
                /*Terminar*/
                continuar = false;
                break;
            }
            default:{
                clear(SO);
                cout << "Error: Opcion incorrecta" << endl;
                pause(SO);
            }
        }
    }

    return 0;
}
