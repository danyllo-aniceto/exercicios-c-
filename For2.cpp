# include <iostream>
# include <locale.h>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i; 
	
	cout<<"Contando de 1 em 1 de 150 at� 200"<<endl;
	for(i = 150 ; i <= 200 ; i = i + 1)
	{
	    cout<<i<<endl;
	}
     	cout<<"------------------------------"<<endl;
    cout<<"Contando de 3 em 3 de 150 at� 200"<<endl; 	
    for(i = 150 ; i <= 200 ; i = i + 3)
	{
	    cout<<i<<endl;
	}
		cout<<"-----------------------------"<<endl;
	cout<<"Contando de 5 em 5 de 200 at� 150"<<endl; 	
	for( i = 200; i >= 100; i = i - 5 )
	{
	    cout<<i<<endl;
	}
		cout<<"------------------------------"<<endl;
		cout<<"Contando de 10 at� 50 por n�meros pares"<<endl; 	
	for( i = 10; i <= 50; i = i + 2)
	{
	    cout<<i<<endl;
	}
		cout<<"------------------------------"<<endl;		
		cout<<"Contando de 10 at� 50 por n�meros �mpares"<<endl; 	
	for( i = 11; i <= 50; i = i + 2)
	{
	    cout<<i<<endl;
	}
		cout<<"------------------------------"<<endl;	
	system("pause");
}

