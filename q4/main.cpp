#include <iostream>
#include <string>
#include <iomanip>
#include <map>

// Professor, não entendi direito o que a questão pedia, por isso, fiz dessa forma

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    char continuar;
    int numeroAlunos = 0;
    std::map<std::string, double> alunos;
    do
    {
        std::string nome;
        double nota1, nota2, nota3;
        
        std::cout << "Digite o nome do aluno: ";
        std::getline(std::cin, nome);

        std::cout << "Digite a primeira nota do aluno: ";
        std::cin >> nota1;

        std::cout << "Digite a segunda nota do aluno: ";
        std::cin >> nota2;

        std::cout << "Digite a terceira nota do aluno: ";
        std::cin >> nota3;

        std::cin.ignore(); 

        double media = (nota1 + nota2 + nota3) / 3;

        alunos[nome] = media;
        numeroAlunos++; 
 
        std::cout << "Deseja adicionar mais um aluno? (S/N) ";
        std::cin >> continuar;

        std::cin.ignore();
    } while (continuar == 'S' || continuar == 's');

    std::cout << "\nLista de alunos e suas médias:\n";
    for (auto const &aluno : alunos)
    {
        std::cout << aluno.first << ": " << aluno.second << std::endl;
    }

    double somaNotas = 0;
    for (auto const &aluno : alunos)
    {
        somaNotas += aluno.second;
    }
    double mediaNotas = somaNotas / numeroAlunos;

    std::cout << "\nMédia de todas as notas: " << mediaNotas << std::endl;

    return 0;
}