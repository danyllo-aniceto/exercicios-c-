# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	int idade;
	printf(" Digite a idade do aluno: ");
	scanf("%d",& idade);
	
	if(idade >=18)
	{
		printf("\t Aluno maior de idade\n");
	}
	else
	{
		printf("\t Aluno menor de idade\n");
	}
	system("pause");
}
