#include <stdio.h>
#include <stdlib.h>  /*Biblioteca para rand e srand*/
#include <time.h>    /*Biblioteca para time*/

void norep(void)
{

    int  j, num, k, m, flag, vet[5];    /*Declaracao de variaveis*/
    for (j=0; j < 6; j++)
        {
            num = rand() % 6;    /*Sorteio de 0 a 5*/
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
            for (k=0; k<6; k++)
                printf("%d\t", vet[k]);
      return ;
}

int main(void)
{ 
     srand(time(NULL));
 int i;   
    for (i=1; i < 101; i++)
    {
        norep();
        printf("\n");
    }


    return 0;
}
