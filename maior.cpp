# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	float n1,n2;
	printf(" Digite um n�mero: ");
	scanf("%f",& n1);
	printf(" Digite um n�mero: ");
	scanf("%f",& n2);
	
	if(n1 > n2)
	{
		printf("\t O n�mero %d � maior que %d\n",n1,n2);
	}
	else(n2 > n1)
	{
		printf("\t O n�mero %d � maior que %d\n", n2,n1);
	}
	if
	{
		printf("\t O n�mero %d e %d s�o iguais\n", n1,n2);
	}
	
	system("pause");
}
