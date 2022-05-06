# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

float contaCorrente = 0;//variável global	
main()
{//abertura do main
	setlocale(LC_ALL,"");	
	int op;
	float deposito,saque;
	printf("\tESCOLHA SUA OPÇÃO:\n");
	printf("\t[1]Saldo\n");
	printf("\t[2]Deposito\n");
	printf("\t[3]Saque\n");
	printf("\t[4]Sair\n");
	scanf("%d", & op);
	/**UTILIZANDO A ESTRUTURA SWHITCH/CASE**/
	switch(op)
	{//abertura do switch
	case 1:
		system("cls");//LIMPAR A TELA
		printf("\tSeu saldo atual é: R$%.2f reais\n\n",contaCorrente);
		return main();
	break;
	case 2:
		system("cls");
		printf("\tInforme o valor do deposito: ");
		scanf("%f",&deposito);
		contaCorrente =contaCorrente + deposito;//incrementando o valor na variável contaCorrente
		printf("\tDeposito realizado com sucesso!\n\tVocê depositou %.2f\n",deposito);
		return main();
	break;
	case 3:
		system("cls");
		printf("\Informe o valor da saque: ");
		scanf("%f", & saque);
		if(saque > contaCorrente)
		{//abertura do if
			system("cls");
			printf("\tDesculpe!\t\nVocê não possui saldo suficiente!!!!\n");
			return main();
		}//fechamento do if
		else
		{	
			system("cls");
			contaCorrente = contaCorrente - saque;
			printf("\tSaque realizado com sucesso!\n\tVocê sacou %.2f\n",saque);
			return main();
		}
	break;
	case 4:
		printf("\tO programa será encerrado!\n");
	break;
	default:
		system("cls");
		printf("\tOPÇÃO INVÁLIDA!!!!!\n");
		return main();
	break;
	}//fechamento do switch
	
	system("pause");
}//fechamento do main


