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
	printf(" Escolha uma opera��o b�sica para realizar o c�lculo entre os n�meros.\n");
	printf("\t [1] Adi��o \n");
	printf("\t [2] Subtra��o \n");
	printf("\t [3] Multiplica��o \n");
	printf("\t [4] Divis�o \n");
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
		printf("\t Subtra��o= %.2f \n",result);
	}
		if(op == 3)
	{
		result = n1*n2;
		printf("\t Multiplica��o= %.2f \n",result);
	}
		if(op == 4)
	{
		if(n2 == 0 )
	    {
	    	printf("\t DIVIS�O IMPOSS�VEL \n");
		}
		else
		{
			result = n1/n2;
	     	printf("\t Divis�o= %.2f \n",result);
		}	
    }
	    if(op > 4 && op<= 0)
	    {
	    	printf("\t Escolha inv�lida, digite apenas um dos n�meros (1,2,3,4). \n");
		}
		
		system("pause");
	}

