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
setcolor(WHITE);
rectangle(150,100,500,300);
setfillstyle(SOLID_FILL,WHITE);
floodfill(151,101,WHITE);
setcolor(GREEN);
rectangle(150,100,267,300);
setfillstyle(SOLID_FILL,GREEN);
floodfill(151,101,GREEN);
setcolor(RED);
rectangle(383,100,500,300);
setfillstyle(SOLID_FILL,RED);
floodfill(384,101,RED);
getch();
}
