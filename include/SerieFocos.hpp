#pragma once
#include <iostream>
#include <Foco.hpp>

class SerieFocos
{
private:
    Foco focos[10]
public:
    SerieFocos(){};
    ~SerieFocos(){};
    void MostrarFocos(){
        for (auto&&f : focos)
        {
            std::cout<<f.LeerEstado()
        }
        std::cout<< std ::endl;
    }
};