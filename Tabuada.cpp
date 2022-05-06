# include <iostream>
# include <locale.h>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,i,tabuada;
	
	cout<<"Digite um número: "<<endl;
	cin>>num;
	
	for(i = 0; i <= 10; i++)
	{
		tabuada = num * i;
		cout<<num<<" X "<<i<<" = "<<tabuada<<endl;
	}
	
	
	
	system("pause");
}
