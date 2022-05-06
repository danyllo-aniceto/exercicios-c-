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
		printf("\t O número %.2f é maior que o número %.2f. \n",n1,n2);
	}
	else 
	{
		printf("\t O número %.2f é maior que o número %.2f. \n",n2,n1);
	}

	system("pause");
}
