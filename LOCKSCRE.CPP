#include<iostream.h>

 #include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>
void main()
{
	 int gm,gd=DETECT;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	int x,y;
	int h,w;
	int color;

	while(1)
	{
		color=rand()%15;
		x=rand()%630;
		y=rand()%480;
		h=10+rand()%100;
		w=20+rand()%20;

		if(kbhit())
		{
			int key=getch();
			if(key==27)
			{
				exit(0);
			}
		}
		setfillstyle(1,color);
		rectangle(x,y,x+w,y+h);
		delay(100);
		}
	}