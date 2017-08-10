//Programa para Calcular el valor de la Resistencia No.1, Voltaje y Potencia

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
      float R1,R2,Vi,Vo,P,I;
      textbackground(4);
      clrscr();
      textcolor(7,4);
      gotoxy(3,1);printf("\"CALCULAR LA RESISTENCIA [OHMS], EL VOLTAJE[VOLTS] Y LA POTENCIA[WHATTS]");
      gotoxy(33,2);printf("DE UN DIVISOR\"");
      gotoxy(2,3);printf("INGRESAR LA RESISTENCIA 2[OHMS]: ");scanf("%f",&R2);
      gotoxy(2,4);printf("INGRESAR EL VOLTAJE INICIAL[VOLTS]: ");scanf("%f",&Vi);
      gotoxy(2,5);printf("INGRESAR EL VOLTAJE FINAL[VOLTS]: ");scanf("%f",&Vo);

      R1 = (R2*Vi-R2*Vo)/Vo;
      I = Vi/(R1+R2);
      P = (Vi*I);

      gotoxy(2,7);printf("LA RESISTENIA 1 VALE: %.1f[OHMS]",R1);
      gotoxy(2,8);printf("EL VOLTAJE VALE: %.4f[AMPERES]",I);
      gotoxy(2,9);printf("LA POTENCIA VALE: %.4f[WHATTS]",P);
      getch();

}
