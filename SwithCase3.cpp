# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");	
	int op;
	printf("\t ESCOLHA UMA COR:\n");
	printf("\t[1]Vermelho\n");
	printf("\t[2]Amarelo\n");
	printf("\t[3]Azul\n");
	printf("\t[4]Verde\n");
	printf("\t[5]Roxo\n");
	printf("\t[6]Rosa\n");
	printf("\t[7]Preto\n");
	printf("\t[8]Sair\n");
	scanf("%d", & op);

	switch(op)
	{
	case 1:
		system("cls");
		printf("\t Você escolheu a cor Vermelho.\n\n",op);
		return main();
	break;
	case 2:
		system("cls");
		printf("\t Você escolheu a cor Amarelo.\n\n",op);
		return main();
	break;
	case 3:
		system("cls");
		printf("\t Você escolheu a cor Azul.\n\n",op);
		return main();
	break;
	case 4:
		system("cls");
		printf("\t Você escolheu a cor Verde.\n\n",op);
		return main();
	break;
	case 5:
		system("cls");
		printf("\t Você escolheu a cor Roxo.\n\n",op);
		return main();
	break;
	case 6:
		system("cls");
		printf("\t Você escolheu a cor Rosa.\n\n",op);
		return main();
	break;
	case 7:
		system("cls");
		printf("\t Você escolheu a cor Preto.\n\n",op);
		return main();
	break;
	case 8:
		printf("\t Programa encerrado.\n\n",op);
	break;
	default:
		system("cls");
		printf("\tOPÇÃO INVÁLIDA!!!!!\n");
		return main();
	break;
	}
	
}


