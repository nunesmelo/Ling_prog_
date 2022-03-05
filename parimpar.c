#include <stdio.h>
#include <conio.h>
#include <stdio.h>

int impar_par (int num);
void main ()
{
    int num;
    int condicao;
    printf ("Entre com um numero inteiro.  ");
    scanf("%d", &num);
    condicao = impar_par(num);
    
    if (condicao == 1) 
    {
      printf ("Esse numero e Par.\n\n\n");
    } 
    else 
    {
    printf ("Esse numero e Impar.\n\n\n");
    }
    system("Pause");
}

int impar_par (int num)
{
    int resp;
    if (num % 2 ==0)
    {
        resp =1;
    } else {
        resp =0;
    } 
return resp;
}
