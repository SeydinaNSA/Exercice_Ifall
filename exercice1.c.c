#include <stdio.h>
#include <stdlib.h>

double moy_olymp(int notes[], int N)
{
    int x,min,max,taille,somme;
    double moyenne=1 ;

    min = notes[N] ;
    for(x=0;x<N;x++)
    {
       if (notes[x]>notes[x+1])
       {
           max = notes[x] ;
       }
       if (notes[x]<min)
       {
           min = notes[x] ;
       }
    }

    for(x=0;x<N;x++)
    {
        if (notes[x]== max)
        {
            notes[x] = 0 ; break ;
        }
    }
    for(x=0;x<N;x++)
    {
        if (notes[x]== min)
        {
            notes[x] = 0 ; break ;
        }
    }
    somme = 0 ;
    for(x=0;x<N;x++)
    {
        somme = somme + notes[x] ;
    }
   taille = N - 2 ;
   moyenne = somme/taille ;
    return moyenne ;
}

int main()
{
    printf("Hello world!\n");
    int i,N,nb;
    printf("Nombre d'element : ");
    scanf("%d",&N);

    int notes[N];
	for (i=0;i<N ;i++ )
    {
        printf("Entrer l'element [%d] : ",i+1);
        scanf("%d",&nb);
        notes[i]=nb;
    }

    printf("la moyenne olympique est %fl = ",moy_olymp(notes,N));
    return 0;
}
