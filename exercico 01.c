#include <stdio.h>
#include <conio.h>

int somatotal(int num); //Prototipo da função tipo inteiro

void main()
{
 int num, soma;
printf ("Entre com o valor de um numero inteiro positivo.  ");
scanf ("%d",&num);
while (num <= 0)
{
 printf ("\nERRO, numero invalido digite um valor inteiro e positivo.  ");
 scanf ("%d",&num);
}
soma = somatotal(num);
           
printf ("\n\nA soma dos numeros entre 1 e %d e igual a: %d",num, soma);
getch();
}

int somatotal(int num)
{
    int soma=0, i=1;
    for (i=1; i<= num; i++)
      {
      soma += i;
      }
    return soma;   
}
