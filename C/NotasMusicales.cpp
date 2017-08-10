//Programa para calcular la Resistencia1

/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

float frecc(float x,float y);
int main()
{
    float n,o,f;
    Portada();
    textbackground(5);
    clrscr();
    textcolor(13,5);
    gotoxy(7,3);printf("\260");gotoxy(7,4);printf("\260");gotoxy(7,5);printf("\260");
    gotoxy(7,6);printf("\260");/*gotoxy(7,7);printf("\260");*/gotoxy(7,8);printf("\260");
    gotoxy(7,9);printf("\260");gotoxy(7,10);printf("\260");gotoxy(7,11);printf("\260");
    //---------------------------------------------------------------------------------
    gotoxy(70,3);printf("\260");gotoxy(70,4);printf("\260");gotoxy(70,5);printf("\260");
    gotoxy(70,6);printf("\260");/*gotoxy(70,7);printf("\260")*/;gotoxy(70,8);printf("\260");
    gotoxy(70,9);printf("\260");gotoxy(70,10);printf("\260");gotoxy(70,11);printf("\260");
    //------------------------------------------------------------------------------------
    gotoxy(9,2);printf("\"NUMERO DE FRECUENCIA(EN HERTZIOS) PARA LAS NOTAS MUSICALAS\"");
    gotoxy(11,4);printf("INGRESA LA NOTA (1 - 12): ");scanf("%f",&n);
    gotoxy(11,6);printf("INGRESA LA OCTAVA (0-8)");scanf("%f",&o);

    f = frecc(n,o);

    if (n==1) printf("\t\tLA FRECUENCIA DE \"Do\" es: %.2f",f);
    else if (n==2) printf("\t\tLA FRECUENCIA DE \"Do#\" es: %.2f",f);
    else if (n==3) printf("\t\tLA FRECUENCIA DE \"RE\" es: %.2f",f);
    else if (n==4) printf("\t\tLA FRECUENCIA DE \"Re#\" es: %.2f",f);
    else if (n==5) printf("\t\tLA FRECUENCIA DE \"Mi\" es: %.2f",f);
    else if (n==6) printf("\t\tLA FRECUENCIA DE \"Fa\" es: %.2f",f);
    else if (n==7) printf("\t\tLA FRECUENCIA DE \"Fa#\" es: %.2f",f);
    else if (n==8) printf("\t\tLA FRECUENCIA DE \"Sol\" es: %.2f",f);
    else if (n==9) printf("\t\tLA FRECUENCIA DE \"Sol#\" es: %.2f",f);
    else if (n==10) printf("\t\tLA FRECUENCIA DE \"La\" es: %.2f",f);
    else if (n==11) printf("\t\tLA FRECUENCIA DE \"La#\" es: %.2f",f);
    else if (n==12) printf("\t\tLA FRECUENCIA DE \"Si\" es: %.2f",f);

    else printf("INTRODUZCA UNA NOTA DE 1 AL 12");

    Beep(f,2000);
     f=(440*exp((((6-4))+((1-10)/(12.0)))*log(2)));Beep(f,2000);
     f=(440*exp((((6-4))+((3-10)/(12.0)))*log(2)));Beep(f,2000);
     f=(440*exp((((6-4))+((5-10)/(12.0)))*log(2)));Beep(f,2000);
     f=(440*exp((((6-4))+((6-10)/(12.0)))*log(2)));Beep(f,2000);
     f=(440*exp((((6-4))+((8-10)/(12.0)))*log(2)));Beep(f,2000);
     f=(440*exp((((6-4))+((10-10)/(12.0)))*log(2)));Beep(f,2000);

    getch();
}

float frecc (float x, float y)
{
  return (440*exp((((y-4))+((x-10)/(12)))*log(2)));
}
