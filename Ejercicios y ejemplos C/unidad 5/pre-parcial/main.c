#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

struct Facturas {
    int nFactura;
    int codProd;
    int cantVendida;
    int precio;
};

void cargarFactura(struct Facturas *x, int n){
    for(int i = 0; i < n; i++){
        printf("N° de factura: ");
        fflush(stdin);
        scanf("%d", &x->nFactura);
        printf("Código de producto: ");
        fflush(stdin);
        scanf("%d", &x->codProd);
        printf("Cantidad vendida: ");
        fflush(stdin);
        scanf("%d", &x->cantVendida);
        printf("Precio por unidad: ");
        fflush(stdin);
        scanf("%d", &x->precio);
        x++;
        system("cls");
    }
}

void mostrarFacturas(struct Facturas *x, int n){
    printf("N° FACTURA\t\tCÓDIGO DE PRODUCTO\t\tCANTIDAD VENDIDA\t\tPRECIO c/u\n");
    for(int i = 0; i < n; i++){
        printf("%10d\t\t", x->nFactura);
        printf("%10d\t\t", x->codProd);
        printf("%10d\t\t\t\t", x->cantVendida);
        printf("%10d\n", x->precio);
        x++;
    }
}

void mostrarMonto(struct Facturas *x, int n){
    printf("N° FACTURA\t\tTOTAL\n");
    for(int i = 0; i < n; i++){
        printf("%10d\t\t%10d\n", x->nFactura ,x->cantVendida * x->precio);
        x++;
    }
}

void totalCaja(struct Facturas *x, int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += x->cantVendida * x->precio;
        x++;
    }
    printf("El total en caja es de: $%d\n", total);
    printf("El promedio de ventas es de: $%d por factura\n", total/n);
}

void totalProductos(struct Facturas *x, int n){
    int productos = 0;
    int prod01 = 0, prod02 = 0, prod03 = 0, prod04 = 0, prod05 = 0, prod06 = 0;
    for(int i = 0; i < n; i++){
        productos += x->cantVendida;
        if(x->codProd == 1){
            prod01 += x->cantVendida;
        } else if(x->codProd == 2){
            prod02 += x->cantVendida;
        } else if(x->codProsd == 3){
            prod03 += x->cantVendida;
        } else if(x->codProd == 4){
            prod04 += x->cantVendida;
        } else if(x->codProd == 5){
            prod05 += x->cantVendida;
        } else {
            prod06 += x->cantVendida;
        }
        x++;
    }
    printf("Se vendieron %d del producto 1\n", prod01);
    printf("Se vendieron %d del producto 2\n", prod02);
    printf("Se vendieron %d del producto 3\n", prod03);
    printf("Se vendieron %d del producto 4\n", prod04);
    printf("Se vendieron %d del producto 5\n", prod05);
    printf("Se vendieron %d del producto 6\n", prod06);
    printf("En total se vendieron %d productos\n", productos);
}

void facturasPorProducto(struct Facturas *x, int n){
    int fcProd[6] = {0, 0, 0, 0, 0, 0};
    for(int i = 0; i < n; i++){
        if(x->codProd == 1){
            fcProd[0]+=1;
        } else if(x->codProd == 2){
            fcProd[1]+=1;
        } else if(x->codProd == 3){
            fcProd[2]+=1;
        } else if(x->codProd == 4){
            fcProd[3]+=1;
        } else if(x->codProd == 5){
            fcProd[4]+=1;
        } else {
            fcProd[5]+=1;
        }
        x++;
    }
    for(int j = 0; j < 6; j++){
        printf("Se emitieron %d facturas para el producto %d\n", fcProd[j], j + 1);
    }
    printf("\n");
}

void porcentual(struct Facturas *x, int n){
    float ventasporproductos[6] = {0, 0, 0, 0, 0, 0};
    float porcentaje[6] = {0, 0, 0, 0, 0, 0};
    int total = 0;
    for(int i = 0; i < n; i++){
        total += x->cantVendida * x->precio;
        if(x->codProd == 1){
            ventasporproductos[0] += x->cantVendida * x->precio;
        } else if(x->codProd == 2){
            ventasporproductos[1] += x->cantVendida * x->precio;
        } else if(x->codProd == 3){
            ventasporproductos[2] += x->cantVendida * x->precio;
        } else if(x->codProd == 4){
            ventasporproductos[3] += x->cantVendida * x->precio;
        } else if(x->codProd == 5){
            ventasporproductos[4] += x->cantVendida * x->precio;
        } else {
            ventasporproductos[5] += x->cantVendida * x->precio;
        }
        x++;
    }

    for(int k = 0; k < 6; k++){
        porcentaje[k] = (ventasporproductos[k] * 100) / (float)total;
    }

    for(int j = 0; j < 6; j++){
        printf("el producto %d representa un %.2f  de las ventas\n", j + 1, porcentaje[j]);
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int cantFacturas = 0;

    printf("Cuantas facturas desea ingresar? \n");
    fflush(stdin);
    scanf("%d", &cantFacturas);
    system("cls");

    struct Facturas x[cantFacturas], *ptr_x;
    ptr_x = x;

    cargarFactura(ptr_x, cantFacturas);
    mostrarFacturas(ptr_x, cantFacturas);
    mostrarMonto(ptr_x, cantFacturas); // Monto de cada factura
    totalCaja(ptr_x, cantFacturas); // Total en caja
    totalProductos(ptr_x, cantFacturas); // Productos vendidos y total de prod. vendidos
    facturasPorProducto(ptr_x, cantFacturas);
    printf("Se han emitido %d facturas.\n", cantFacturas); //cantidad de facturas emitidas
    porcentual(ptr_x, cantFacturas);
    return 0;
}
