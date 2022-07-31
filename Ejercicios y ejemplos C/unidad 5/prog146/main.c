#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

struct Productos{
    int codigo;
    char nombre[20];
    float precio;
    int stock;
};

void mostrarProductos(struct Productos *x){
    printf("PRODUCTOS\n");
    printf("CÓDIGO\t\tNOMBRE\t\tPRECIO\t\tSTOCK\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t\t", x->codigo);
        printf("%s\t\t", x->nombre);
        printf("%.2f\t\t", x->precio);
        printf("%d\n", x->stock);
        x++;
    }
}

void agregarProducto(struct Productos *x){
    int posicion = 0;
    int valido = 0;
    for(int i = 0; i < 10; i++){
        if(x[i].codigo == 0){
            posicion = i;
            valido = 1;
            break;
        }
    }

    if(valido == 1){
        char nombre[20];
        printf("Ingrese el código del producto: ");
        fflush(stdin);
        scanf("%d", &x[posicion].codigo);
        printf("Ingrese el nombre del producto: ");
        fflush(stdin);
        scanf("%s", &nombre);
        strcpy(x[posicion].nombre, nombre);
        printf("Ingrese el precio del producto: ");
        fflush(stdin);
        scanf("%f", &x[posicion].precio);
        printf("Ingrese la cant. de stock del producto: ");
        fflush(stdin);
        scanf("%d", &x[posicion].stock);
    } else {
        printf("Ya no pueden agregarse más productos");
    }
}

void buscarProducto(struct Productos *x){
    int codigo = 0;
    int posicion = 0;
    int matcheo = 0;
    printf("Ingrese el código del producto a buscar: ");
    fflush(stdin);
    scanf("%d", &codigo);

    for(int i = 0; i < 10; i++){
        if(codigo == x[i].codigo){
            posicion = i;
            matcheo = 1;
            break;
        }
    }
    if(matcheo == 1){
        printf("Producto encontrado\nCÓDIGO\t\tNOMBRE\t\tPRECIO\t\tSTOCK\n");
        printf("%d\t\t%s\t\t%.2f\t\t%d\n", x[posicion].codigo, x[posicion].nombre, x[posicion].precio, x[posicion].stock);
    } else {
        printf("Producto no encontrado\n");
    }
}

void buscarProdNombre(struct Productos *x){
    char nombreBuscar[20];
    int comparacion = 0;
    int posicion = 0;
    int matcheo = 0;

    printf("Ingrese el nombre del producto a buscar: ");
    fflush(stdin);
    scanf("%s", &nombreBuscar);

    for(int i = 0; i < 10; i++){
        comparacion = strcmp(nombreBuscar, x[i].nombre);
        if(comparacion == 0){
            posicion = i;
            matcheo = 1;
            break;
        }
    }

    if(matcheo == 1){
        printf("Producto encontrado\nCÓDIGO\t\tNOMBRE\t\tPRECIO\t\tSTOCK\n");
        printf("%d\t\t%s\t\t%.2f\t\t%d\n", x[posicion].codigo, x[posicion].nombre, x[posicion].precio, x[posicion].stock);
    } else {
        printf("Producto no encontrado\n");
    }
}

void modificarProducto(struct Productos *x){
    int codigo = 0, matcheo = 0, posicion = 0;
    printf("Ingrese el código del producto a modificar: ");
    fflush(stdin);
    scanf("%d", &codigo);
    for(int i = 0; i < 10; i++){
        if(codigo == x[i].codigo){
            matcheo = 1;
            posicion = i;
            break;
        }
    }

    if(matcheo == 1){
        printf("Ingrese el nuevo precio: ");
        fflush(stdin);
        scanf("%f", &x[posicion].precio);
        printf("Ingrese la cant. de stock: ");
        fflush(stdin);
        scanf("%d", &x[posicion].stock);
        printf("Producto actualizado\n");
    } else {
        printf("Error: el producto no existe\n");
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int menu = 1;
    int opciones = 0;
    struct Productos x[10], *ptr_x;
    ptr_x = &x;

    for(int i = 0; i < 10; i++){
        x[i].codigo = 0;
        x[i].precio = 0;
        x[i].stock = 0;
    }

    x[0].codigo = 1;
    strcpy(x[0].nombre, "chupetines");
    x[0].precio = 150;
    x[0].stock = 20;

    do{
        mostrarProductos(ptr_x);
        printf("MENU\nAgregar un nuevo producto - 1\nBuscar producto por su código - 2\nBuscar un producto por su nombre - 3\nModificar stock y precio - 4\nSalir del programa - 5\n");
        fflush(stdin);
        scanf("%d", &opciones);
        if(opciones < 1 || opciones > 5){
            printf("Por favor, ingresa una opción válida\n");
            system("pause");
            system("cls");
        } else if(opciones == 5){
            menu = 0;
        } else if(opciones == 1){
            agregarProducto(ptr_x);
            opciones = 0;
            system("cls");
        } else if(opciones == 2){
            buscarProducto(ptr_x);
            system("pause");
            opciones = 0;
            system("cls");
        } else if(opciones == 3){
            buscarProdNombre(ptr_x);
            system("pause");
            opciones = 0;
            system("cls");
        } else if(opciones == 4){
            modificarProducto(ptr_x);
            system("pause");
            opciones = 0;
            system("cls");
        }
    } while (menu == 1);
    return 0;
}
