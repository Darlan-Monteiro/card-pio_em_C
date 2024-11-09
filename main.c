#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int main()
{   
    // declaração de variaveis
    char nome[50], sabor[3], tamanho[2], outro_desejo[2];
    float valor_pedido = 0;
    
    // input para a identificação do usuário
    printf("Insira seu nome: ");
    scanf("%s", nome);
    for(int i = 0; i < strlen(nome); i++){ // for para percorrer a variável e descobrir o tamanho dela
    nome[i] = toupper(nome[i]); // após descobrir o tamanho, uso "toupper" para deixar todas as letras maiúsculas
    }
    // menu de boas vindas e o cardápio
    printf("\nOlá, %s. Seja bem-vindo(a) ao CodeFood.\n", nome);
    printf("|--------------------Cardápio-----------------------------|");
    printf("\n| Tamanho |  | Bife Acebolado(BA) |  | Filé de Frango(FF) |");
    printf("\n|    P    |  |    R$ 16.00        |  |    R$ 15.00        |");
    printf("\n|    M    |  |    R$ 18.00        |  |    R$ 17.00        |");
    printf("\n|    G    |  |    R$ 22.00        |  |    R$ 21.00        |\n");
    printf(" ---------------------------------------------------------");
    
    while(1){
        // bloco de código para receber o sabor
        
        printf("\nDigite o sabor BA para Bife Acebolado ou FF para Filé de Frango: ");
        scanf("%s", sabor);
        getchar();
        for(int i = 0; i< strlen(sabor);i++){
        sabor[i] = toupper(sabor[i]);
        }
        // verifica se o sabor é válido ou não
        if(strcmp(sabor,"BA") != 0 && strcmp(sabor,"FF") != 0){
            printf("Sabor inválido. Tente novamente");
            continue;
        }
        
        
        // bloco de código para receber o tamanho
        printf("\nDigite o tamanho P para Pequeno, M para Médio e G para Grande: ");
        scanf("%s", tamanho);
        getchar();
        for(int i = 0; i < strlen(tamanho); i++){
            tamanho[i] = toupper(tamanho[i]);
        }
        // verifica se o tamanho é válido ou não
        if(strcmp(tamanho, "P") != 0 && strcmp(tamanho, "M") != 0 && strcmp(tamanho, "G") != 0){
            printf("Tamanho inválido. Tente novamente");
            continue;
        }
        
        // if para verificar o sabor e o tamanho do prato, assim podendo gerar o valor
        if(strcmp(sabor,"BA") == 0){
            if(strcmp(tamanho, "P") == 0){
                printf("\n- Você pediu um Bife Acebolado no tamanho P no valor de: R$ 16.00\n");
                valor_pedido += 16.0;
            }
            else if(strcmp(tamanho, "M") ==0){
                printf("\n- Você pediu um Bife Acebolado no tamanho M no valor de: R$ 18.00\n");
                valor_pedido += 18.0;
            }
            else{
                printf("\n- Você pediu um Bife Acebolado no tamanho G no valor de: R$ 22.00\n");
                valor_pedido += 22.0;
            }
        }
        
        // if para verificar o sabor e o tamanho do prato, assim podendo gerar o valor
        if(strcmp(sabor,"FF") == 0){
            if(strcmp(tamanho, "P") == 0){
                printf("\n- Você pediu um Filé de Frango no tamanho P no valor de: R$ 15.00\n");
                valor_pedido += 15.0;
            }
            else if(strcmp(tamanho, "M") ==0){
                printf("\n- Você pediu um Filé de Frango no tamanho M no valor de: R$ 17.00\n");
                valor_pedido += 17.0;
            }
            else{
                printf("\n- Você pediu um Filé de Frango no tamanho G no valor de: R$ 21.00\n");
                valor_pedido += 21.0;
            }
        }
        // input para saber se o usuário deseja outro pedido
        printf("Deja pedir mais alguma coisa? S/N: ");
        scanf("%s", outro_desejo);
        getchar();
        
        for(int i = 0; i < strlen(outro_desejo); i++){ // for para percorrer a variável e descobrir o tamanho dela
            outro_desejo[i] = toupper(outro_desejo[i]); // após descobrir o tamanho, uso "toupper" para deixar todas as letras maiúsculas
        }
        
        // if para verificarse o usuário digitou positivo ou negativo
        if(strcmp(outro_desejo, "N") == 0){
            break;
        }
    }
    // printa na tela o valor final do pedido, após o usuário terminar os pedidos
    printf("\n- O valor do pedido foi de: R$ %.2f", valor_pedido);
    
    return 0;
}
