//Programa para calcular la Resistencia1

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
      float Vo,R1,R2;
      Portada();
      textbackground(4);
      clrscr();
      textcolor(7,4);
      gotoxy(15,2);printf("\"PROGRAMA PARA CALCULAR LA RESISTENCIA 1 [OHMS]");
      gotoxy(24,3);printf("DE UN REGULADOR DE VOLTAJE\"");
      gotoxy(2,5);printf("INGRESA EL VOLTAJE DE SALIDA[Vo]: ");scanf("%f",&Vo);
      gotoxy(2,6);printf("INGRESA EL VALOR DE LA RESISTENCIA 2: ");scanf("%f",&R2);

      R1 = (1.25*R2)/(Vo-(R2*100e-6)-1.25);

      gotoxy(2,9);printf("EL VALOR DE LA RESISTENCIA 1 ES:%f[OHMS]",R1);
      getch();

}
