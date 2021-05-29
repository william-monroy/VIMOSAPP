#ifndef Usuario_h
#define Usuario_h

class Usuario
{
private:
    string cuenta;
    string nombre;
    int misVideos[20];
    int contadorVideos;

public:
    Usuario();
    string getCuenta() { return this->cuenta; }
    void setCuenta(string cuenta) { this->cuenta = cuenta; }
    string getNombre() { return this->nombre; }
    void setNombre(string nombre) { this->nombre = nombre; }
    int getContadorVideos() { return this->contadorVideos; }
    int getUnIdMisVideos(int id);
    bool operator+=(int id1);
};

Usuario::Usuario()
{
    this->cuenta = "";
    this->nombre = "";
    this->contadorVideos = 0;
}

int Usuario::getUnIdMisVideos(int id)
{
    try
    {
        return this->misVideos[id];
    }
    catch(const std::exception& e)
    {
        return -1;
    }
}

bool Usuario::operator+=(int id1)
{
    bool resultado = false;
    if (this->contadorVideos == 20)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < this->contadorVideos; i++)
        {
            if (this->misVideos[i] == id1){
                return false;
            }
            else if (i == this->contadorVideos - 1){
                this->misVideos[this->contadorVideos] = id1;
                this->contadorVideos++;
                return true;
            }
        }
    }
}

#endif // !Usuario_h