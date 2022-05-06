# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
main()

{

float n1,n2,soma,sub,mult,divi;

setlocale(LC_ALL,"");

printf("Digite o primeiro número: ");
scanf("%f", & n1);
printf("Digite o segundo número: ");
scanf("%f", & n2);

soma = n1+n2;
sub = n1-n2;
mult = n1*n2;
divi = n1/n2;

printf("\t O valor da soma= %.2f \n ", soma);
printf("\t O valor da subtração= %.2f \n ", sub);
printf("\t O valor da multiplicação= %.2f \n ", mult);
printf("\t O valor da divisão= %.2f \n ", divi);

system("pause");
}
