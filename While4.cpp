# include <iostream>
# include <locale.h>
# include <stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int quantidade;
	float produto, vTotal;
	produto = -1;
	quantidade= -1;
	while(produto < 0 )
	{
		cout<<"Informe o pre�o do produto: ";
		cin>>produto;

		if( produto < 0 )
		{
			cout<<"\nIMPOSS�VEL!!!\nProduto negativo!!!!\n"<<endl;
		}
		
    }
    
    while(quantidade < 0 )
	{
		cout<<"Informe a quantidade do produto: ";
		cin>>quantidade;

		if( produto < 0 )
		{
			cout<<"\nIMPOSS�VEL!!!\nQuantidade negativa!!!!\n"<<endl;
		}
		
    }
    
    vTotal = produto * quantidade;
    cout<<" O valor do produto � = R$"<<vTotal<<",00"<<endl;
    

	system("pause");
}
