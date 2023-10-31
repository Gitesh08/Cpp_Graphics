
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
int main()
{

int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(15);
setcolor(8);
rectangle(150,200,240,260);
setfillstyle(SOLID_FILL,8);
floodfill(151,231,8);
setcolor(7);
circle(193,230,18);
setfillstyle(SOLID_FILL,7);
floodfill(193,230,7);

setcolor(8);
circle(193,229,15);
setfillstyle(SOLID_FILL,15);
floodfill(193,230,8);

setcolor(7);
circle(235,205,4);
setfillstyle(SOLID_FILL,7);
floodfill(236,204,7);
setcolor(8);
rectangle(200,190,220,200);
setfillstyle(SOLID_FILL,7);
floodfill(201,191,8);
setcolor(15);
circle(236,204,2);
setfillstyle(SOLID_FILL,15);
floodfill(236,205,15);
setcolor(2);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,160,"HAPPY  WORLD");

setcolor(5);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,220,"PHOTOGRAPHY");

setcolor(12);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(300,280,"DAY!");
return 0;
getch();
}
