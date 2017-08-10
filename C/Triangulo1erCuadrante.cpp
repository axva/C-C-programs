/*********************/
/*Autor: Axel Vázquez*/
/****Github: @axva****/
/*********************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <C:\Users\Admin\Downloads\edit.h>//se debe ingresar la ruta donde estará guardado el archivo edit.h

//inicializacion de funciones
float distancia (float x, float y);
float pendiente (float x, float y);
float Angulo (void);

float D1,D2,D3,m1,m2,m3;//declaracion de variables globales

int main ()

{
        float x1,x2,x3,y1,y2,y3,a,b,c,d,e,f,A1,A2,A3;
        textbackground(8);
        clrscr();
        textcolor(11,8);
        gotoxy(9,2); printf("\"PROGRAMA PARA CALCULAR LAS DISTANCIAS, PENDEINTES Y ANGULOS");
        gotoxy(9,3); printf("DE UN TRIANGULO DADAS SUS COORDENADAS EN EL PRIMER CUADRANTE");
        gotoxy(32,4); printf("DE UN PLANO CARTESIANO.\"");
        printf("\n\n\tIngrese el valor en x1: "); scanf("%f",&x1);
        printf("\tIngrese el valor en y1: "); scanf("%f",&y1);
        printf("\n\tIngrese el valor en x2: "); scanf("%f",&x2);
        printf("\tIngrese el valor en y2: "); scanf("%f",&y2);
        printf("\n\tIngrese el valor en x3: "); scanf("%f",&x3);
        printf("\tIngrese el valor en y3: "); scanf("%f",&y3);

        a=x2-x1;
        b=y2-y1;

        c=x3-x2;
        d=y3-y2;

        e=x3-x1;
        f=y3-y1;

        D1= distancia (a,b);
        D2= distancia (c,d);
        D3= distancia (e,f);

        m1= pendiente (a,b);
        m2= pendiente (c,d);
        m3= pendiente (e,f);

        A1=Angulo ();
        A2=Angulo ();
        A3=Angulo ();

        gotoxy(8,14); printf("-----------------------------");
        printf("\n\tDistancia punto 1 a 2: %.2f",D1);
        printf("\n\tDistancia punto 2 a 3: %.2f",D2);
        printf("\n\tDistancia punto 3 a 1: %.2f",D3);
        printf("\n\n\tPendiente 1: %.2f",m1);
        printf("\n\tPendiente 2: %.2f",m2);
        printf("\n\tPendiente 3: %.2f",m3);
        printf("\n\n\tAngulo x1,y1: %.2f",A1);
        printf("\n\tAngulo x2,y2: %.2f",A2);
        printf("\n\tAngulo x3,y3: %.2f",A3);

        getch();
}

//Declaracion de funciones
float distancia (float x, float y)
{
        return (sqrt(pow((y),2)+pow((x),2)));
}

float pendiente (float x, float y)
{
        return ((y)/(x));
}

float Angulo (void)
{
        float p1;
        p1= atan((m1-m2)/(1+(m2*m1)));
        p1*=57.29577951;
        return (p1);
}
