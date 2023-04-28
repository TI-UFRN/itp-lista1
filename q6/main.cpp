#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

void escreverArquivoComMusicas(char *);

int main()
{
    char nomeArquivo[] = "musicas.txt";
    escreverArquivoComMusicas(nomeArquivo);
    std::ifstream arquivo_leitura(nomeArquivo);

    std::string linha;
    while (std::getline(arquivo_leitura, linha))
    {
        std::cout << linha << std::endl;
    }
    arquivo_leitura.close();

    std::cout << "\nDigite o nome de uma música da Lana Del Rey para procurar no arquivo: ";
    std::string musica_buscada;
    std::getline(std::cin, musica_buscada);

    std::ifstream arquivo_busca(nomeArquivo);

    bool encontrou = false;
    while (std::getline(arquivo_busca, linha))
    {
        if (linha == musica_buscada)
        {
            encontrou = true;
            break;
        }
    }

    arquivo_busca.close();

    if (encontrou)
    {
        std::cout << "\nA música " << musica_buscada << " foi encontrada no arquivo!\n";
    }
    else
    {
        std::cout << "\nA música " << musica_buscada << " não foi encontrada no arquivo!\n";
    }

    return 0;
}

void escreverArquivoComMusicas(char *nomeArquivo)
{
    std::remove(nomeArquivo);

    std::ofstream arquivo(nomeArquivo);

    arquivo << "Born to Die\n";
    arquivo << "Blue Jeans\n";
    arquivo << "Video Games\n";
    arquivo << "Summertime Sadness\n";
    arquivo << "West Coast\n";
    arquivo << "Young and Beautiful\n";
    arquivo << "Dark Paradise\n";
    arquivo << "National Anthem\n";
    arquivo << "High by the Beach\n";
    arquivo << "Lust for Life\n";
    arquivo << "Love\n";
    arquivo << "Ride\n";
    arquivo << "Gods and Monsters\n";
    arquivo << "Brooklyn Baby\n";
    arquivo << "Shades of Cool\n";
    arquivo << "Body Electric\n";
    arquivo << "Ultraviolence\n";
    arquivo << "Cruel World\n";
    arquivo << "Terrence Loves You\n";
    arquivo << "Old Money\n";
    arquivo << "The Blackest Day\n";
    arquivo << "Freak\n";
    arquivo << "Art Deco\n";
    arquivo << "Honeymoon\n";
    arquivo << "Music to Watch Boys To\n";
    arquivo << "24\n";
    arquivo << "Groupie Love\n";
    arquivo << "Summer Bummer\n";
    arquivo << "Change\n";

    arquivo.close();
}