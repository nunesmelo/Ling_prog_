/*QUESTAO 7)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10         /*Definido aqui o tamanho do vetor que se quer trabalhar...*/


int V_al[N];               /*Vetor inicial gerado pelo programa*/
int V[2*N];                /* Vetor inicial intercalado com o seu numero de repeticoes por elemento*/
int cont[N];               /* Vetor contador*/

int main()
{
  int i, j;
  int c1=0;  /* c1 e c2 sao contadores  que verificam se um numero é par ou nao */
  int c2=0; 
  
/*Gerando um vetor aleatorio...*/    
  printf("VETOR ALEATORIO...\n\n");    
  srand(time(NULL));
  for( i=0; i<N; i++ )
     { 
       if(i==0)
        {  V_al[i] = N;
           printf("%d\t ", V_al[i]); } 
       else         
        {  V_al[i] = rand()%N; 
           printf("%d\t ", V_al[i]); }                 
     } 
     
/*Condição inicial do vetor contador*/

  for( i=0; i<N; i++)
     {
       cont[i]= 0;        /*Devemos inicial o valor de cada contador*/
     } 
     
/*Verificando a reocorrencia dos elementos...*/
         
  for( i=0; i<N; i++)
     {for( j=0; j<N; j++)
         {
            if( V_al[i]== V_al[j] ) 
              { cont[i]++; }       
         }
     }
   
/*Escrevendo o vetor contador...*/

  printf("\nVETOR REPETIÇOES...\n\n");
  for( int k=0; k<N; k++)
     {
       printf("%d\t", cont[k]); 
     }
  
/*Escrevendo o novo Vetor...*/    

  for( i=0; i<2*N; i++)
     {
       if(!(i%2))
         {  
           V[i]= V_al[c1];
           c1++;
         }                                
       else
         {
           V[i]= cont[c2];
           c2++;       
         }       
     }
  printf("\nCADA ELEMENTO DO VETOR ALEATORIO PRESEDIDO DO SEU NUMERO DE REPETIÇÕES...\n\n");
  for( j=0; j<2*N; j++)
     {
       printf("%d\t", V[j]);       
     }
  printf("\n\n");                        
  system("pause");
} 
