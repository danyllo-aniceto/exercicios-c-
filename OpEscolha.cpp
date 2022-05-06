# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	float n1,n2,result;
	int op;
	printf(" Digite um valor: ");
	scanf("%f",& n1);
	printf(" Digite um valor: \n\n");
	scanf("%f",& n2);
	printf(" Escolha uma operação básica para realizar o cálculo entre os números.\n");
	printf("\t [1] Adição \n");
	printf("\t [2] Subtração \n");
	printf("\t [3] Multiplicação \n");
	printf("\t [4] Divisão \n");
	printf(" Escolha: ");
	scanf(" %d",& op); 
	
	
	if(op == 1)
	{
		result = n1+n2;
		printf("\t Soma= %.2f \n",result);
	}
		if(op == 2)
	{
		result = n1-n2;
		printf("\t Subtração= %.2f \n",result);
	}
		if(op == 3)
	{
		result = n1*n2;
		printf("\t Multiplicação= %.2f \n",result);
	}
		if(op == 4)
	{
		if(n2 == 0 )
	    {
	    	printf("\t DIVISÃO IMPOSSÍVEL \n");
		}
		else
		{
			result = n1/n2;
	     	printf("\t Divisão= %.2f \n",result);
		}	
    }
	    if(op > 4 && op<= 0)
	    {
	    	printf("\t Escolha inválida, digite apenas um dos números (1,2,3,4). \n");
		}
		
		system("pause");
	}

