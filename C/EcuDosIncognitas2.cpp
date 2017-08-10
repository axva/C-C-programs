/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"MISH\edit.h"//se debe ingresar la ruta donde estará guardado el archivo edit.h

int main()
{
    float a,b,c,x1,x2,D;
    double i1, i2;
    portada();
    textbackground(7);
    clrscr();
    textcolor(5,7);
    gotoxy(14,1);printf("\"PROGRAMA PARA CALCULAR EL VALOR DE DOS INCOGNITAS");
    gotoxy(24,2);printf("DE LA FORMA \"Ax2 + Bx + C = 0\"");

    gotoxy(2,4);printf("INGRESAR EL VALOR DE \"A\":");scanf("%f",&a);
    gotoxy(2,5);printf("INGRESAR EL VALOR DE \"B\":");scanf("%f",&b);
    gotoxy(2,6);printf("INGRESAR EL VALOR DE \"C\":");scanf("%f",&c);

    D= pow(b,2)-(4*(a*c));

    if (D>0)
      {
      x1=(-b+sqrt(pow(b,2)-(4*(a*c))))/2*a;
         printf("\n\n\t\tx1= %f (Real)",x1);
      x2=(-b-sqrt(pow(b,2)-(4*(a*c))))/2*a;
         printf("\n\n\t\tx2= %f (Real)",x2);
       }
    else if (D==0)
       {
       x1=-b/(2*a);
       printf("\n\n\t\tx1 = %f = x2 (Igual) ",x1);

       }
    else //(D<0)
       {

       i1 = -(pow(b,2)-( 4*(a*c)));
       i1 = sqrt(i1);
       i1 = i1 / ( 2 * a );
       i2 = -b / ( 2 * a );
       printf("\n\n\t\tx1= %g + %g (Imaginario)",i2,i1);
       printf("\n\n\t\tx2= %g - %g (Imaginario)",i2,i1);
       }

    getch();
}
