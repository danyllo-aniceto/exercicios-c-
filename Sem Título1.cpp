# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
main()

{

int n1,n2,multiplicacao;

setlocale(LC_ALL,"");

printf("Digite o 1� n�mero: ");
scanf("%d", & n1);
printf("Digite o 2� n�mero: ");
scanf("%d", & n2);
multiplicacao = n1 * n2;
printf("Multiplica��o dos valores :%d\n", multiplicacao);


system("pause");
}
