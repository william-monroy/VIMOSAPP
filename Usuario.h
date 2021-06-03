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
    for (int i = 0; i <20; i++)
        misVideos[i] = 0;
    this->contadorVideos = 0;
}

int Usuario::getUnIdMisVideos(int id)
{
    try
    {
        return this->misVideos[id];
    }
    catch (const std::exception &e)
    {
        return -1;
    }
}

bool Usuario::operator+=(int id1)
{
    bool resultado = false;
    if (this->contadorVideos == 20)
    {
        resultado = false;
    }
    else
    {
        for (int i = 0; i < 20; i++)
        {
            if (this->misVideos[i] == id1)
            {
                resultado = false;
                break;
            }
            else if (i == 19)
            {                
                this->misVideos[this->contadorVideos] = id1;
                this->contadorVideos++;
                resultado = true;
            }
        }
    }
    return resultado;
}

#endif // !Usuario_h