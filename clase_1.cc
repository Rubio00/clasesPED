#include <iostream>
#include <ctime>


std:: string GenerarCupon (std::string Letras );
void PremioCupon (std:: string premio);

int main(){

    srand(time(0));
    std:: string cupon_generado =  GenerarCupon("AGO");
    PremioCupon(cupon_generado);

   return 0; 
}

std:: string GenerarCupon (std::string Letras ){
    //generar el valor aleatorio 
    int numero_aleatorio = rand() % 100 + 999;
    std:: string cadena = std:: to_string(numero_aleatorio);

    return Letras + cadena; 
}

void PremioCupon(std::string premio){
    //Extraer el valor numerico del identificador
    premio.substr(3,4);

    //convertir a entero
    int conversion_entero = std:: stoi(premio);

    //Evualuar si es par o no par 
    if(premio % 2 == 0)
    {
        std:: cout << "tienes premio ";
    }else {
        std:: cout << "no tienes premio ";
    }
}