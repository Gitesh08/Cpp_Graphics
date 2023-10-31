#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
clrscr();

int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setcolor(RED);
rectangle(150,100,500,300);
setfillstyle(SOLID_FILL,RED);
floodfill(151,101,RED);
setcolor(WHITE);
rectangle(300,130,335,270);
setfillstyle(SOLID_FILL,WHITE);
floodfill(301,131,WHITE);
setcolor(WHITE);
rectangle(250,180,390,215);
setfillstyle(SOLID_FILL,WHITE);
floodfill(251,181,WHITE);
floodfill(336,181,WHITE);

getch();
}
