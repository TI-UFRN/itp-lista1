#include <iostream>

int potencia(int, int);

int main()
{
    int base, expoente;
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "Digite o expoente: ";
    std::cin >> expoente;
    std::cout << "Resultado: " << potencia(base, expoente) << std::endl;
    return 0;
}

int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        return base * potencia(base, expoente - 1);
    }
}