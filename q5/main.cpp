#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>

void escreverArquivo(std::string);
std::map<std::string, double> lerArquivo(std::string);
void imprimirMedias(const std::map<std::string, double>&);

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    std::string nomeArquivo = "alunos.txt";
    escreverArquivo(nomeArquivo);
    auto medias = lerArquivo(nomeArquivo);
    imprimirMedias(medias);
    return 0;
}

void escreverArquivo(std::string nomeArquivo)
{
    std::ofstream arquivo(nomeArquivo, std::ios::app);
    if (arquivo.is_open())
    {
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

            arquivo << nome << std::endl;
            arquivo << nota1 << std::endl;
            arquivo << nota2 << std::endl;
            arquivo << nota3 << std::endl;

            std::cout << "Deseja adicionar mais um aluno? (S/N): ";
            char resposta;
            std::cin >> resposta;
            std::cin.ignore();
            if (resposta == 'N' || resposta == 'n')
            {
                break;
            }
        } while (true);
        arquivo.close();
    }
    else
    {
        std::cout << "Erro ao abrir o arquivo " << nomeArquivo << std::endl;
    }
}

std::map<std::string, double> lerArquivo(std::string nomeArquivo)
{
    std::ifstream arquivo(nomeArquivo);
    std::map<std::string, double> medias;
    if (arquivo.is_open())
    {
        std::string nome;
        double nota1, nota2, nota3;
        while (std::getline(arquivo, nome))
        {
            arquivo >> nota1 >> nota2 >> nota3;
            arquivo.ignore();
            double media = (nota1 + nota2 + nota3) / 3.0;

            medias[nome] = media;
        }
        arquivo.close();
    }
    else
    {
        std::cout << "Erro ao abrir o arquivo " << nomeArquivo << std::endl;
    }
    return medias;
}

void imprimirMedias(const std::map<std::string, double> &medias)
{
    for (const auto &[nome, media] : medias)
    {
        std::cout << nome << ": " << media << std::endl;
    }
}
