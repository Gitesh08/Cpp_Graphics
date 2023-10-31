#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
void main()
{
 clrscr();
 int gm, gd=DETECT;

 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

 setcolor(RED);
 circle(300,220,185);
 setfillstyle(SOLID_FILL,RED);
 floodfill(301,231,RED);

 setcolor(WHITE);
 for(int i=185;i<=500;i++)
 {
 circle(300,220,i);
 i++;
 }
 setcolor(BLACK);
 circle(300,220,186);
 circle(300,220,185);
 circle(300,220,184);
 circle(300,220,183);
 circle(300,220,182);
 circle(300,220,181);
 circle(300,220,180);
 circle(300,220,179);

 setcolor(BLACK);
 circle(300,220,25);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(301,231,BLACK);

 setcolor(BLACK);
 circle(195,250,23);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(196,251,BLACK);

 setcolor(BLACK);
 circle(300,110,23);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(301,111,BLACK);

 setcolor(BLACK);
 circle(405,250,23);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(406,251,BLACK);

 circle(300,220,110);

 setcolor(BLACK);
 arc(315,110,85,160,38);
 arc(316,110,85,160,38);
 arc(317,110,85,160,38);
 arc(318,110,85,160,38);
 arc(319,110,85,160,38);
 arc(320,110,85,160,38);
 arc(320,110,85,160,38);
 arc(321,110,85,160,38);
 arc(322,110,85,160,38);
 arc(323,110,85,160,38);
 arc(324,110,85,160,38);
 arc(325,110,85,160,38);
 arc(326,110,85,160,38);
 arc(327,110,85,160,38);
 arc(328,110,85,160,38);
 arc(329,110,85,160,38);
 arc(330,110,85,160,38);
 arc(331,110,85,160,38);
 arc(332,110,85,160,38);
 arc(333,110,85,160,38);
 arc(334,110,85,160,38);


 arc(192,236,170,290,38);
 arc(192,235,170,290,38);
 arc(192,234,170,290,38);
 arc(192,233,170,290,38);
 arc(192,232,170,290,38);
 arc(192,231,170,290,38);
 arc(192,230,170,290,38);
 arc(192,229,170,290,38);
 arc(192,228,170,290,38);
 arc(192,227,170,290,38);
 arc(192,226,170,290,38);
 arc(192,225,170,290,38);
 arc(192,224,170,290,38);
 arc(192,223,170,290,38);
 arc(192,222,170,290,38);
 arc(192,221,170,290,38);
 arc(192,220,170,290,38);
 arc(192,219,170,290,38);

 arc(405,265,354,100,38);
 arc(405,266,354,100,38);
 arc(405,267,354,100,38);
 arc(405,268,354,100,38);
 arc(405,269,354,100,38);
 arc(405,270,354,100,38);
 arc(405,271,354,100,38);
 arc(405,272,354,100,38);
 arc(405,273,354,100,38);
 arc(405,274,354,100,38);
 arc(405,275,354,100,38);
 arc(405,276,354,100,38);
 arc(405,277,354,100,38);
 arc(405,278,354,100,38);
 arc(405,279,354,100,38);
 arc(405,280,354,100,38);
 arc(405,281,354,100,38);
 arc(405,282,354,100,38);
 arc(405,283,354,100,38);
 arc(405,284,354,100,38);



 getch();
 }
