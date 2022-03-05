#include<stdio.h>
#include<stdlib.h>

//variaveis globais//

int n=20;
int cont;

//função principal com retorno inteiro//

int main()
{  
 int M[n];
 printf("\n DIGITE 20 NUMEROS E/OU ENCERRE COM UM NUMERO NEGATIVO:\n");
 for(int i=0; i<20; i++)
     {
       scanf("%d",&M[i]);
       if(M[i]<0)
         {
           break;      
         } 
       cont++;  
     }
 printf("\n A MATRIZ INVERTIDA:\n\n");
 int j;   
 for(int i=0; i<cont; i++)
    {
     j=cont - (i+1);
     printf("%d \t", M[j]);      
    }
 printf("\n\n");   
 system ("pause");   
}
