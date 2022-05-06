# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
main()

{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2, resultado;
	int op;
	//criação do menu das operações
	printf("\tESCOLHA SUA OPERAÇÃO:\n");
	printf("\t[1]SOMA\n");
	printf("\t[2]SUBTRAÇÃO\n");
	printf("\t[3]MULTIPLICAÇÃO\n");
	printf("\t[4]DIVISÃO\n");
	scanf("%d", & op);
	/****************************/
	/*
	if(op >= 1 || op <= 4)
	{//abertura do if
	printf("Digite o 1º valor: ");
	scanf("%f", & n1);
	printf("Digite o 2º valor: ");
	scanf("%f", & n2);
	}//fechamentodo if
	else
	{
	printf("OPÇÃO INVÁLIDA\n");
	*/
	if(op < 1 || op > 4)
	{
		printf("\n\tOPÇÃO INVÁLIDA!!!!!\n\n");
	}
	else
	{
		printf("\tDigite o 1º valor: ");
		scanf("%f", & n1);
		printf("\tDigite o 2º valor: ");
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
		printf("\tSubtração dos valores =%.1f\n",resultado);
	break;
	case 3 :
		resultado = n1 * n2;
		printf("\tMultiplicação dos valores = %.1f\n",resultado);
	break;
	case 4 :
	if(n2 == 0)
	{
		printf("\tDIVISÃO IMPOSSÍVEL!!!!\n");
	}
	else
	{
		resultado = n1 / n2;
		printf("\tDivisão dos valores = %.1f\n",resultado);
	}
	break;
	default:
		printf("\tVocê digitou uma opção inválida!!!\n");
	break;	
	}//fechamento da estrutura switch
	
	system("pause");
}
