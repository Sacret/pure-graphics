#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
// Options - Linker - Libraries [*] Gaphic libraries
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");// egavga.bgi должен быть "здесь"

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   midx=getmaxx()/2;
   midy=getmaxy()/2;

   //
   fillellipse (midx, midy,100,120);   /*face:)*/
   setfillstyle (1, 8);
   floodfill (midx, midy, BLACK);
   setcolor (8);
   //
   fillellipse (midx-80, midy-120,40,80);  /* ear 1 */
   setfillstyle (1, 8);
   floodfill (midx-80, midy-120, 8);
   setcolor (12);
   //
   fillellipse (midx-80, midy-120,28,50);
   setfillstyle (1, 12);
   floodfill (midx-80, midy-120, 12);
   setcolor (8);
   //
   fillellipse (midx+80, midy-120,40,80);   /*ear 2*/
   setfillstyle (1, 8);
   floodfill (midx+80, midy-120, 8);
   setcolor (12);
   //
   fillellipse (midx+80, midy-120,28,50);
   setfillstyle (1, 12);
   floodfill (midx+80, midy-120, 12);
   setcolor (0);
   //
   circle (midx, midy+30, 15);
   setfillstyle (1, 0);
   floodfill (midx, midy+30, 0);
   setcolor (15);
   //
   circle (midx-4, midy+25, 5);
   setfillstyle (1, WHITE);
   floodfill (midx-4, midy+25, 15);
   setcolor (15);
   //
   circle (midx-50, midy-20, 20);   /* eye 1*/
   setfillstyle (1, WHITE);
   floodfill (midx-50, midy-20, WHITE);
   setcolor (0);
   circle (midx-50, midy-20, 15);
   setfillstyle (1, BLACK);
   floodfill (midx-50, midy-20,0);
   setcolor (WHITE);
   circle (midx-45, midy-20, 5);
   setfillstyle (1, WHITE);
   floodfill (midx-45, midy-20,WHITE);
   //
  //
   circle (midx+50, midy-20, 20);   /* eye 2*/
   setfillstyle (1, WHITE);
   floodfill (midx+50, midy-20, WHITE);
   setcolor (0);
   circle (midx+50, midy-20, 15);
   setfillstyle (1, BLACK);
   floodfill (midx+50, midy-20, 0);
   setcolor (15);
   circle (midx+55, midy-20, 5);
   setfillstyle (1, WHITE);
   floodfill (midx+55, midy-20, 15);
   setcolor(RED);
   //
   fillellipse(midx,midy+70,40,20);
   setfillstyle(1,RED);
   floodfill(midx,midy+68,RED);
   setcolor(8);
   //
   fillellipse(midx,midy+60,40,14);
   setfillstyle(1,8);
   floodfill(midx,midy+58,8);
   setcolor(15);
   //
   outtextxy(midx-120,getmaxy()-50," Hello! I'm Zaika, only Zaika ;)");
   outtextxy(midx-50,getmaxy()-30,"(C) Sacret'09");
   //
   getch();
   closegraph();
   return 0;
}
