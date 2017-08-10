//PROGRAMA PARA CALCULAR POTENCIA Y VOLTAJE

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<C:\Users\AAVM\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

main()
{
      float V,P,I,R;

      textbackground(4);
      clrscr();
      textcolor(7,4);
      gotoxy(5,2);printf("\"PROGRAMA PARA CALCULAR LA PONTENCIA [WHATTS] Y EL VOLTAJE [VOLTS]\"\n");
      gotoxy(2,4);printf("INGRESE EL VOLTAJE(Vi): ");scanf("%f",&V);
      gotoxy(2,6);printf("INGRESE LA RESISTENCIA (OHMS): ");scanf("%f",&R);

      I = (V/R)*100;
      P = V*I;

      gotoxy(2,8);printf("EL VOLTAJE ES: %.2f(AMPERES) Y  LA POTENCIA ES: %.2f(WHATTS)",I,P);
      getch();

}
