#include <iostream>
#include <iomanip>
#include "functions.hpp"

int main(int argc, char* argv[]) {
	std::cout << std::fixed << std::setprecision(2);
	if(argc == 1) {
		std::cout << "Informe a figura que você quer calcular a área no momento da execução\nExemplo: $ ./areaCalculator.exe t\nOnde t = triangle, r = retangle and c = circle\n";
		return 1;
	}

	if(argv[1][0] == 't') {
		double base, heigh;
		std::cout << "Informe a base: ";
		std::cin >> base;
		std::cout << "Informe a altura: ";
		std::cin >> heigh;

		std::cout << "Valor da área: " << areaTriangle(base, heigh) << std::endl;
				
	} else if(argv[1][0] == 'r') {
		double base, heigh;
                std::cout << "Informe a base: ";
                std::cin >> base;
                std::cout << "Informe a altura: ";
                std::cin >> heigh;

                std::cout << "Valor da área: " << areaRetangle(base, heigh) << std::endl;
	} else if(argv[1][0] == 'c') {
		double radius;
                std::cout << "Informe o raio: ";
                std::cin >> radius;

                std::cout << "Valor da área: " << areaCircle(radius) << std::endl;
	} else {
		std::cout << "Informe a figura que você quer calcular a área no momento da execução\nExemplo: $ ./areaCalculator.exe t\nOnde t = triangle, r = retangle and c = circle\n";
                return 1;
	}

	return 0;
}
