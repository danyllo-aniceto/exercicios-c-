# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
main()

{

float n1,n2,n3,n4,nF,mF;

setlocale(LC_ALL,"");

printf("Digite a nota do 1º bimestre: ");
scanf("%f", & n1);
printf("Digite a nota do 2º bimestre: ");
scanf("%f", & n2);
printf("Digite a nota do 3º bimestre: ");
scanf("%f", & n3);
printf("Digite a nota do 4º bimestre: ");
scanf("%f", & n4);

nF = n1+n2+n3+n4;
mF = nF/4;

printf("\t Total de notas= %.1f pontos \n ", nF);
printf("\t Média das notas= %.1f pontos \n ", mF);

system("pause");
}
