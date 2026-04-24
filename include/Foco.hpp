#pragma once
#include<EstadoFoco.hpp>
class Foco
{
    private:
     EstadoFoco estado;
    public:
    Foco(){
        this->encendido = true;
    }
    -Foco(){}
    void Encender(){
        this -> encendido=true;
    }
    void Apagar(){
        this -> encendido=false;
    }
    EstadoFoco LeerEstado(){
        return this -> encendido;
    }
};