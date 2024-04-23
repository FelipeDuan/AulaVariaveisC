// Aula sobre Variavéis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Declarando Varíaveis
    int Idade;

    // Declarando e iniacializando variáveis
    //int Idade = 0;

    // Função para escrever algo na saída padrão (console)
    printf("Qual a sua idade? \n");
    scanf("%d", &Idade); //Receber dados para guardar na variável

    // Saída de Dados
    printf("A sua idade é %d", Idade);

    return 0;
}