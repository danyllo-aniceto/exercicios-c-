# include <iostream>
# include <locale.h>
# include <stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int idade;
	idade = -1;
	while(idade < 0 || idade > 110)
	{//abertura da estrutura while
		cout<<"Informe a idade: ";
		cin>>idade;
		if( idade < 0 )
		{//abertura do if01
			cout<<"\nIMPOSSÍVEL!!!\nIdade negativa!!!!\n"<<endl;
		}//fechamento do if01
		if(idade >110)
		{//abertura do if02
			cout<<"\nIMPOSSÍVEL!!!\nIdade alta!!!!\n"<<endl;
		}//fechamento do if02
	}//fechamento da estrutura while

	cout<<"A idade informa é = "<<idade<<" anos."<<endl;
	system("pause");
}
