/*BikeGraphix.c--Write a program for a bicycle traveling
 fast from right to left on a road.*/
#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
int main(void)
{
	int gdriver=VGA,gmode=VGAHI;
	int bgcolor=9,roadcolor=2,bikecolor=4,textcolor1=62,textcolor2=57;
	int bikespeed=3,rollspeed=1,time=0;
	int i,j;
	void *w;

	initgraph(&gdriver,&gmode,"");

	setbkcolor(bgcolor);
	setfillstyle(1,roadcolor);
	bar(0,400,639,479);

	setcolor(bikecolor);
	circle(600,370,30);
	circle(500,370,30);
	line(500,370,530,328);
	line(519,328,540,328);
	line(600,370,561,370);
	line(561,370,580,328);
	line(586,328,575,328);
	line(600,370,578,332);
	line(578,332,520,343);
	line(561,370,520,343);

	w=malloc(imagesize(465,325,635,400));
	getimage(465,325,635,400,w);

	setfillstyle(0,bgcolor);
	pieslice(600,370,90,270,30);
	pieslice(600,370,135,315,30);
	pieslice(600,370,180,360,30);
	pieslice(600,370,225,45,30);
	pieslice(500,370,90,270,30);
	pieslice(500,370,135,315,30);
	pieslice(500,370,180,360,30);
	pieslice(500,370,225,45,30);

	settextstyle(0,0,2);
	settextjustify(1,1);
	setcolor(textcolor1);
	outtextxy(320,240,"Press any key to start the bike.");
	getch();
	setcolor(textcolor2);
	outtextxy(320,240,"Press any key to start the bike.");

	setcolor(bikecolor);
	for(i=bikespeed,j=rollspeed;i<=465;i+=bikespeed,j+=rollspeed)
	{
		putimage(465-i,325,w,0);
		pieslice(600-i,370,90+j,270+j,30);
		pieslice(600-i,370,135+j,315+j,30);
		pieslice(600-i,370,180+j,360+j,30);
		pieslice(600-i,370,225+j,45+j,30);
		pieslice(500-i,370,90+j,270+j,30);
		pieslice(500-i,370,135+j,315+j,30);
		pieslice(500-i,370,180+j,360+j,30);
		pieslice(500-i,370,225+j,45+j,30);
		delay(time);
	}

	getch();
	closegraph();
	return 0;
}