/*PROGRAMA QUE AL INGRESAR 2 PUNTOS EN EL PRIMER CUADRANTE DEL PLANO CARTESIANO CALCULE LA DISTANCIA, LA PENDIENTE
Y LA ECUACION DE LA RECTA*/

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

main()
{
      float x,y,x1,x2,y1,y2,d,m,b;
      Portada();
      textbackground(4);
      clrscr();
      textcolor(7,4);
      gotoxy(2,2);printf("\"CALCULAR LA DISTANCIA, PENDIENTE Y ECUACION DE UNA RECTA, DADO 2 PUNTOS\"");
      gotoxy(2,4);printf("INGRESE LAS CORDENADAS DE A");
      gotoxy(25,5);printf("X1: ");scanf("%f",&x1);
      gotoxy(25,6);printf("Y1: ");scanf("%f",&y1);
      gotoxy(2,8);printf("INGRESA LAS CORDENADAS DE B");
      gotoxy(25,9);printf("X2: ");scanf("%f",&x2);
      gotoxy(25,10);printf("Y2: ");scanf("%f",&y2);

      x=x2-x1;
      y=y2-y1;
      d=sqrt((pow(x,2)+pow(y,2)));
      m=y/x;
      b=y1-(m*x1);

      gotoxy(2,12);printf("LA PENDIENTE ES:%.2f",m);
      gotoxy(2,13);printf("LA DISTANCIA ES:%.2f",d);
      gotoxy(2,14);printf("LA ESCUACION ES:y=%.2fx +- (%.2f)",m,b);
      getch();
}
