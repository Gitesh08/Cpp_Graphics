#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>

void main()
{
clrscr();

int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
setbkcolor(BLACK);
setcolor(RED);
  ellipse(270,180,100,200,90,90);//top left red
  ellipse(270,180,341,100,90,90);//top right red
  delay(500);
  ellipse(270,230,20,160,90,60); //middle  red
  delay(500);
  setcolor(WHITE);
  ellipse(270,180,210,331,90,90);//down white
  delay(500);
  ellipse(270,254,389,150,90,60);//middle white
  delay(500);
  rectangle(260,270,283,350);
  delay(500);
  setcolor(WHITE);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
  outtextxy(370,240,"clan");
  delay(800);
   setcolor(WHITE);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(510,270,"iha");
  setcolor(RED);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
  outtextxy(390,270,"Uch");
  getch();
  }
