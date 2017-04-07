#include <stdio.h>
#include <stdlib.h>

/** \brief muestra el men� principal y se pueden ingresar dos n�meros
 *
 * \param num1 es un n�mero pedido al usuario
 * \param num2 es un n�mero pedido al usuario
 * \return el men� y muestra los n�meros ingresados
 *
 */

void menu(int num1, int num2)
{

        printf("1- Ingresar 1er operando (A=%d)\n", num1);
        printf("2- Ingresar 2do operando (B=%d)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

}




/** \brief suma dos n�meros pedidos al usuario
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \param num2 es un n�mero ingresado por el usuario
 * \return el resultado de la suma entre los 2 n�meros
 *
 */

int sumar(int num1, int num2)
{
    int resultado;

    resultado= num1 + num2;
    printf("%d + %d = %d\n", num1, num2, resultado);


    return resultado;
}


/** \brief resta dos n�meros pedidos al usuario
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \param num2 es un n�mero ingresado por el usuario
 * \return el resultado de la resta entre los 2 n�meros
 *
 */

int restar(int num1 , int num2)
{
    int resultado;

    resultado = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, resultado);

    return resultado;
}


/** \brief multiplica dos n�meros pedidos al usuario
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \param num2 es un n�mero ingresado por el usuario
 * \return el resultado del producto entre dos n�meros
 *
 */

int multiplicar(int num1 , int num2)
{
    int resultado;

    resultado = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, resultado);
    return resultado;
}


/** \brief divide dos n�meros pedidos al usuario
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \param num2 es un n�mero ingresado por el usuario
 * \return el resultado de la divisi�n entre dos n�meros
 *
 */


float dividir(int num1 , int num2)
{
    float resultado;
    while(num2<=0)
    {
        getchar();
        printf("No se puede dividir por cero. Dele otro valor a B: \n");
        scanf("%d", &num2);
    }

    resultado= (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, resultado);

    return resultado;
}

/** \brief calcula el factorial de un numero pedido al usuario
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \return el resultado del factorial
 *
 */


long long int factorial(int num1)
{
    long long int valor = 1;
    int i;

    for(i = num1; i > 0; i--)
    {
        valor = valor * i;
    }

    printf("El factorial de %d es: %lld\n", num1, valor);

    return valor;
}

/** \brief realiza todas los calculos del men�
 *
 * \param num1 es un n�mero ingresado por el usuario
 * \param num2 es un n�mero ingresado por el usuario
 * \return todas las operaciones realizadas
 *
 */



int todo(int num1 , int num2)
{

    sumar(num1, num2);
    restar(num1 , num2);
    multiplicar(num1 , num2);
    dividir(num1 , num2);
    factorial(num1);

    return 0;
}
