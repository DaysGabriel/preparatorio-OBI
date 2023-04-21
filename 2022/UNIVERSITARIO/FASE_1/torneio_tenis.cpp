#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    vector<char> partidas;
    char resultado;

    // peço o resultado dos jogos
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &resultado); //é muito importante que haja este espaço antes do %c
        partidas.push_back(resultado);
    }

    int contador = 0;

    // conto a quantidade de partidas vencidas
    for (int i = 0; i < 6; i++)
    {
        if (partidas[i] == 'V')
        {
            contador++;
        }
    }

    /*

    participantes que venceram 5 ou 6 jogos serão colocados no Grupo 1;
    participantes que venceram 3 ou 4 jogos serão colocados no Grupo 2;
    participantes que venceram 1 ou 2 jogos serão colocados no Grupo 3;
    participantes que não venceram nenhum jogo não serão convidados a continuar com os treinamentos.

    */

    // Informo em qual grupo o jogador está
    if (contador >= 5)
    {
        printf("1\n");
    }
    else if (contador >= 3 && contador <= 4)
    {
        printf("2\n");
    }
    else if (contador >= 1 && contador <= 2)
    {
        printf("3\n");
    }
    else
    {
        printf("-1\n");
    }
}