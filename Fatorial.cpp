# include <iostream>
# include <locale.h>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,i;
	float fat = 1;
	
	cout<<"Digite um número: ";
	cin>>num;
	
	for(i = 1; i <= num; i++)
	{
		fat = fat * i;
	}
	
	cout<<num<<"! = "<<fat<<endl;
	
	
	system("pause");
}
