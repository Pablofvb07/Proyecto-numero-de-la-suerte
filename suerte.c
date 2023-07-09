#include <stdio.h>
#include <string.h>
int main (void){
int dia,mes,año,numero,digito1,digito2,digito3,digito4,numerodelasuerte;
char respuesta[3] ;
do
{   
    //Pedimos al usuario que ingrese su dia de nacimiento//
    printf("Ingrese su dia de nacimiento(Ingrese solo numeros) \n");
    scanf("%d",&dia);
while (dia<=0 || dia>31 )
{
    //Pedimos al usuario que ingrese su mes de nacimiento en numeros como por ejemplo diciembre=12//
    printf("El dia ingresado es incorrecto por favor ingrese uno nuevo(Ingrese solo numeros)\n");
    scanf("%d",&dia);
}
    printf("Ingrese el mes de su nacimiento (Ingrese solo numeros) \n");
    scanf("%d",&mes);
while (mes<=0 || mes>12 )
{   
    //Pedimos al usuario que ingrese su año de nacimiento//
    printf("El mes ingresado es incorrecto por favor ingrese uno nuevo (Ingrese solo numeros)\n");
    scanf("%d",&mes);
}
    printf("ingrese su año de nacimiento (Ingrese solo numeros)\n");
    scanf("%d",&año);
    while (año<=0 || año>2023 )
    {
        printf("El año ingresado no es valido por favor ingrese uno nuevo (Ingrese solo numeros)\n");
          scanf("%d",&año);
    }
   //sumamos los tres numeros para sacar un solo valor del cual vamos a sacar los digitos de este valor//
    numero=dia+mes+año;
    //realizamos los calculos necesarios para sacar cada uno de los digitos de el numero calculado anteriormente//
    digito1=numero%10;
    digito2=(numero/10)%10;
    digito3=(numero/100)%10;
    digito4=(numero/1000)%10;
    //realizamos la suma de cada uno de los digitos para sacar un solo valor el cual va a ser el "Numero de la suerte"//
    numerodelasuerte=digito1+digito2+digito3+digito4;
    //Si el numero de la suerte dado es mayor a 10 repetimos el proceso de suma de digitos para sacar un numero menor a 10//
    if (numerodelasuerte>10)
    {
    numerodelasuerte=(numerodelasuerte%10)+(numerodelasuerte/10)%10;
    }
    //Imprimimos el resultado que seria el numero de la suerte y preguntamos al usuario si desea ingresar otra fecha //
    //Si responde que "si"o "Si" el proceso se repite pero si la respuesta es "no" o "No" el proceso termina//
    printf("Tu numero de la suerte es--->%d:\n",numerodelasuerte);
    printf("Desea ingresar otra fecha? Si o No\n");
    scanf("%s",respuesta);
} while (strcmp(respuesta, "Si") == 0 || strcmp(respuesta, "si") == 0);

}