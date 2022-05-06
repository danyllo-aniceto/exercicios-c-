# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	float n1,n2,n3,aux;
	printf(" Digite um número: ");
	scanf("%f",& n1);
	printf(" Digite um número: ");
	scanf("%f",& n2);
	printf(" Digite um número: ");
	scanf("%f",& n3);
	
	
	if(n1 > n2)
	{
	  aux = n1;
	  n1 = n2;
	  n2 = aux;
	}
	
	if(n1 > n3)
	{
	  aux = n1;
	  n1 = n3;
	  n3 = aux;	
	}
	
	if(n2 > n3)
	{
	  aux = n2;
	  n2 = n3;
	  n3 = aux;	
	}
	
	printf(" O menor número é %.2f e o maior número é %.2f \n",n1,n3);

	system("pause");
}
