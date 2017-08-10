//Programa para calcular la fuerza y angulo de 2 vectores

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

 int main()
{
      float F1, F2, A1, A2, FR, AR, Fx, Fy;

      clrscr();
      gotoxy(3,2);printf("\"\Programa que calcula la fuerza y el angulo resultante para dos vectores\"");
      gotoxy(2,4);printf("Ingresa los valores que se piden para calcular FR y AR");
      printf("\t\nIngresa el valor de F1: ");scanf("%f",&F1);
      printf("\t\nIngresa el valor de F2: ");scanf("%f",&F2);
      printf("\t\nIngresa el angulo A1: ");scanf("%f",&A1);
      printf("\t\nIngresa el angulo A2: ");scanf("%f",&A2);

      A1*=0.01745;
      A2*=0.01745;
      Fx=(F1*cos(A1))+(F2*cos(A2));
      Fy=(F1*sin(A1))+(F2*sin(A2));
      AR=atan(Fy/Fx);
      FR=sqrt((pow(Fx,2)+pow(Fy,2)));
      AR*=57.29;

      printf("\nFx vale: %.2f  \n",Fx);
      printf("\nFy vale: %.2f  \n",Fy);
      printf("\nFR vale: %.2f  \n",FR);
      printf("\nAR vale: %.2f  \n",AR);

  getch();
  return(0);
}
