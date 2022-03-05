#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
     float alt=0, ideal=0;
     char sexo[0];
     
printf ("Entre com sua altura sem ponto ou virgula.  ");
scanf ("%f",&alt);

printf ("\nQual o sexo ( M-Masculino / F-Feminino ).  ");
scanf ("%s",&sexo);

while (sexo[0] != 'f' && sexo[0] != 'F' && sexo[0] != 'm' && sexo[0] != 'M')
{
printf ("\nOpcao invalida digite novamente.  ");
scanf ("%s",&sexo);
}
if (sexo[0] == 'm' ||  sexo[0] == 'M')
{
ideal = alt - 100 -((alt -150)/4);
}
else if (sexo[0] == 'f' || sexo[0] == 'F')
{
ideal = alt - 100 -((alt - 150)/2);
}
system ("cls");               
printf ("\n\tAltura: %.1f\n\tSexo: %c\n\n\tPESO IDEAL: %.2f Kg",alt, sexo[0], ideal);
getch();
}



