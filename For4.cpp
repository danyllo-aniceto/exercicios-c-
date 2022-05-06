# include <iostream>
# include <locale.h>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int n1,n2,i,aux;
	
	cout<<"Digite um número inteiro: ";
	cin>>n1;
	cout<<"Digite um número inteiro: ";
	cin>>n2;
	
	if(n1 > n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	for(i = n1; i <= n2; i ++)
	{
		if(i % 2 == 0)
		{//abertura do if
			cout<<i<<endl;
		}//fechamento do if
        
	}
	
		
	system("pause");
}
