#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>
#include<string.h>
void main()
{
	 int gm,gd=DETECT,a;
	 int c=0;
	 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	 setcolor(GREEN);
	 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	 outtextxy(270,113,"LOGIN");
	 setcolor(LIGHTGRAY);
	 settextstyle(SMALL_FONT,HORIZ_DIR,6);
	 outtextxy(200,171,"username:");
	 char m[40]="Gitesh";
	 char n[40]="Gsm";
	 char name[40];
	 gotoxy(37,12);
	 cin.getline(name,40);
	 settextstyle(SMALL_FONT,HORIZ_DIR,6);
	 outtextxy(200,205,"password:");
	 char pass[40];
	 gotoxy(37,14);
	 cin.getline(pass,40);

	 int len1=strlen(pass);
	 int len2=strlen(name);
	 int i=0;
	 int count1=0;
	 int count2=0;
	 while(i<len1)
	 {
		if(pass[i]==n[i])
		{
			count1++;
		}
		i++;
	 }
	 i=0;
	 while(i<len2)
	 {
		if(name[i]==m[i])
		{
			count2++;
		}
		i++;
	 }
	 if(count1==len1 && count2==len2)
	 {
	 }
	 else if(c>2)
	 {
		closegraph();
		exit(0);
	 }
	 else
	 {      cleardevice();
			setcolor(RED);
		rectangle(130,150,525,220);
		rectangle(120,140,535,230);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
		outtextxy(150,150,"ACESS DENIED");
		c++;
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,4);
		outtextxy(240,286,"You Have Entered Wrong Details");
		 int e=200;
	   setcolor(WHITE);
	   rectangle(198,268,461,282);
	   setcolor(RED);
	   for(int k=0;k<260;k++)
		{
		delay(20);
		line(e,270,e,280);
		e++;
		}
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,6);
		outtextxy(20,40,"Enter 'Esc' to Exit.");

		delay(400);
		getch();
		closegraph();

	 }
	    cleardevice();
	  setcolor(GREEN);
	  rectangle(120,160,550,220);
	  rectangle(110,150,560,230);
	  settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	  outtextxy(140,160,"LOGIN SUCESSFULLY");
	  setcolor(WHITE);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(240,286,"Redirecting Sucessful...");
	   int e=200;
	   setcolor(WHITE);
	   rectangle(198,268,461,282);
	   setcolor(LIGHTGREEN);
	   for(int k=0;k<260;k++)
		{
		delay(20);
		line(e,270,e,280);
		e++;
		}
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,6);
		outtextxy(20,40,"Enter 'Esc' to Exit.");

	delay(400);


		if(kbhit())
		{
			int key=getch();
			if(key==27)
			{
				exit(0);
			}
		}
	   getch();
	}



