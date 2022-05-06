# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
main()

{
	int anoNasc, idade, anoAtual;
	anoAtual = 2021;
	setlocale(LC_ALL,"");
	
	printf(" Informe o ano de seu nascimento: ");
	scanf("%d", & anoNasc);

	idade = anoAtual - anoNasc;
	
	printf(" Sua idade é= %.d ano(s) \n",idade);

	system("pause");
	
}
