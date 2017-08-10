//Ecuacion 1er grado - 1 incognita

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
      float A,B,C,x1;
      Portada();
      textbackground(15);
      clrscr();
      textcolor(3,15);
      gotoxy(15,1);printf("\n\"PROGRAMA PARA CALCULAR EL VALOR DE UNA INCOGNITA\"\n\n");
      printf("Ax + B = C\n\n");

      printf("Ingrese el valor de A: ");scanf("%f",&A);
      printf("Ingrese el valor de B: ");scanf("%f",&B);
      printf("Ingrese el valor de C; ");scanf("%f",&C);

      x1=(C-B)/A;

      printf("El resultado es: %.2f",x1);

      getch();
}
