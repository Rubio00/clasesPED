#include <iostream>
#include <ctime>

std::string GenerarCupon(std::string Letras);
void PremioCupon(std::string premio);

int main()
{
    srand(time(0));
    std::string cupon_generado = GenerarCupon("AGO");
    PremioCupon(cupon_generado);

    int cantidad;
    std:: cout << "Ingrese la cantidad de cupones a generar ";
    std:: cin >> cantidad;

    std:: string cupones[cantidad];

    return 0;
}

std::string GenerarCupon(std::string Letras)
{
    // generar el valor aleatorio
    int numero_aleatorio = rand() % 100 + 999;
    std::string cadena = std::to_string(numero_aleatorio);

    return Letras + cadena;
}

void PremioCupon(std::string premio)
{
    // Extraer el valor numérico (a partir del 3er carácter en adelante)
    std::string parte_numerica = premio.substr(3);

    // convertir a entero
    int conversion_entero = std::stoi(parte_numerica);

    // Evaluar si es par o no par
    if (conversion_entero % 2 == 0)
    {
        std::cout << "tienes premio ";
    }
    else
    {
        std::cout << "no tienes premio ";
    }
}

std::string SolicitarDatos()
{
    std::string prefijo;

    do
    {
        std::cout << "Ingresa el prefijo del cupon : ";
        std::cin >> prefijo;

        if (prefijo.length() == 3)
        {
            return prefijo;
        }
        else
        {
            return "Recuerda que son 3 letras maximo ";
        }
    }while(true);
    
    
}