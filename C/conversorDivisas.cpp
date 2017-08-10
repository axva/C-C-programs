//Conversion Monetaria utilizando la funcion SWITCH
//los valores de conversión pueden variar segun los nuevos valores de divisa
//POR FAVOR CONSULTAR LOS CAMBIOS DE SER NECESARIO Y REMPLAZARLOS PARA OBTENER LA CONVERSION ADECUADA

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<C:\Users\Admin\Downloads\edit.h>

main()
{
      /*Declaracion de variables tipo entero, flotante y auxiliar para las operaciones*/
      int opcion,cant,aux=3;
      float oper,oper1,oper2,oper3;

      textbackground(15);
      clrscr();
      textcolor(4,15);
      gotoxy(22,1);printf("\"SISTEMA DE CONVERSION MONETARIO\"");gotoxy(29,2);printf("(MXN-USD-EUR-JPY-GBP)");
      gotoxy(4,4);printf("SELECCIONE LA OPCION DE CONVERSION\n\n");
      printf("1)Pesos\n");
      printf("2)Dollar\n");
      printf("3)Euros\n");
      printf("4)Yenes\n");
      printf("5)Libra Esterlina\n");
      printf("6)Salir del programa\n");
      scanf("%d",&opcion);

      switch (opcion){
             case 1:
             printf("INTRODUZCA LA CANTIDAD QUE DESE\220(MXN): ");scanf("%d",&cant);
             printf("LA CONVERSION ES LA SIGUIENTE...\n\n");
                     oper= (cant*0.0764)/1;//dolar
                     oper1= (cant*0.0582)/1;//euro
                     oper2= (cant*7.9529)/1;//yenes
                     oper3= (cant*0.046046)/1;// libras

             printf("El valor es:$%.2f(USD)\nEl valor es:$%.2f(EUR)\nEl valor es:$%.2f(JYP)\nEl valor es:$%.2f(GBP)",oper,oper1,oper2,oper3);
             break;
             case 2:
             printf("INTRODUZCA LA CANTIDAD QUE DESE\220(USD): ");scanf("%d", &cant);
             printf("LA CONVERSION ES LA SIGUIENTE...\n\n");
                     oper= (cant*13.08)/1;//pesos
                     oper1= (cant*0.7613)/1;//euros
                     oper2= (cant*104.075)/1;//yenes
                     oper3= (cant*0.60244)/1;//libras
             printf("El valor es:$%.2f(MXN)\nEl valor es:$%.2f(EUR)\nEl valor es:$%.2f(JYP)\nEl valor es:$%.2f(GBP)",oper,oper1,oper2,oper3);
             break;
             case 3:
             printf("INTRODUZCA LA CANTIDAD QUE DESE\220(EUR): ");scanf("%d", &cant);
             printf("LA CONVERSION ES LA SIGUIENTE...\n\n");
                     oper= (cant*17.1906)/1;//pesos
                     oper1= (cant*1.3136)/1;//dolar
                     oper2= (cant*136.7139)/1;//yenes
                     oper3= (cant*0.79129)/1;//libras
             printf("El valor es:$%.2f(MXN)\nEl valor es:$%.2f(USD)\nEl valor es:$%.2f(JYP)\nEl valor es:$%.2f(GBP)",oper,oper1,oper2,oper3);
             break;
             case 4:
             printf("INTRODUZCA LA CANTIDAD QUE DESE\220(JYP): ");scanf("%d", &cant);
             printf("LA CONVERSION ES LA SIGUIENTE...\n\n");
                     oper= (cant*0.1257)/1;//pesos
                     oper1= (cant*0.0096)/1;//dolar
                     oper2= (cant*0.0073)/1;//euro
                     oper3= (cant*0.01)/1;//libras
             printf("El valor es:$%.2f(MXN)\nEl valor es:$%.2f(USD)\nEl valor es:$%.2f(EUR)\nEl valor es:$%.2f(GBP)",oper,oper1,oper2,oper3);
             break;
             case 5:
             printf("INTRODUZCA LA CANTIDAD QUE DESE\220(GBP): ");scanf("%d", &cant);
             printf("LA CONVERSION ES LA SIGUIENTE...\n\n");
                     oper= (cant*2.7173)/1;//pesos
                     oper1= (cant*1.66)/1;//dolar
                     oper2= (cant*1.2630)/1;//euro
                     oper3= (cant*172.75)/1;//yenes
             printf("El valor es:$%.2f(MXN)\nEl valor es:$%.2f(EUR)\nEl valor es:$%.2f(EUR)\nEl valor es:$%.2f(JYP)",oper,oper1,oper2,oper3);
             break;
             case 6:
             printf("Salir del programa");
             break;
             }
      getch();
      return 0;
      }
