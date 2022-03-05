#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int recebcubo(int num);//prototipo do tipo inteiro 

int main()
{
       int cubo; // onde vai receber a função 
       int num;  // onde vai receber o numero do teclado 
       printf ("Digite um numero inteiro.  ");
       scanf ("%d",&num);
       
    cubo = recebcubo(num); // chama a função e passa  o valor e recebe o resultado
    printf ("\n\nO cubo desse numero e igual a: %d",cubo); // imprime o resultado 
    getch();
}

int recebcubo(int num) // recebe o valor 
{
    int cubo;
    cubo = num * num * num;
    return cubo; // retorna o calculo 
}
