#include <stdio.h>
    int main(){
 //Dados da Primeira Carta

            char Estado1;
            char Codigo1[3];
            char Cidade1[20];
            unsigned long int Populacao1;
            float Area1;
            float Pib1;
            int PontosTuristicos1;
            float DesnsidadePopulacional1;
            float PibPercapita1;
            float Superpoder1;

//Dados da Segunda Carta

            char Estado2;
            char Codigo2[3];
            char Cidade2[20];
            unsigned long int Populacao2;
            float Area2;
            float Pib2;
            int PontosTuristicos2;
            float DesnsidadePopulacional2;
            float PibPercapita2;
            float Superpoder2;
            
// Atributos de comparação

            unsigned long int PopulacaoComp;
            float AreaComp;
            float PIBComp;
            int PontosTurisComp;
            float DensidadeComp;
            float PibPercapitaComp;
            float superpoderComp;

            int comparaCarta;

//Coleta de Dados da Primeira Carta

            printf("Digite uma letra de A a H para a primeira carta: \n");
            scanf("%c", &Estado1);

            printf("Digite o codigo da cidade: \n");
            scanf("%s", &Codigo1);

            printf("Digite o nome da cidade: \n");
            scanf("%s", &Cidade1);

            printf("Digite o valor da população da cidade: \n");
            scanf("%d", &Populacao1);

            printf("Digite o valor da área da cidade: \n");
            scanf("%f", &Area1);

            printf("Digite o valor do PIB da cidade: \n");
            scanf("%f", &Pib1);

            printf("Digite o número de pontos turisticos da cidade: \n");
            scanf("%d", &PontosTuristicos1);

 //Calculo de Densidade Poupulacional e Pib Per Capita da Primeira Carta

            DesnsidadePopulacional1 = (float)Populacao1 / Area1;
            PibPercapita1 = (float)Pib1 / Populacao1;

//Coleta de Dados da Segunda Carta

                printf("Digite uma letra de A a H para a segunda carta: \n");
                scanf("%c", &Estado2);

                printf("Digite o codigo da cidade: \n");
                scanf("%s", &Codigo2);

                printf("Digite o nome da cidade: \n");
                scanf("%s", &Cidade2);

                printf("Digite o valor da população da cidade: \n");
                scanf("%d", &Populacao2);

                printf("Digite o valor da área da cidade: \n");
                scanf("%f", &Area2);

                printf("Digite o valor do PIB da cidade: \n");
                scanf("%f", &Pib2);

                printf("Digite o número de pontos turisticos da cidade: \n");
                scanf("%d", &PontosTuristicos2);

//Calculo de Densidade Poupulacional e Pib Per Capita da Primeira Carta

            DesnsidadePopulacional2 = (float)(Populacao2 / Area2);
            PibPercapita2 = (float)(Pib2 / Populacao2);

//Calculo dos Super Poder

                Superpoder1 = (float) Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PibPercapita1 - DesnsidadePopulacional1;
                Superpoder2 = (float) Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PibPercapita2 - DesnsidadePopulacional2;

//Informações da Primeira Carta na Tela  

                printf("Dados da Primeira carta: \n");
                printf("Estado: %c \n", Estado1);
                printf("Codigo da Carta: %s \n", Codigo1);
                printf("Nome da Cidade: %s \n", Cidade1);
                printf("População: %d \n", Populacao1);
                printf("Área da cidade: %f \n", Area1);
                printf("PIB da cidade: %f \n", Pib1);
                printf("Pontos Turisticos: %d \n", PontosTuristicos1);
                printf("Densidade populacional: %2f \n", DesnsidadePopulacional1);
                printf("PIB Per Capita: %2f \n", PibPercapita1);
                            
//Informações da Segunda Carta na Tela  
            
                printf("Dados da Segunda Carta: \n");
                printf("Estado: %c \n", Estado2);
                printf("Codigo da Carta: %s \n", Codigo2);
                printf("Nome da Cidade: %s \n", Cidade2);
                printf("População: %d \n", Populacao2);
                printf("Área da cidade: %f \n", Area2);
                printf("PIB da cidade: %f \n", Pib2);
                printf("Pontos Turisticos: %d \n", PontosTuristicos2);
                printf("Densidade populacional: %2f \n", DesnsidadePopulacional2);
                printf("PIB Per Capita: %2f \n", PibPercapita2);


            //Comparação de Atributos

                printf("** Digite um atributo para a comparação\n **");
                printf("Escolha uma das opções: \n");
                printf("1. População: \n");
                printf("2. Área da Cidade\n");
                printf("3. PIB\n");
                printf("4. Pontos Turisticos\n");  
                printf("5. Densidade Populacional\n");      
                printf("6. Pontos PIB Percapita\n");
                printf("7. Super Poder\n");
                printf("Escolha: \n");
                scanf("%d", &comparaCarta);

        switch (comparaCarta)
        {
        case 1:
// Comparação da População
            if (Populacao1 > Populacao2){
                printf("Comparando a População das Cartas: \n");
                printf("Carta 1 - %s : %u \n", Cidade1, Populacao1);
                printf("Carta 2 - %s : %u \n", Cidade2, Populacao2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando a População das Cartas: \n");
                printf("Carta 1 - %s : %u \n", Cidade1, Populacao1);
                printf("Carta 2 - %s : %u \n", Cidade2, Populacao2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
        case 2:
//Comparação da Area
            if (Area1 > Area2){
                printf("Comparando a Area das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, Area1);
                printf("Carta 2 - %s : %f \n", Cidade2, Area2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando a Area das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, Area1);
                printf("Carta 2 - %s : %f \n", Cidade2, Area2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
        case 3:
//Comparação do PIB
            if (Pib1 > Pib2){
                printf("Comparando o PIB das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, Pib1);
                printf("Carta 2 - %s : %f \n", Cidade2, Pib2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando o PIB das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, Pib1);
                printf("Carta 2 - %s : %f \n", Cidade2, Pib2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
            case 4:
//Comparação de Pontos Turisticos
            if (PontosTuristicos1 > PontosTuristicos2){
                printf("Comparando os Pontos Turisticos das Cartas: \n");
                printf("Carta 1 - %s : %d \n", Cidade1, PontosTuristicos1);
                printf("Carta 2 - %s : %d \n", Cidade2, PontosTuristicos2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando os Pontos Turisticos das Cartas: \n");;
                printf("Carta 1 - %s : %d \n", Cidade1, PontosTuristicos1);
                printf("Carta 2 - %s : %d \n", Cidade2, PontosTuristicos2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
            case 5:
//Comparação de Densidade Populacional

            if (DesnsidadePopulacional1 < DesnsidadePopulacional2){
                printf("Comparando a Densidade Populacional das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, DesnsidadePopulacional1);
                printf("Carta 2 - %s : %f \n", Cidade2, DesnsidadePopulacional2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando a Densidade Populacional das Cartas: \n");
                printf("Carta 1 - %s : %f \n", Cidade1, DesnsidadePopulacional1);
                printf("Carta 2 - %s : %f \n", Cidade2, DesnsidadePopulacional2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade2);
            }
            break;
            case 6:
//Comparando PIB Percapita
            if (PibPercapita1 > PibPercapita2){
                printf("Comparando o PIB Percapita das Cartas: \n");
                printf("Carta 1 - %s : %2.f \n", Cidade1, PibPercapita1);
                printf("Carta 2 - %s : %2.f \n", Cidade2, PibPercapita2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando o PIB Percapita das Cartas: \n");
                printf("Carta 1 - %s : %2.f \n", Cidade1, PibPercapita1);
                printf("Carta 2 - %s : %2.f \n", Cidade2, PibPercapita2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
            case 7:
//Comparando o Super Poder 
            if (Superpoder1 > Superpoder2){
                printf("Comparando o Super Poder das Cartas: \n");
                printf("Carta 1 - %s : %2.f \n", Cidade1, Superpoder1);
                printf("Carta 2 - %s : %2.f \n", Cidade2, Superpoder2);
                printf("Resultado: Carta 1 (%s) venceu! \n", Cidade1);
            }
            else {
                printf("Comparando o Super Poder das Cartas: \n");
                printf("Carta 1 - %s : %2.f \n", Cidade1, Superpoder1);
                printf("Carta 2 - %s : %2.f \n", Cidade2, Superpoder2);
                printf("Resultado: Carta 2 (%s) venceu! \n", Cidade2);
            }
            break;
            default:
                printf("Opção Invalida\n");
            break;
        }   
            return 0;
    }
