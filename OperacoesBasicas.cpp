# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
main()

{
	float n1,n2,soma,sub,mult,divi;
	setlocale(LC_ALL,"");
	
	printf(" Digite o 1º valor: ");
	scanf("%f", & n1);
	printf(" Digite o 2º valor: ");
	scanf("%f", & n2);
	
	soma = n1+n2;
	sub = n1-n2;
	mult = n1*n2;
	divi = n1/n2;
	
	printf(" O valor da soma é= %.2f \n",soma);
	printf(" O valor da subtração é= %.2f \n",sub);
	printf(" O valor da multiplicação é= %.2f \n",mult);
	printf(" O valor da divisão é= %.2f \n",divi);
	
	system("pause");
	}
