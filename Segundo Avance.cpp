// Segundo Avance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

struct empresa
{
    int idcontrato, numoc;
    string proveedor, Numarticulo, juego, carac, lanzamiento, genero, descripcion, consola;
    float IVA, precio, total, subtotal, clas;
};

int main()
{
    int i, opcion, busqueda;
    empresa compras[3];
    do
    {
        printf("\t ***BIENVENIDO A POWER FOX GAME STORE*** \n");
        printf(" 1.-Agregar articulos \n 2.-Lista de compras \n  3.-Limpiar pantalla \n 4.-Salir \n 5.-Eliminar \n 6.-Modificar Articulo \n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {

        case 1:
            for (i = 0; i < 3; i++)
            {
                compras[i].idcontrato = 10000 + (i + 1);
                printf("ID CONTRATO: %d \n", compras[i].idcontrato);
                printf("ingrese el numero de contrato \n");
                scanf_s("%d", &compras[i].numoc);
                printf("ingrese el numero de compra \n");
                cin.ignore();
                getline(cin, compras[i].Numarticulo);
                printf("Ingrese el nombre del juego \n");
                cin.ignore();
                getline(cin, compras[i].juego);
                printf("Ingrese la clasificacion del juego \n");
                scanf_s("%f", &compras[i].clas);
                printf("Ingrese el genero del juego \n");
                cin.ignore();
                getline(cin, compras[i].genero);
                printf("Ingrese la plataforma del juego \n");
                cin.ignore();
                getline(cin, compras[i].consola);
                printf("Ingrese el dia de lanzamiento del juego \n");
                cin.ignore();
                getline(cin, compras[i].lanzamiento);
                printf("Ingrese las caracteristicas del juego \n");
                cin.ignore();
                getline(cin, compras[i].carac);
                printf("Ingrese la descripcion del juego \n");
                cin.ignore();
                getline(cin, compras[i].descripcion);
                printf("Ingrese el proovedor\n");
                cin.ignore();
                getline(cin, compras[i].proveedor);
                printf("Ingrese el precio del juego \n");
                scanf_s("%f", &compras[i].precio);
                compras[i].IVA = compras[i].precio * .16;
                printf("El IVA es de 1.16 \n ");
                printf("ingrese el subtotal \n ");
                scanf_s("%f", &compras[i].subtotal);
                compras[i].total = compras[i].subtotal * 1.16;
            }
            break;

        case 2:
            printf("ingrese la oc que desea buscar \n");
            scanf_s("%d", &busqueda);
            for (i = 0; i < 3; i++)
            {
                if (busqueda == compras[i].numoc)
                {
                    printf("el id del contrato es: %d \n", compras[i].idcontrato);
                    printf("el numero de compra es: %s \n", compras[i].Numarticulo.c_str());
                    printf("el nombre del juego es: %s \n", compras[i].juego.c_str());
                    printf("La clasificacion del juego es de: %f \n", compras[i].clas);
                    printf("el genero del juego es: %s \n", compras[i].genero.c_str());
                    printf("La plataforma del juego es para: %s \n", compras[i].consola.c_str());
                    printf("El Lanzamiento de este juego fue el: %s \n", compras[i].lanzamiento.c_str());
                    printf("Las caracteristicas del juego son: %s \n", compras[i].carac.c_str());
                    printf("La descripcion del juego es lo siguiente: %s \n", compras[i].descripcion.c_str());
                    printf("el nombre de su proveedor es %s \n", compras[i].proveedor.c_str());
                    printf("el iva es %f \n", compras[i].IVA);
                    printf("el total es %f \n", compras[i].total);
                }
            }
            break;

        case 3:
            system("cls");

        case 4:
            printf("GRACIAS POR VISITAR POWER FOX GAME STORE, QUE TENGA UN GRAN DIA \n");

        default:

            printf("Favor de ingresar la validacion correcta \n");
            break;

        }
    } while (opcion != 4);
    system("pause");
}

