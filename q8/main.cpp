#include <iostream>

int somaEntreAB(int A, int B)
{
    if (A > B)
    {
        return 0;
    }
    else
    {
        return A + somaEntreAB(A + 1, B);
    }
}

int main()
{
    int A, B;
    std::cout << "Digite o valor de A: ";
    std::cin >> A;
    std::cout << "Digite o valor de B: ";
    std::cin >> B;
    std::cout << "A soma entre " << A << " e " << B << " e: " << somaEntreAB(A, B) << std::endl;
    return 0;
}