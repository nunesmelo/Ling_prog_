#include<stdio.h>
#include<stdlib.h>
#define M 20

//variaveis globais//

int vet1[M], vet2[M];
int cont1 , cont2;

//função principal//

int main()
{ 

//definição dos vetores//

  printf("\n DIGITE O PRIMEIRO VETOR DE 20 NUMEROS E/OU ENCERRE COM UM NUMERO NEGATIVO:\n");
  for( int i=0; i<M; i++ )
     {
       scanf("%d",&vet1[i]);
       if(vet1[i]<0)
         {
           break;      
         } 
       cont1++;  
     }
  printf("\n\n DIGITE O SEGUNDO VETOR DE 20 NUMEROS E/OU ENCERRE COM UM NUMERO NEGATIVO:\n");
  for( int j=0; j<M; j++ )
     {
       scanf("%d",&vet2[j]);
       if(vet2[j]<0)
         {
           break;      
         } 
       cont2++;  
     }

//impressão dos elementos comuns//

  printf("\n\nEsses sao os elementos em comum:\t ["); 
  for( int k=0; k<cont1; k++ )
    {for( int q=0; q<cont2; q++ )
       {
         if(vet1[k]==vet2[q])
          {
            printf("%d, ", vet1[k]);
          }
       }        
    }
    
    
printf("]\n");
system("pause");
}
