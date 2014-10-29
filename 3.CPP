#include<graphics.h>
#include<conio.h>
#include <stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
  int dr=DETECT,mod,err;
  float i, j,razm=30;
  int d=0;
  //
  randomize();
  i=310;
  j=240;

  initgraph(&dr,&mod," ");
  err=graphresult();

  // nebo
  setcolor(2);
  rectangle(0,0,getmaxx(),getmaxy());
  setfillstyle(1,9/*tsvet fona*/);
  floodfill(1,1,9);
  // trava
  setcolor(2);
  rectangle(0,getmaxy()/2+70,getmaxx(),getmaxy());
  setfillstyle(1,GREEN);
  floodfill(1,getmaxy()/2+71,2);
  // domik
  setcolor(BLACK);
  rectangle(getmaxx()-250,getmaxy()/2-80,getmaxx()-100,getmaxy()/2+70);
  setfillstyle(1,7);
  floodfill(getmaxx()-250+1,getmaxy()/2-80+1,BLACK);
  // okno
  setcolor(BLACK);
  circle(465,190,15);
  setfillstyle(1,9);
  floodfill(465,190,BLACK);
  line (450,190,480,190);
  line (465,175,465,205);
  // dver'
  setcolor(BLACK);
  rectangle(getmaxx()-200,getmaxy()/2-20,getmaxx()-150,getmaxy()/2+70);
  setfillstyle(1,8);
  floodfill(getmaxx()-200+1,getmaxy()/2-20+1,BLACK);
  // ruchka dveri
  setcolor(BLACK);
  circle(getmaxx()-190,getmaxy()/2+20,5);
  setfillstyle(1,BROWN);
  floodfill(getmaxx()-190,getmaxy()/2+20,BLACK);
  // krisha
  setcolor(BLACK);
  rectangle(getmaxx()-250,getmaxy()/2-80,getmaxx()-100,getmaxy()/2-100);
  setfillstyle(1,BLACK);
  floodfill(getmaxx()-250+1,getmaxy()/2-80-1,BLACK);
  // truba
  setcolor(BLACK);
  rectangle(getmaxx()-140,getmaxy()/2-100,getmaxx()-120,getmaxy()/2-140);
  setfillstyle(1,7);
  floodfill(getmaxx()-140+1,getmaxy()/2-100-1,BLACK);
  // dim
  setcolor(7);
  circle(510,80,5);
  circle(530,60,10);
  circle(560,40,15);
  setfillstyle(1,7);
  floodfill(510,80,7);
  floodfill(530,60,7);
  floodfill(560,40,7);
  // zabor
  setcolor(6);
  rectangle(350,210,370,310);
  rectangle(330,210,310,310);
  rectangle(290,210,270,310);
  rectangle(250,210,230,310);
  rectangle (210,210,190,310);
  rectangle(560,210,580,310);
  rectangle (600,210,620,310);
  setfillstyle(1,6);
  floodfill(351,211,6);
  floodfill(311,211,6);
  floodfill(271,211,6);
  floodfill(231,211,6);
  floodfill(191,211,6);
  floodfill(561,211,6);
  floodfill(601,211,6);
  // cvetochek
  for (i=110; i<=500; i+=60)
  {
  setcolor(BLACK);
  circle(i,350,10);
  circle(i+20,350,10);
  circle(i+10,340,10);
  circle(i+10,360,10);

  setfillstyle(1,12);
  floodfill(i,350,BLACK);
  floodfill(i+20,350,BLACK);
  floodfill(i+10,340,BLACK);
  floodfill(i+10,360,BLACK);
  }
  // oblako
  setcolor (WHITE);
  circle (250,100,33);
  circle (310,110,33);
  circle (290,60,33);
  setfillstyle(1,WHITE);
  floodfill(250,100,WHITE);
  floodfill(310,110,WHITE);
  floodfill(280,105,WHITE);
  floodfill(280,60,WHITE);
  floodfill(270,80,WHITE);
  floodfill(300,82,WHITE);

  // solnishko
  i=70; j=240;
  while (1)
  {
    if (kbhit()!=0)
    {
      d=getch();
      if (d==27) break;
    }
    //printf ("%d", d);
    while (1)
    {
      if (kbhit()!=0)
      {
	break;
      }
      setcolor(14);
      circle(i,j,razm);
      setfillstyle(1,14);
      floodfill(i,j,14);

      delay(15);

      setcolor(9);
      circle(i,j,razm);
      setfillstyle(1,9);
      floodfill(i,j,9);

      if (d==54) i+=0.5;
      if (d==52) i-=0.5;
      if (d==50) {j+=0.5; razm-=0.1; if (razm<=0.1) razm=0.1;}
      if (d==56) {j-=0.5; razm+=0.1; if (razm>=60) razm=60;}

      if (i==getmaxx()&&d==54) i=1;
      if (i==1&&d==52) i=getmaxx();
      if (j==getmaxy()&&d==50) j=1;
      if (j==1&&d==56)j=getmaxy();
    }
  }

  getch();
  closegraph();
}
