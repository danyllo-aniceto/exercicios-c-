# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
main()

{
	float n1,n2,soma,sub,mult,divi;
	setlocale(LC_ALL,"");
	
	printf(" Digite o 1� valor: ");
	scanf("%f", & n1);
	printf(" Digite o 2� valor: ");
	scanf("%f", & n2);
	
	soma = n1+n2;
	sub = n1-n2;
	mult = n1*n2;
	divi = n1/n2;
	
	printf(" O valor da soma �= %.2f \n",soma);
	printf(" O valor da subtra��o �= %.2f \n",sub);
	printf(" O valor da multiplica��o �= %.2f \n",mult);
	printf(" O valor da divis�o �= %.2f \n",divi);
	
	system("pause");
	}
