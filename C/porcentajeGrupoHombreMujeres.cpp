
/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<C:\Users\Admin\Downloads\edit.h> //se debe ingresar la ruta donde estará guardado el archivo edit.h
int main()
{
    int H,M; float PH, PM;//Declaracion de variables enteros y flotantes
    /*Se emplea la funcion Scanf() para guardar el valor asignado a cada variable*/
    textbackground(15);
    clrscr();//limpiar pantalla
    textcolor(4,15);
    gotoxy(2,1);printf("\"CALCULAR EL PORCIENTO DE HOMBRES Y MUJERES\"\n");
    gotoxy(2,4);printf("No. de Hombres: ");scanf("%d",&H);
    gotoxy(2,5);printf("No. de Mujeres: ");scanf("%d",&M);
    /*proceso aritmetico agregando la funcion float*/
    PH = float(H*100)/(H+M);
    PM = 100-PH;

    gotoxy(2,7);printf("\20 Hombres: %.2f%%",PH);
    gotoxy(2,9);printf("\20 Mujeres: %.2f%%",PM);

    getch(); //funcion getch para detener el programa y visualizar la informacion, al momento de oprimir cualquier tecla se sale del programa
    return 0;

}
