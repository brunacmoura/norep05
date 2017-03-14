#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ 
    
    int i, j, num, k, m, flag, vet[5];
    srand(time(NULL));
    for (i=0; i < 100; i++)
    {              
        for (j=0; j < 6; j++)
        {
            num = rand() % 6;
            if( j == 0 )
                vet[j] = num;
            else
            {
                flag = 0;
                for(m=0; m<j; m++)
                {
                    if(num == vet[m])
                        flag=1;
                }
                if(flag == 0)
                    vet[j] = num;
                else
                    j--;
            }
        }
            for (k=0; k<6; k++)
                printf("%d\t", vet[k]);
        printf("\n");
    }

    return 0;
}
