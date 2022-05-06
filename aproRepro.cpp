# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	
	float nota;
	printf(" Digite a nota do aluno: ");
	scanf("%f",& nota);
	
	if(nota >=60)
	{
		printf("\t Aluno aprovado. \n");
	}
	else
	{
		printf("\t Aluno reprovado. \n");
	}
	system("pause");
}
