# include <iostream>//biblioteca para usar o cout(escreva) e o cin(leia)
using namespace std; //alias(apelido) da biblioteca iostream para que ela funcione
# include <locale.h>
# include <stdlib.h>
# include <stdio.h>//printf e scanf
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i; //cria��o da vari�vel contadora
	for(i = 15 ; i <= 50 ; i--)
	{//abertura do for
		//cout<<i<<endl;
		printf("%.1d\n",i);
	}//fechamento do for
	
	system("pause");
}
