#include <stdio.h>

void suma (float, float);
float resta (float, float);//aqui estoy nombrando mis funciones
void mult (float, float);
void div (float, float);
int main()
{
    float n1, n2, resultado;
    printf("Introduzca el primer numero;\n");
    scanf("%f", &n1);
    printf("Introduzca el segundo numero:\n");
    scanf("%f", &n2);
    suma(n1, n2); //mandando a llamar a la funcion y enviando valores
    resultado=resta(n1, n2);//llamando a la funcion asignando un valor a la variable
    printf("El resultado es: %f\n", resultado);//imprimiendo el resultado de la variable
    mult(n1, n2);
    div(n1, n2);
    
    return 0;
}
void suma (float n1, float n2)//declarando mi funcion suma, no regresa datos, recibe 2 valores flotantes
{
    float resultado=n1+n2;//variable tipo flotante exclusiva de la funcion
    printf("El resultado es: %f\n", resultado);
    //al no regresar valores, no escribimos return
}
float resta (float n1, float n2)//declarando mi funcion suma, regresa un dato tipo flotante, recibe 2 valores flotantes
{
    float resultado=n1-n2;
    return resultado;//aqui regresa un valor flotante a la variable donde se mando a llamar
}
void mult (float n1, float n2)
{
    float resultado=n1*n2;
    printf("El resultado es: %f\n", resultado);
}
void div (float n1, float n2)
{
    float resultado=n1/n2;
    printf("El resultado es: %f.\n", resultado);
}
