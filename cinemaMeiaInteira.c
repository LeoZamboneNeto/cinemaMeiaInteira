#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo_dia_da_semana(int dia,int mes,int ano);

int entradas, idade, idade2;
char estudante, estudante2, casal;
float valor;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int d,m,a,teste;
    do{
        teste = 0;
      printf("Calculo do dia da semana\n");
      printf("dia: ");
      scanf("%i",&d);
      printf("mes: ");
      scanf("%i",&m);
      printf("ano: ");
      scanf("%i",&a);
      if((d < 1 || d > 31) || (m < 1 || m > 12) || (a < 1583))
         teste = 1;
         if((m == 2) && (d + m) > 31) /*fevereiro tem no máximo 29 dias*/
         {
             if((m == 2) && (d == 29)) /*verifica se não é ano bissexto*/
             {
                 if(!(a% 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
                 teste = 1;
             }
         }
        if(teste)
        {
            printf("\n!!!ERRO!!! A data (%i/%i/%i) nao existe!!!\n",d,m,a);
        }
      }while(teste);
      //depois do teste de erro
            calculo_dia_da_semana(d,m,a);
system("Pause");
}
void calculo_dia_da_semana(int dia,int mes,int ano)
{


    switch (mes)
    {
        case 1: break;
        case 2: dia += 31; break;
        case 3: dia += 59; break;
        case 4: dia += 90; break;
        case 5: dia += 120; break;
        case 6: dia += 151; break;
        case 7: dia += 181; break;
        case 8: dia += 212; break;
        case 9: dia += 243; break;
        case 10: dia += 273; break;
        case 11: dia += 304; break;
        case 12: dia += 334; break;
    }
           /* Se o ano é um ano-bisexto E
           Se o mes de fevereiro ja passou entao acrescente um dia ao deslocamento*/
           if ( ((ano%4)==0) && ( ((ano%100)!=0) || ((ano%400)==0) ) && (mes > 2))
               dia += 1;
               dia += -1 + (ano-1)*365 + (ano-1)/4 -(ano-1)/100 +(ano-1)/400 ;

             switch (dia % 7)
             {
                case 0: printf("Segunda-feira, todos pagam meia entrada!\n Quantas entradas sao? ");
                        scanf("%d", &entradas);
                        valor = entradas * 0.5;
                        printf("Valor total: %.1f", valor);
                break;

                case 1: printf("Terca-feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if(entradas >= 2){
                            printf("Vocês não poderão pagar meia entrada.\n");
                        }
                        printf("\n");

                        if (entradas == 1){
                        printf("Qual sua idade? \n");
                        scanf("%d",  &idade);

                        if (idade <= 12 || idade >= 65){
                            printf("Você tem direito a meia Entrada!\n");
                        }else{
                            printf("Você é estudante? (s/n)");
                            scanf(" %c",  &estudante);

                            if(estudante == 's' || estudante == 'S'){
                                printf("Você tem direito a meia entrada! ");
                            }else{
                                printf("Você nao tem direito a meia entrada! ");
                            }
                        }
                        } break;



                case 2: printf("Quarta-Feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if (entradas >= 3) {
                            printf("Vocês não poderão pagar meia entrada.\n");
                        }

                        if (entradas == 1) {
                            printf("Qual sua idade? \n");
                            scanf("%d", &idade);

                       if (idade <= 12 || idade >= 65) {
                            printf("Você tem direito a meia Entrada!\n");
                            } else {
                                printf("Você é estudante? (s/n) ");
                                scanf(" %c", &estudante);
                                if (estudante == 's' || estudante == 'S') {
                                    printf("Você tem direito a meia entrada!\n");
                                } else {
                                    printf("Você nao tem direito a meia entrada!\n");
                                }
                            }
                        } else if (entradas == 2) {
                            printf("São um casal? (s/n)\n");
                            scanf(" %c", &casal);

                            if (casal == 's' || casal == 'S') {
                                printf("Vocês tem direito a meia entrada!\n");
                            } else {
                                printf("Vocês nao tem direito a meia entrada!\n");
                            }
                        }
                        printf("\n");
                        break;



                case 3: printf("Terca-feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if(entradas == 1){
                        printf("Qual sua idade? \n");
                        scanf("%d",  &idade);

                        if(idade <= 12 || idade >= 65){
                            printf("Você tem direito a meia Entrada!");
                        }else{
                            printf("Você é estudante? (s/n)");
                            scanf(" %c",  &estudante);
                            if(estudante == 's' || estudante == 'S'){
                                printf("Você tem direito a meia entrada! ");
                            }else{
                                printf("Você nao tem direito a meia entrada! ");
                            }
                        }if (entradas >= 2) {
                          printf("vocês não poderão pagar meia entrada.\n");
                        }
                        printf("\n");
                        } break;



                case 4: printf("Terca-feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if(entradas == 1){
                        printf("Qual sua idade? \n");
                        scanf("%d",  &idade);

                        if(idade <= 12 || idade >= 65){
                            printf("Você tem direito a meia Entrada!");
                        }else{
                            printf("Você é estudante? (s/n)");
                            scanf(" %c",  &estudante);
                            if(estudante == 's' || estudante == 'S'){
                                printf("Você tem direito a meia entrada! ");
                            }else{
                                printf("Você nao tem direito a meia entrada! ");
                            }
                        }if (entradas >= 2) {
                          printf("Vocês não poderão pagar meia entrada.\n");
                        }
                        printf("\n");
                        } break;



                case 5: printf("Terca-feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if(entradas == 1){
                        printf("Qual sua idade? \n");
                        scanf("%d",  &idade);

                        if(idade <= 12 || idade >= 65){
                            printf("Você tem direito a meia Entrada!");
                        }else{
                            printf("Você é estudante? (s/n)");
                            scanf(" %c",  &estudante);
                            if(estudante == 's' || estudante == 'S'){
                                printf("Você tem direito a meia entrada! ");
                            }else{
                                printf("Você nao tem direito a meia entrada! ");
                            }
                        }if (entradas >= 2) {
                          printf("Vocês não poderão pagar meia entrada.\n");
                        }
                        printf("\n");
                        } break;



                case 6: printf("Terca-feira, Quantas entradas sao?\n");
                        scanf("%d", &entradas);

                        if(entradas == 1){
                        printf("Qual sua idade? \n");
                        scanf("%d",  &idade);

                        if(idade <= 12 || idade >= 65){
                            printf("Você tem direito a meia Entrada!");
                        }else{
                            printf("Você é estudante? (s/n)");
                            scanf(" %c",  &estudante);
                            if(estudante == 's' || estudante == 'S'){
                                printf("Você tem direito a meia entrada! ");
                            }else{
                                printf("Você nao tem direito a meia entrada! ");
                            }
                        }if (entradas >= 2) {
                          printf("vocês não poderão pagar meia entrada.\n");
                        }
                        printf("\n");
                        } break;
             }
}
