# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
main()

{

float n1,n2,soma,sub,mult,divi;

setlocale(LC_ALL,"");

printf("Digite o primeiro n�mero: ");
scanf("%f", & n1);
printf("Digite o segundo n�mero: ");
scanf("%f", & n2);

soma = n1+n2;
sub = n1-n2;
mult = n1*n2;
divi = n1/n2;

printf("\t O valor da soma= %.2f \n ", soma);
printf("\t O valor da subtra��o= %.2f \n ", sub);
printf("\t O valor da multiplica��o= %.2f \n ", mult);
printf("\t O valor da divis�o= %.2f \n ", divi);

system("pause");
}
