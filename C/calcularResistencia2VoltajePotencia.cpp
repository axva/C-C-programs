//PROGRAMA PARA CALCULAR LA RESISTENIA No.2 EN OHMS, VOLTAJE Y POTENCIA

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h
main()
{
      float R1,R2,Vi,Vo,P,I;
      textbackground(4);
      clrscr();
      textcolor(7,4);
      gotoxy(3,1);printf("\"CALCULAR LA RESISTENCIA #2[OHMS], EL VOLTAJE[VOLTS] Y LA POTENCIA[WHATTS]\"");
      gotoxy(2,3);printf("INGRESAR LA RESISTENCIA 1[OHMS]: ");scanf("%f",&R1);
      gotoxy(2,4);printf("INGRESAR EL VOLTAJE INICIAL[VOLTS]: ");scanf("%f",&Vi);
      gotoxy(2,5);printf("INGRESAR EL VOLTAJE FINAL[VOLTS]: ");scanf("%f",&Vo);
      /*Operaciones aritmeticas*/
      R2 = (Vo*R1)/(Vi-Vo);
      I = (Vi/(R1+R2))*100000;
      P = (Vi*I)/1000;

      gotoxy(2,7);printf("LA RESISTENIA 2 VALE: %.2f[OHMS]",R2);
      gotoxy(2,8);printf("EL VOLTAJE VALE: %.2f[AMPERES]",I);
      gotoxy(2,9);printf("LA POTENCIA VALE: %.2f[WHATTS]",P);
      getch();
      }
