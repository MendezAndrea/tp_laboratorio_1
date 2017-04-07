#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1=0;
    int num2=0;

    menu(num1,num2);
    while(seguir=='s')
    {
        scanf("%d",&opcion);


        system("cls");
        switch(opcion)
        {
            case 1:
                printf("Ingrese numero. A= ");
                scanf("%d", &num1);
                break;
            case 2:

                printf("Ingrese numero. B= ");
                scanf("%d", &num2);
                break;

            case 3:

                sumar(num1 , num2);
                break;

            case 4:

                restar(num1 , num2);
                break;

            case 5:

                dividir(num1 , num2);
                break;

            case 6:

                multiplicar(num1 , num2);
                break;

            case 7:

                factorial(num1);
                break;

            case 8:

                todo(num1 , num2);
                break;

            case 9:

                seguir = 'n';
                return 0;
                break;

        }
        printf("\nPara volver al menu ingrese cualquier tecla.");
        getch();
        system("cls");
        menu(num1,num2);
    }


    return 0;
}
