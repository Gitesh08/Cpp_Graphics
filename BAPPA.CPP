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
setcolor(LIGHTRED);

delay(500);
ellipse(235,250,130,300,100,90);
ellipse(236,250,130,300,100,90);
ellipse(237,250,130,300,100,90);
ellipse(238,250,130,300,100,90);

delay(100);
ellipse(185,180,550,290,0,10);
ellipse(186,182,550,290,0,10);
ellipse(187,188,550,290,0,20);
delay(100);
ellipse(225,200,170,280,40,30);
ellipse(225,199,170,280,40,30);
ellipse(225,198,170,280,40,30);
ellipse(225,197,170,280,40,30);
delay(100);
ellipse(260,229,0,360,40,1);
delay(100);
ellipse(270,277,9,100,80,50);
ellipse(270,278,9,100,80,50);
ellipse(270,279,9,100,80,50);
delay(950);
ellipse(192,130,545,260,40,51);
ellipse(193,130,545,260,40,51);
delay(1000);
ellipse(114,130,350,380,40,51);
ellipse(115,130,350,380,40,51);

ellipse(180,157,420,480,40,51);
delay(900);
ellipse(250,130,290,360,40,51);
ellipse(249,130,290,360,40,51);
delay(1000);
ellipse(326,120,160,210,40,30);
ellipse(325,120,160,210,40,30);
delay(1000);
ellipse(260,157,420,480,40,51);
delay(1000);
ellipse(170,330,130,310,100,50);
ellipse(171,330,130,310,100,50);
 delay(1000);
ellipse(343,330,9,100,80,50);
ellipse(344,330,9,100,80,50);
delay(1000);
ellipse(325,325,250,400,100,50);
ellipse(324,325,250,400,100,50);
ellipse(323,325,250,400,100,50);
delay(1000);
ellipse(230,320,40,30,10,5);
ellipse(231,320,40,30,10,5);
ellipse(232,320,40,30,10,5);
delay(1000);
ellipse(220,150,420,480,40,51);
ellipse(220,151,420,480,40,51);
ellipse(219,152,420,480,40,51);
ellipse(221,152,420,480,40,51);
delay(1000);
ellipse(220,155,430,470,45,61);
delay(1000);
ellipse(220,154,430,470,45,61);
delay(1000);
ellipse(220,149,440,460,45,61);
delay(900);

setcolor(15);
  ellipse(530,300,130,40,50,40);
  ellipse(530,300,130,40,50,40);
  ellipse(531,300,130,40,50,40);
  setcolor(14);
  ellipse(530,300,130,40,50,40);
  setcolor(14);
  ellipse(532,300,130,40,50,40);
  setcolor(14);
  line(495,271,530,233);
  line(568,274,528,235);
  line(568,274,528,235);
  line(495,271,530,233);
  line(568,274,528,235);
  line(495,271,530,233);
  line(568,274,529,235);
  line(495,271,530,233);

setcolor(WHITE);
delay(1000);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
outtextxy(400,30,"HAPPY");
delay(100);
setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
outtextxy(380,90,"GANESH");
delay(100);
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
outtextxy(340,150,"CHATURTHI");
setcolor(14);
rectangle(10,10,630,442);
setcolor(9);
rectangle(12,12,628,440);
setcolor(14);
rectangle(14,14,626,438);
setcolor(9);
rectangle(16,16,624,436);
setcolor(14);
rectangle(18,18,622,434);
setcolor(9);
rectangle(20,20,620,432);
setcolor(14);
rectangle(22,22,618,430);

getch();
}
