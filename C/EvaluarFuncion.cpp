/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "MISH\edit.h"//se debe ingresar la ruta donde estará guardado el archivo edit.h

float fun(float x);
int main()
{
        float x,r;
        char ret;
        textbackground(0);
        clrscr();
        do {
                clrscr();
                textcolor(3,0);
                gotoxy(21,1); printf("\"Evaluar una funcion\"");
                gotoxy(15,4); printf("4x\375-2x"); gotoxy(32,4); printf("0<x<=10");
                gotoxy(15,6); printf("sen(x)"); gotoxy(31,6); printf("\t10<x<=20");
                gotoxy(9,7); printf("f(x)");
                gotoxy(15,8); printf("arctan(x/3x)"); gotoxy(30,8); printf("\t 30<x<=40");
                gotoxy(15,10); printf("0");

                textcolor(3,0);
                gotoxy(10,14); printf("Ingrese el valor de x:"); scanf("%f",&x);
                r=fun(x);
                gotoxy(10,17); printf("La funci\242n evaluada en %.2f es: %.2f",x,r);
                getch();
        }
        while(ret=='a' && ret=='A');
}
float fun(float x)
{
        if(0<x && x<=10)
        {
                return (4*pow(x,2))-(2*x);
        }
        else if(10<x && x<=20)
        {return (sin(x*.01745));}
        else if(30<x && x<=40)
        {return((atan(x/(3*x)))*57.29);}
        else return(0);
}
