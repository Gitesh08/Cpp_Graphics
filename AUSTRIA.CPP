#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
void main()
{
 clrscr();
 int gm, gd=DETECT;

 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

 setcolor(RED);
 rectangle(100,100,400,150);
 setfillstyle(SOLID_FILL,RED);
 floodfill(101,101,RED);
 setcolor(WHITE);
 rectangle(100,150,400,200);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(101,151,WHITE);
 setcolor(RED);
 rectangle(100,200,400,250);
 setfillstyle(SOLID_FILL,RED);
 floodfill(101,201,RED);
 getch();
 }
