#include<stdio.h>
#include<stdlib.h>


int main(){

    int*num;
    //printf("Introduce un numero:  ");
    //scanf("%d",&num);

    printf("El usuario introdujo el numero: %d\n",num);
    printf("La direccion de memoria es: %d\n",&num);
    printf("La ubicacion en hexadecimal es: %p\n",&num);
    printf("El contenido es: %s\n",&num);

    return 0;
}

//Apunte Realidad importante numero 3

La memoria no es infinita, hay que saber administrarla por el sistema
