# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	float n1,n2;
	printf(" Digite um número: ");
	scanf("%f",& n1);
	printf(" Digite um número: ");
	scanf("%f",& n2);
	
	if(n1 > n2)
	{
		printf("\t O número %d é maior que %d\n",n1,n2);
	}
	else(n2 > n1)
	{
		printf("\t O número %d é maior que %d\n", n2,n1);
	}
	if
	{
		printf("\t O número %d e %d são iguais\n", n1,n2);
	}
	
	system("pause");
}
