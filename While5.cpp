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
		cout<<"[2]Subtração"<<endl;
		cout<<"[3]Multiplicação"<<endl;
		cout<<"[4]Divisão"<<endl;
		cout<<"[5]Sair"<<endl;
		cin>>op;
		if( op >= 1 && op <=4)
		{
			cout<<"Informe o 1º valor: ";
			cin>>n1;
			cout<<"Inform o 2º valor: ";
			cin>>n2;
		}			
		else
		{
			system("cls");//limpar a tela
			cout<<"Opção Inválida!!!\nInforme uma opção válida\n"<<endl;
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
				cout<<"\tSubtração de"<<n1<<" - "<<n2<<" = "<<res<<endl;
			break;
		
			case 3 :
				system("cls");	
				res = n1 * n2;
				cout<<"\tMultiplicação de"<<n1<<" x "<<n2<<" = "<<res<<endl;
			break;
	
			case 4 :
				system("cls");	
				if(n2 == 0)
				{
					cout<<"\tDIVISÃO IMPOSSÍVEL!!!!"<<endl;
				}
				else
				{
					res = n1 / n2;
					cout<<"\tDivisão de"<<n1<<" / "<<n2<<" = "<<res<<endl;
				}
			break;
		
			case 5 :
				system("cls");
				cout<<"\t O Programa será finalizado."<<endl;
			break;
			
			default:
			system("cls");
			cout<<"\tVocê digitou uma opção inválida!!!"<<endl;
			break;	
	}
	system("pause");
	
}

}
