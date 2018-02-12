#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void permute_tableau(int notes[], int N)
{
    int j, tampon[N], index ;
    for (j=0; j<N; j++)
    {
        index = rand()%(j,N) ;
        if(notes[index]!=0)
        {
            tampon[j] = notes[index] ;
            notes[index] = 0 ;
        }
    }
    printf("LE TABLEAU PERMUTE : ") ;
    for(j=0; j<N; j++)
    {
        printf("%d | ",tampon[j]) ;
    }
}

int main()
{
    printf("Hello world!\n");
    int i,N,nb;
    printf("Nombre d'element : ");
    scanf("%d",&N);
    int notes[N];

	for (i=0;i<N ;i++)
    {
        printf("Entrer l'element [%d] : ",i+1);
        scanf("%d",&nb);
        notes[i]= nb;
    }
    permute_tableau(notes,N) ;

    return 0;
}
