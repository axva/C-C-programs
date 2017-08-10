/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

void color (int c);

int main()
{
    int a;
    textbackground(6);
    clrscr();
    textcolor(11,6);
    gotoxy(3,2);printf("\"Programa que permite identificar el color de una Resistencia Comercial");
    gotoxy(18,3);printf("en un intervalo mayor a 100 y menor a 1000\"");
    gotoxy(2,5);printf("Ingrese el valor de la resistencia: ");scanf("%d",&a);
    color(a/100);
    color((a%100)/10);
    color(a%10);

    getch();
}

void color (int c)
{
     if (c==0)
     {
        textcolor(0,6);printf("\n\tEl color es Negro");
        }
     else if (c==1)
     {
          textcolor(6,6);printf("\n\tEl color es Cafe");
          }
     else if (c==2)
     {
          textcolor(12,6);printf("\n\tEl color es Rojo");
          }
     else if (c==3)
     {
          printf("\n\tEl color es Anaranjado");
          }
     else if (c==4)
     {
          textcolor(14,6);printf("\n\tEl color es Amarillo");
          }
     else if (c==5)
     {
          textcolor(10,6);printf("\n\tEl color es verde");
          }
     else if (c==6)
     {
          textcolor(9,6);printf("\n\tEl color es Azul");
          }
     else if (c==7)
     {
          textcolor(5,6);printf("\n\tEl color es Violeta");
          }
     else if (c==8)
     {
          textcolor(8,6);printf("\n\tEl color es Gris");
          }
       else
       {
          textcolor(7,6);printf("\n\tEl color es Blanco");
          }
}
