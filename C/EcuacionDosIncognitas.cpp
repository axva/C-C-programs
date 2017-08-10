//Ecuacion 1er grado - 2incognitas

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

//Referencia: http://www.profesorenlinea.com.mx/matematica/Ecuaciones_primer_grado.html

#include<stdio.h>
#include<conio.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

main()
      {
      float A1,B1,C1,A2,B2,C2,x1,x2,d1,d2,d3;
      textbackground(15);
      clrscr();
      textcolor(3,15);
      gotoxy(15,1);printf("\n\"PROGRAMA PARA CALCULAR EL VALOR DE DOS INCOGNITAS\"\n\n");
      printf("Ax1 + B1y = C1\nAx2 + B1y = C2\n\n");

      printf("Ingrese el valor de A1: ");scanf("%f",&A1);
      printf("Ingrese el valor de B1: ");scanf("%f",&B1);
      printf("Ingrese el valor de C1; ");scanf("%f",&C1);
      printf("\nIngrese el valor de A2: ");scanf("%f",&A2);
      printf("Ingrese el valor de B2: ");scanf("%f",&B2);
      printf("Ingrese el valor de C2; ");scanf("%f",&C2);

      d1=(A1*B2)-(A2*B1);
      d2=(C1*B2)-(C2*B1);
      d3=(A1*C2)-(A2*C1);

      x1=d2/d1;
      x2=d3/d1;

      printf("\n\nEl primer resultado es: %.0f",d1);
      printf("\n\nEl segundo resutado es: %.0f",d2);
      printf("\n\nEl tercer resultado es: %.0f",d3);

      printf("\n\nEl valor de X1 es: %f",x1);
      printf("\nEl valor de x2 es: %f",x2);

      getch();
      return 0;
}
