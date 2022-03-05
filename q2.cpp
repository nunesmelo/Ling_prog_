#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 20

int M[n];
int cont;

//Sub-rotina secundario que retorna o fatorial do numero//

int fatorial(int i)
{
  if (i) 
  return i*fatorial(i-1);
  else return 1; 
}

//Função principal que retorna um inteiro qualquer//

int main()
{  
  //Escreve o vetor //  
    
  printf("\n DIGITE 20 NUMEROS E/OU ENCERRE COM UM NUMERO NEGATIVO:\n");
  for( int j=0; j<n; j++ )
     {
       scanf("%d",&M[j]);
       if(M[j]<0)
         {
           break;      
         } 
       cont++;  
     }
  printf("\nNUMERO DE ELEMENTOS:...\t%d\n\n", cont); 
 
  for( int i=0; i<cont; i++ )
     {  
       //Chama a sub-rotina secundaria//    
       M[i] = fatorial(i);    
     }

// Imprime o vetor fatorial de forma inversa//

  printf("\nO VETOR FATORIAL INVERSO E:\n\n");   
  for( int k=0; k<cont; k++ )
    {
      int m= cont - (k+1); 
      printf("%d\t", M[m]);                
    }
    
printf("\n\n\n");      
system("pause");           
}
