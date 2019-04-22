#include <stdio.h>

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Empleado{
    char nombre[100];
    char apellido[100];
    int documento;
    char puesto[100];

};


int main() {

    struct Empleado array_empleados[100];
    int opcion;
    printf(" ");
    printf("");
    printf("\"Elija una opcion>>>>");
    printf("\n 1. Crear Trabajador \n 2.Buscar trabajador por documento \n"
           " 3. Reemplazar trabajador en posicion\n 4. Buscar empleado por apellido \n 5. Listar trabajadores \n 6. Salir\n");
    printf("");
    printf("Su opcion: ");
    scanf("%d", &opcion);


    if(opcion!=6){

        if(opcion==1){

            struct Empleado empleado;

            printf("Opcion de Creacion de trabajador \n");
            printf("");
            printf("Ingrese el nombre del trabajador: \n");
            //borra el buffer despues de muchos get
            fflush(stdin);
            gets(empleado.nombre);
            printf("Ingrese el apellido del trabajador: \n");
            fflush(stdin);
            gets(empleado.apellido);
            printf("Ingrese su numero de documento: \n");
            scanf("%d", &empleado.documento);

            printf("Ingrese el puesto para el empleado: \n");
            fflush(stdin);
            gets(empleado.puesto);

            printf("Trabajador creado con los siguientes datos: \n");
            printf("\n Apellido y Nombre: %s %s", empleado.nombre, empleado.apellido);
            printf("\n Numero de documento: %d", empleado.documento);
            printf("\n Puesto: %s", empleado.puesto);

            for(int i=0; i<100; i++){
                //Verifico que por cada elemento del array el documento haya sido ingresado.
                if(array_empleados[i].documento=='\0'){
                    array_empleados[i] = empleado;
                }
            }

            main();

        } else if(opcion==2){
            printf("opcion 2");
        } else if(opcion==3){
            printf("opcion 3");
        } else if(opcion==4){
            printf("opcion 4");
        } else if(opcion==5){
            //Esto imprime mal, arreglar.
            for(int j=0; j<100; j++){
                if(array_empleados[j].documento=='\0'){

                } else{

                struct Empleado e = array_empleados[j];
                printf("%s", e.puesto);
                printf(" ");
                }
            }

        } else{
            //Si no elegio alguna, vuelvo a mostrar el menu.
            main();
        }

    }
    //Al terminar el programa..
    return 0;
}