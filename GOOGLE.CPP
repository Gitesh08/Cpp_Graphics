#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
void main()
{
clrscr();

int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

setbkcolor(WHITE);

setcolor(LIGHTGRAY);
rectangle(200,360,300,345);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(201,361,LIGHTGRAY);

setcolor(LIGHTGRAY);
rectangle(150,310,500,290);

//setcolor(8);
//circle(193,229,15);
//setfillstyle(SOLID_FILL,15);
//floodfill(193,230,8);


setcolor(DARKGRAY);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(210,346,"Google Search");

setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(200,220,"G");

setcolor(LIGHTRED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(240,220,"o");

setcolor(YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(280,220,"o");

setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(320,220,"g");

setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(360,220,"l");

setcolor(LIGHTRED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(400,220,"e");



getch();
}