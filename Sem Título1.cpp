# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
main()

{

int n1,n2,multiplicacao;

setlocale(LC_ALL,"");

printf("Digite o 1º número: ");
scanf("%d", & n1);
printf("Digite o 2º número: ");
scanf("%d", & n2);
multiplicacao = n1 * n2;
printf("Multiplicação dos valores :%d\n", multiplicacao);


system("pause");
}
