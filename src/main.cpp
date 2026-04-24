#include<iostream>
#include<Foco.hpp>
int main(int argc, char const *argv[])
{
   Foco foquito;

   foquito.Encender();
   foquito.Apagar();
   std::cout
   <<"EstadoFoco:;"
    <<foquito.LeerEstado()
    <<std::endl;

    return 0;
}
