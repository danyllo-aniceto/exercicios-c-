# include <iostream>
# include <stdlib.h>
# include <locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;//cria��o da vari�vel contadora
	cout<<"Imprimindo os valores de 50 at� 100 usando a estrutura while"<<endl;
	i = 1;//inicializa��o da vari�vel contadora
	while(i <= 120)
	{//abertura da estrutura while
	    i = i * 2;
		cout<<i<<endl;
		//incrementando mais 5 a vari�vel contadora i
	}//fechamento da estrutura while
	system("pause");
}//fechamento do main



