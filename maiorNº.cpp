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
		printf("\t O n�mero %.2f � maior que o n�mero %.2f. \n",n1,n2);
	}
	else 
	{
		printf("\t O n�mero %.2f � maior que o n�mero %.2f. \n",n2,n1);
	}

	system("pause");
}
