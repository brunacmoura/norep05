#include <stdio.h>
#include <stdlib.h>  /*Biblioteca para rand e srand*/
#include <time.h>    /*Biblioteca para time*/

int norep(int a, int b)   /*Funcao de sorteio sem reposicao*/
{

    int j, num, k, m, flag, vet[b-a+1];    /*Declaracao de variaveis*/
    for (j=0; j < (b-a+1); j++)
        {
            num = a + rand() % (b-a+1);    /*Sorteio de a ate b*/
            if( j == 0 )
                vet[j] = num;
            else
            {
                flag = 0;            /*Nao ha repeticao*/
                for(m=0; m<j; m++)     /*Comparar com os numeros anteriores*/
                {
                    if(num == vet[m])
                        flag=1;       /*Ha repeticao*/
                }
                if(flag == 0)
                    vet[j] = num;
                else
                    j--;       /*Testa o mesmo j ate dar um numero diferente*/
            }
        }
            for (k=0; k < (b-a+1); k++)
                printf("%d\t", vet[k]);
      return ;
}

int main(void)
{ 
     srand(time(NULL));   /*Garante que o programa vai ser diferente pela semente sorteada*/
 int i;   
    for (i=0; i < 100; i++)
    {
        norep(0,5);
        printf("\n");
    }


    return 0;
}
