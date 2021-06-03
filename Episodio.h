#ifndef Episodio_h
#define Episodio_h

#include "Video.h"

class Episodio : public Video
{
private:
    string serie;
    int numeroEp;
    int numTemporada;

public:
    Episodio();
    Episodio(int idVideo, string titulo, string genero, int duracion, int calificacion, string serie, int numeroEp, int numTemporada);
    string getSerie() { return this->serie; }
    void setSerie(string serie) { this->serie = serie; }
    int getNumeroEp() { return this->numeroEp; }
    void setNumeroEp(int numeroEp) { this->numeroEp = numeroEp; }
    int getNumTemporada() { return this->numTemporada; }
    void setNumTemporada(int numTemporada) { this->numTemporada = numTemporada; }
    void muestra();
};

Episodio::Episodio() : Video()
{
    this->serie = "";
    this->numeroEp = 0;
    this->numTemporada = 0;
}

Episodio::Episodio(int idVideo, string titulo, string genero, int duracion, int calificacion, string serie, int numeroEp, int numTemporada) : Video(idVideo, titulo, genero, duracion, calificacion)
{
    this->serie = serie;
    this->numeroEp = numeroEp;
    this->numTemporada = numTemporada;
}

void Episodio::muestra()
{
    cout << "EPISODIO" << endl;
    Video::muestra();
    cout << "              Serie: " << this->serie << endl;
    cout << " Numero de episodio: " << this->numeroEp << endl;
    cout << "Numero de temporada: " << this->numTemporada << endl;
}

#endif // !Episodio_h