# include <stdlib.h>
# include <locale.h>
# include <iostream>
# include <stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int op =0, n1,n2,res;
	while( op != 5 )
	{//abertura da estrutura while
		cout<<"[1]Soma"<<endl;
		cout<<"[2]Subtra��o"<<endl;
		cout<<"[3]Multiplica��o"<<endl;
		cout<<"[4]Divis�o"<<endl;
		cout<<"[5]Sair"<<endl;
		cin>>op;
		if( op >= 1 && op <=4)
		{
			cout<<"Informe o 1� valor: ";
			cin>>n1;
			cout<<"Inform o 2� valor: ";
			cin>>n2;
		}			
		else
		{
			system("cls");//limpar a tela
			cout<<"Op��o Inv�lida!!!\nInforme uma op��o v�lida\n"<<endl;
		}
		switch(op)
		{
			case 1 :
				system("cls");	
				res = n1 + n2;
				cout<<"\tSoma de"<<n1<<" + "<<n2<<" = "<<res<<endl;
			break;
		
			case 2 :
				system("cls");	
				res = n1 - n2;
				cout<<"\tSubtra��o de"<<n1<<" - "<<n2<<" = "<<res<<endl;
			break;
		
			case 3 :
				system("cls");	
				res = n1 * n2;
				cout<<"\tMultiplica��o de"<<n1<<" x "<<n2<<" = "<<res<<endl;
			break;
	
			case 4 :
				system("cls");	
				if(n2 == 0)
				{
					cout<<"\tDIVIS�O IMPOSS�VEL!!!!"<<endl;
				}
				else
				{
					res = n1 / n2;
					cout<<"\tDivis�o de"<<n1<<" / "<<n2<<" = "<<res<<endl;
				}
			break;
		
			case 5 :
				system("cls");
				cout<<"\t O Programa ser� finalizado."<<endl;
			break;
			
			default:
			system("cls");
			cout<<"\tVoc� digitou uma op��o inv�lida!!!"<<endl;
			break;	
	}
	system("pause");
	
}

}
