#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
void main()
{
clrscr();
int gm,gd=DETECT;;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

setbkcolor(BLACK);
for(int i=0;i<=90;i++)
{
circle(120,190,i);
setcolor(WHITE);
setfillstyle(SOLID_FILL,0);
floodfill(122*i,192*i,1);
delay(10);
}
setcolor(1);
circle(120,190,60);
circle(120,190,90);
circle(120,190,89);
circle(120,190,88);
setcolor(1);
circle(120,190,59);
setcolor(1);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(105,120,"Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(115,158,"E");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(105,195,"S");
setcolor(9);
rectangle(65,300,190,325);
setfillstyle(SOLID_FILL,9);
floodfill(66,301,9);
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(69,300,"ESTD-1996");
delay(100);
setcolor(1);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(115,95,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(60,120,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(170,120,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(60,220,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(170,220,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(40,170,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(190,170,"*");
delay(100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(100,253,"PUNE");
delay(100);

setcolor(LIGHTRED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(220,60,"Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(251,90,"EAL");
delay(1000);
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(290,120,"E");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(326,150,"DUCATION");
delay(1000);
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(436,180,"S");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(470,210,"OCIETY");
delay(1000);
setcolor(YELLOW);
circle(550,90,52);
circle(550,90,53);
setcolor(RED);
circle(550,90,50);
circle(550,90,48);
circle(550,90,46);
circle(550,90,44);
circle(550,90,42);
circle(550,90,40);
circle(550,90,38);
circle(550,90,36);
circle(550,90,34);
circle(550,90,32);
circle(550,90,30);
circle(550,90,28);
circle(550,90,26);
circle(550,90,24);
circle(550,90,22);
circle(550,90,20);
circle(550,90,18);
circle(550,90,16);
circle(550,90,14);
circle(550,90,12);
circle(550,90,10);
circle(550,90,8);
circle(550,90,6);
circle(550,90,4);
circle(550,90,2);
circle(550,90,0);

setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(520,50,"26");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(522,110,"YEARS");
delay(10);
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(275,272,"Founder.Hon.Mr.S.M.KATKAR");


setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3),
outtextxy(150,360,"R");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(174,367,"edefining");
delay(100);
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3),
outtextxy(340,360,"E");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(364,367,"xcellence...");
setcolor(WHITE);
int v,z,m=300;
setcolor(YELLOW);
 for(v=0;v<200;v++)
 {
  delay(4);
  line(m,270,m,270);
  m++;
  }
  for(z=200;z>0;z--)
  {
  delay(4);
  line(m,300,m,300);
  m--;
  }
delay(100);
cleardevice();
//part 2:
setbkcolor(WHITE);
for(int p=0;p<=100;p++)
{
circle(310,190,p);
setcolor(DARKGRAY);
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
floodfill(122*p,192*p,1);
delay(20);
}
setcolor(WHITE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(225,162,"C++ CODES");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
outtextxy(225,162,"C++ CODES");
setcolor(YELLOW);
circle(310,190,100);
circle(310,190,99);
circle(310,190,98);
circle(310,190,97);
circle(310,190,96);
circle(310,190,95);
circle(310,190,101);
circle(310,190,102);
circle(310,190,103);
circle(310,190,104);
circle(310,190,105);
circle(310,190,106);




setcolor(DARKGRAY);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(260,320,"PRESENTS...");
setcolor(RED);
line(253,350,375,350);
line(253,352,375,352);

delay(4000);
cleardevice();
//PART 3

setbkcolor(BLACK);
setcolor(LIGHTGREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(50,120,"GET REDAY FOR ");
delay(2000);
setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(120,270,"THE 15th SEPTEMBER...");
delay(4000);
cleardevice();
setbkcolor(BLACK);
setcolor(BLUE);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
outtextxy(70,130,"BECAUSE");
delay(2000);
setcolor(RED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(150,270,"IT'S OUR DAY...");
delay(4000);
cleardevice();
setbkcolor(BLACK);
setcolor(BLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(31,130,"HAPPY ENGINEER'S DAY");
setcolor(LIGHTBLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(30,130,"HAPPY ENGINEER'S DAY");
setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(29,130,"HAPPY ENGINEER'S DAY");
setcolor(BROWN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(100,230,"Dedicating this day to a visionary,a Legend &");
setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(170,260,"the greatest Indian Engineer");
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(110,295,"- Bharat Ratna Sir M. Visvesvaraya");


delay(7000);
cleardevice();


setbkcolor(BLACK);

setcolor(WHITE);
rectangle(128,258,491,272);
setcolor(LIGHTBLUE);
int e=130;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(180,100,"WELCOME TO");
delay(300);
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(120,180,"<HELLO WORLD DEPARTMENT>");
settextstyle(SMALL_FONT,HORIZ_DIR,5);
outtextxy(130,240,"Redirecting to department...");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,300,"still_alive=true;");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,320,"While(still_alive){");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,340,"WearMask();");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,360,"Stay6ftApart();");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,380,"WashHands();");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,400,"GetTested();");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,420,"}");
setcolor(LIGHTGREEN);
for(int k=0;k<360;k++)
 {
  delay(40);
  line(e,260,e,270);
  e++;
  }
 setcolor(WHITE);
settextstyle(SMALL_FONT,HORIZ_DIR,5);
outtextxy(300,275,"Redirecting Sucessful...");
delay(4000);
cleardevice();
  setbkcolor(BLACK);
setcolor(LIGHTBLUE);
circle(150,230,90);
setcolor(9);
circle(151,231,90);
setcolor(LIGHTBLUE);
circle(150,230,90);
setcolor(LIGHTBLUE);
circle(151,230,90);
setcolor(LIGHTBLUE);
circle(150,230,60);
setcolor(LIGHTBLUE);
circle(151,231,60);
setcolor(LIGHTBLUE);
circle(150,229,60);
setcolor(LIGHTBLUE);

circle(151,229,60);
setcolor(9);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(135,172,"Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(150,205,"E");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(135,235,"S");
rectangle(90,331,220,355);
setcolor(9);
setfillstyle(SOLID_FILL,9);
floodfill(91,332,9);
setcolor(BLACK);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(98,330,"ESTD-1996");
setcolor(9);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(98,155,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(145,140,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(187,155,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(76,190,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(218,190,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(74,230,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(218,230,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(90,268,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(200,268,"*");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(128,290,"PUNE");
 setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(22,140,"Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(22,180,"C");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(22,220,"O");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(22,260,"E");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(22,300,"R");
 setcolor(LIGHTBLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(20,140,"Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(20,180,"C");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(20,220,"O");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(20,260,"E");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(20,300,"R");

setcolor(MAGENTA);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(10,400,"Address :");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(10,370,"Contact :");
setcolor(WHITE);
line(10,425,90,425);
line(10,395,90,395);
line(450,135,565,135);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(100,373," 020-6720 6000/106");
setcolor(LIGHTBLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1.99999);
outtextxy(450,110,"www.zcoer.in");

setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(100,403," Survey No.39,Dhayari Narhe Rd.,");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(100,423," Narhe,Pune,Maharashtra 411041");
settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
setcolor(YELLOW);
rectangle(100,40,510,100);
rectangle(100,40,510,100);
rectangle(100,40,510,100);
rectangle(100,40,510,100);
rectangle(101,41,511,101);
rectangle(101,41,511,101);
rectangle(99,39,512,102);
setcolor(LIGHTBLUE);
rectangle(102,42,509,99);
rectangle(102,42,509,99);
rectangle(103,43,508,98);

setcolor(YELLOW);
outtextxy(120,50,"Zeal College of Engineering");
setcolor(LIGHTRED);
line(270,181,420,181);
line(442,221,620,221);
line(262,256,460,256);
line(458,291,590,291);
line(270,326,400,326);

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(278,160,"Mr. S.M.Katkar");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(265,183,"(Founder Director)");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(450,200,"Mr. Jayesh Katkar");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(473,223,"(Secretary)");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(270,235,"Mr. Pradip Khandave");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(280,258,"(Executive Dir.)");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(460,270," Dr. A M Kate");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(473,293," (Principal)");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(275,305,"Ms.A V Mote");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(280,328,"(HOD Computer)");
setcolor(LIGHTGREEN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,100,"(Computer Department)");


getch();
}