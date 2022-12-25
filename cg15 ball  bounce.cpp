//Write a C++ Program to implement bouncing ball using sine wave form.

#include <iostream>

#include <stdio.h>

//#include <conio.h>

#include <graphics.h>

//#include <dos.h>

using namespace std; 

int main() {

 int gd = DETECT, gm=VGAMAX;

 int i, x, y, flag=0;

 initgraph(&gd, &gm, NULL);

 

 /* get mid positions in x and y-axis */

 x = getmaxx()/2;

 y = 30;

 

 

 while (1) {

  if(y >= getmaxy()-30 || y <= 30)

     flag = !flag;

     /* draws the gray board */

     setcolor(RED);

     //setfillstyle(SOLID_FILL, RED);

     circle(x, y, 30);

     floodfill(x, y, RED);

 

 /* delay for 50 milli seconds */

 delay(50);

 

 /* clears screen */

 cleardevice();

 if(flag){

     y = y + 5;

 } else {

     y = y - 5;

 }

    }

 

    getch();

    closegraph();

    return 0;

}
