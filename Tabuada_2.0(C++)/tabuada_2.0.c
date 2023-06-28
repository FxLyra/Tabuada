#include<stdio.h>
# include <locale.h>
main()
{
    setlocale (LC_ALL, "Portuguese");
    int i, num, cont;
    system("color 1e");
    for (cont=0; cont<2;){
        system("cls");
        printf ("\n\t\t\t\tDigite um número para que o sistema apresente a tabuada:");
        scanf("%d", &num);

    for (i=1; i<11; i++)
        printf ("\n\t\t\t\t\t%d X %d = %d\n", num, i, num*i);

        printf("\n\t\t\t\tDeseja continuar? (Digite '1' para SIM e '2' para NÃO):");
        scanf("%d", &cont);

    }
}
