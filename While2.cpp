# include <iostream>
# include <stdlib.h>
# include <locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	cout<<"Imprimindo os valores de 150 at� 200 de 3 em 3"<<endl;
	i = 150;
	while(i <= 200)
	{
		cout<<i<<endl;
		i = i + 3;
	}
    cout<<"------------------------------"<<endl;
    
    cout<<"Imprimindo os valores de 200 at� 100 de 5 em 5"<<endl;
    i = 200;
    while(i >= 100)
    {
    	cout<<i<<endl;
    	i = i - 5;
	}
	cout<<"------------------------------"<<endl;
	
	cout<<"Imprimindo os valores de 10 at� 50 por n�meros pares"<<endl;
    i = 10;
    while(i <= 50)
    {
    	cout<<i<<endl;
    	i = i + 2;
	}
	cout<<"------------------------------"<<endl;
	
	cout<<"Imprimindo os valores de 10 at� 50 por n�meros �mpares"<<endl;
    i = 11;
    while(i <= 50)
    {
    	cout<<i<<endl;
    	i = i + 2;
	}
	cout<<"------------------------------"<<endl;
	
	
	
	system("pause");
}
