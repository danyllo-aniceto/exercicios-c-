# include <iostream>
# include <locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	float n1, n2, soma, sub, mult, div;
	cout<<"Digite o primeiro valor: ";
	cin>>n1;
	cout<<"Digite o segundo valor: ";
	cin>>n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	cout<<"A soma de "<<n1<<" + "<<n2<<" = "<<soma<<endl;
	cout<<"A subtra��o de "<<n1<<" - "<<n2<<" = "<<sub<<endl;
	cout<<"A multiplica��o de "<<n1<<" * "<<n2<<" = "<<mult<<endl;
	cout<<"A divis�o de "<<n1<<" / "<<n2<<" = "<<div<<endl;

}
