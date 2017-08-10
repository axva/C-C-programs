//Programa para calcular la segunda resistencia

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
      textbackground(4);
      clrscr();
      textcolor(7,4);
      printf("\"PROGRAMA PARA CALCULAR LA RESISTENCIA 2 [OHMS]\"");
      printf("\n\nINGRESA EL VOLTAJE DE SALIDA: ");scanf("%f",&Vo);
      printf("n\INGRESA EL VALOR DE LA RESISTENCIA 1: ");scanf("%f",&R1);

      R2 = ((Vo-1.25)/(1.25/R1)+100E-6);

      printf("\n\nEL VALOR DE LA RESISTENCIA 2 ES:%.4f[OHMS]",R2);
      getch();

}
