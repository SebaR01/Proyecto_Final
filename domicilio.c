#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


stDomicilio cargaDomicilio()
{
    stDomicilio a;

    printf ("\nCalle: \n");
    fflush(stdin);
    gets(a.calle);
    printf ("\n:Numero: \n");
    scanf("%d", &a.nro);
    printf ("\nLocalidad: \n");
    fflush(stdin);
    gets(a.localidad);
    printf ("\nProvincia: \n");
    fflush(stdin);
    gets(a.provincia);
    printf ("\nCodigo Postal: \n");
    scanf("%d", &a.cpos);

    return a;
}

void muestraDomicilio (stDomicilio a)
{
    printf("\nCalle.........................: %s", a.calle);
    printf("\nNumero........................: %d", a.nro);
    printf("\nLocalidad.....................: %s", a.localidad);
    printf("\nProvincia.....................: %s", a.provincia);
    printf("\nCodigo Postal.................: %d", a.cpos);

}
