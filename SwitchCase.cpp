# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
main()

{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2, resultado;
	int op;
	//cria��o do menu das opera��es
	printf("\tESCOLHA SUA OPERA��O:\n");
	printf("\t[1]SOMA\n");
	printf("\t[2]SUBTRA��O\n");
	printf("\t[3]MULTIPLICA��O\n");
	printf("\t[4]DIVIS�O\n");
	scanf("%d", & op);
	/****************************/
	/*
	if(op >= 1 || op <= 4)
	{//abertura do if
	printf("Digite o 1� valor: ");
	scanf("%f", & n1);
	printf("Digite o 2� valor: ");
	scanf("%f", & n2);
	}//fechamentodo if
	else
	{
	printf("OP��O INV�LIDA\n");
	*/
	if(op < 1 || op > 4)
	{
		printf("\n\tOP��O INV�LIDA!!!!!\n\n");
	}
	else
	{
		printf("\tDigite o 1� valor: ");
		scanf("%f", & n1);
		printf("\tDigite o 2� valor: ");
		scanf("%f", & n2);
	}
	switch(op)
	{//abertura da estrutura switch
	case 1 :
		resultado = n1 + n2;
		printf("\tSoma dos valores = %.1f\n",resultado);
	break;
	case 2 :
		resultado = n1 - n2;
		printf("\tSubtra��o dos valores =%.1f\n",resultado);
	break;
	case 3 :
		resultado = n1 * n2;
		printf("\tMultiplica��o dos valores = %.1f\n",resultado);
	break;
	case 4 :
	if(n2 == 0)
	{
		printf("\tDIVIS�O IMPOSS�VEL!!!!\n");
	}
	else
	{
		resultado = n1 / n2;
		printf("\tDivis�o dos valores = %.1f\n",resultado);
	}
	break;
	default:
		printf("\tVoc� digitou uma op��o inv�lida!!!\n");
	break;	
	}//fechamento da estrutura switch
	
	system("pause");
}
