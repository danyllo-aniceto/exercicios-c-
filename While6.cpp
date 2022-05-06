# include <iostream>
# include <locale.h>
# include <stdlib.h>
# include <stdio.h> 
using namespace std;
float contaCorrente =0;//criação da variável global
main()
{
	setlocale(LC_ALL,"Portuguese");
	int op=-1;
	float deposito, saque;

	
	while(op != 4)
	{//abertura da estrutura while
		printf("\tESCOLHA SUA OPÇÃO:\n");
		printf("\t[1]Saldo\n");
		printf("\t[2]Deposito\n");
		printf("\t[3]Saque\n");
		printf("\t[4]Sair\n");
		scanf("%d", & op);
		switch(op)
		{//abertura do switch
			case 1:
				system("cls");//LIMPAR A TELA
				printf("\tSeu saldo atual é: R$%.2f reais\n\n",contaCorrente);
			break;
			
			case 2:
				system("cls");
				printf("\tInforme o valor do deposito: ");
				scanf("%f",& deposito);
				contaCorrente =contaCorrente + deposito;//incrementando o valor na variável contaCorrente
				printf("\tDeposito realizado com sucesso!\n\tVocê depositou %.2f\n",deposito);
			break;
			
			case 3:
				system("cls");
				printf("Informe o valor da saque: ");
				scanf("%f", & saque);
				if(saque > contaCorrente)
				{//abertura do if
					system("cls");
					printf("\tDesculpe!\t\nVocê não possui saldo suficiente!!!!\n");
				}//fechamento do if
				else
				{	
					system("cls");
					contaCorrente = contaCorrente - saque;
					printf("\tSaque realizado com sucesso!\n\tVocê sacou %.2f\n",saque);
				}
			break;
	
			case 4:
				printf("\tO programa será encerrado!\n");
			break;
	
			default:
				system("cls");
				printf("\tOPÇÃO INVÁLIDA!!!!!\n");			
			break;
		}
	}//fechamento da estrutura while
	system("pause");
}
