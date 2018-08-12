#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
int lol(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }

   rectangle(100,50, 240, 400);
   rectangle(140,60,200,70);
   rectangle(110,80, 230,370);
   circle(170,385,10);
   setcolor(WHITE);

   outtextxy(460,420,"LOADING");
   settextstyle(1,0,2);
   outtextxy(270,50, "WELCOME TO UNIVERSAL MOBILES");
   circle(430,200, 40);
   ellipse(430,200,30,390,60,25);
   ellipse(430,200,30,390,25,70);
   settextstyle(3,0,1);
   outtextxy (330,300, "Press Enter to continue...");
   for(int i=0; i<150; i++)
   {setcolor(RED);

   rectangle(460,440,460+i,460);
   delay(20);
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}
