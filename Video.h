#ifndef Video_h
#define Video_h

class Video
{
protected:
    int idVideo;
    string titulo;
    string genero;
    int duracion;
    int calificacion;

public:
    Video();
    Video(int idVideo, string titulo, string genero, int duracion, int calificacion);
    int getIdVideo() { return this->idVideo; }
    void setIdVideo(int idVideo) { this->idVideo = idVideo; }
    string getTitulo() { return this->titulo; }
    void setTitulo(string titulo) { this->titulo = titulo; }
    string getGenero() { return this->genero; }
    void setGenero(string genero) { this->genero = genero; }
    int getDuracion() { return this->duracion; }
    void setDuracion(int duracion) { this->duracion = duracion; }
    int getCalificacion() { return this->calificacion; }
    void setCalificacion(int calificacion) { this->calificacion = calificacion; }
    virtual void muestra() = 0;
};

Video::Video()
{
    this->idVideo = 0;
    this->titulo = "";
    this->genero = "";
    this->duracion = 0;
    this->calificacion = 0;
}

Video::Video(int idVideo, string titulo, string genero, int duracion, int calificacion)
{
    this->idVideo = idVideo;
    this->titulo = titulo;
    this->genero = genero;
    this->duracion = duracion;
    this->calificacion = calificacion;
}

void Video::muestra()
{
    cout << "                 ID: " << this->idVideo << endl;
    cout << "             Titulo: " << this->titulo << endl;
    cout << "             Genero: " << this->genero << endl;
    cout << "           Duracion: " << this->duracion << endl;
    cout << "       Calificacion: " << this->calificacion << endl;
}

#endif // !Video_h