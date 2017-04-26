//========================================================================
//||Project Game: Brick & Block         				 ||
//||Created By : Thananop Kobchaisawat    M.4/7 No.2                     ||
//||             Karoon   Prasarnsuklarp  M.4/7 No.4                     ||
//||Teacher   : Mr.Surachai Piyaprapaphan                                ||
//========================================================================
#include "stdio.h"
#include "conio.h"
#include "graphics.h"
#include "dos.h"
#include "stdlib.h"
int boxpos[5][2]={{0}},checkbox[5]={1,1,1,1,1};
int hprateold=0;
int hprate=0;
int hptotal=0;
int lastuse=0;
int stage=0;
int haste=0;
int hastex=0;
int itembox[5]={0};
int lastpos[5][2]={{0}};
int hp,sp;
int xh=0,yh=380;
int frist=0;
int hund_old[5]={-1,-1,-1,-1,-1};
struct time t;
int score=0,metro=1,blizard=1,thunder=1;
int dark=1,cross=1;
int mget=0,bget=0,lget=0,cget=0,dget=0;
int stageold=0;
int f=0;
int sex=0;
char *text;
void lost();
void sword(int x,int y);
void darkhole();
//void femalers(int x,int y);
void stageselect(int x);
void cardblizzard(int x,int y);
void cardcross(int x,int y);
void cardthunder(int x,int y);
void carddark(int x,int y);
void cardfire(int x,int y);
void blizzardef(int x,int y);
void blizzard();
void thunders();
void darkef(int x,int y);
void fireef(int x,int y);
void thunderef(int x,int y);
void crossef(int x,int y);
void rod(int x,int y);
void crosss();
void metros();
void namef();
void male(int x,int y);
void female(int x,int y);
void namem();
void femalels(int x,int y);
void malers(int x,int y);
void hpef(int x,int y);
void spef(int x,int y);
void start();
void menu();
void play();
void box();
void drawbox(int num,int spitime,int fall);
void magicbook();
void checkpoint(int num);
void credit();
void ins();
void select();
void chapter1(int x,int y);
void chapter2(int x,int y);
void chapter3();
void chapter4();
void chapter5(int x,int y);
void lost();
void main()
{
   randomize();
   int gdriver = DETECT,gmode;
   initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
  start();
 //   magicbook();
  menu();
   //play();
  //stageselect();
  // credit();
   //ins();
   //lost();
   closegraph();
   //getch();
}
void menu()
{ int a=638,check=0,x=0;
  cleardevice();
  for(;;)
{ if(x<150)
  { x+=2;
  }
  setcolor(14);
  settextstyle(7,0,5);
  outtextxy(x,70,"Brick & Block !");
  if(x==150)
  { setfillstyle(1,0);
    bar(0,0,639,300);
    outtextxy(150,70,"Brick & Block !");
    break;
  }
}
  setcolor(12);
  settextstyle(8,0,2);
  outtextxy(220,170,"1.Start");
  delay(500);
  outtextxy(220,210,"2.How To Play");
  delay(500);
  outtextxy(220,250,"3.Magic Book");
  delay(500);
  outtextxy(220,290,"4.Story");
  delay(500);
  outtextxy(220,330,"5.Credit");
  delay(500);
  outtextxy(220,370,"6.Exit");
  delay(500);
  outtextxy(180,170,">>>");
for(;;)
{

  if(kbhit())
   {
     a=getch();
     if(a==80)//down
      {
	if(check<6)
	 {
	   check++;
	   setfillstyle(0,0);
	   if(check==2)
	    {
	      bar(180,170,218,200);//del 1 sel2
	      outtextxy(180,210,">>>");
	    }
	   if(check==3)//del 2  sel3
	    {
	      bar(180,210,218,240);
	      outtextxy(180,250,">>>");
	    }
	   if(check==4) //del 3 sel 4
	    {
	      bar(180,250,218,280);
	      outtextxy(180,290,">>>");
	    }
	   if(check==5) //del 4 sel 5
	    {
	      bar(180,290,218,320);
	      outtextxy(180,330,">>>");
	    }
	   if(check==6)//del 5 sel 6
	    {
	      bar(180,330,218,370);
	      outtextxy(180,370,">>>");
	    }
	   // check++;
	 }
     }
      if(a==72)     //up
       {
	 if(check>0)
	   {

	     check--;


	     setfillstyle(0,0);
	     if(check==5) //del 6 sel5
	       {
		 bar(180,370,218,410);
		 outtextxy(180,330,">>>");
	       }
	     if(check==4)//del 5 sel4
	       {
		 bar(180,330,218,360);
		 outtextxy(180,290,">>>");
	       }
	     if(check==3)//del 4 sel 3
	       {
		 bar(180,290,218,330);
		 outtextxy(180,250,">>>");
	       }
	     if(check==2)//del 3 sel2
	       {
		 bar(180,250,218,290);
		 outtextxy(180,210,">>>");
	       }
	     if(check==1)//del 2 sel1
	      {
		 bar(180,210,218,240);
		 outtextxy(180,170,">>>");
	      }

	   }
       }
       if(a==13)
	{
	 setcolor(15);
	  //cleardevice();
	  if(check==1 || check==0)
	  {
	     //if(f==0)
	     // {

	     //	f=1;
	     // }
	     if(frist==0)
	      {
		select();
		cleardevice();
		chapter1(-50,-110);
		chapter2(-50,0);
		frist=1;
	      }

	     play();
	  }
	  if(check==3)
	    magicbook();
	  if(check==2)
	    ins();
	  if(check==4)
	    {
	       cleardevice();
	       chapter1(-50,-110);
	       chapter2(-50,0);
	       chapter3();
	       chapter4();
	       chapter5(300,-120);
	       menu();
	    }
	  if(check==5)
	    credit();
	  if(check==6)
	    exit(0);
	 }

     }
   }
}

void lost()
{ int i=0;
//  score=0;
  char c;
  for(;;)
{ cleardevice();
  settextstyle(7,0,4);
  setcolor(4);
  if(i<100)
  { i+=1; }
    outtextxy(i,150,"Do You Want To Continue?");
  if(i==100)
  { cleardevice();
    outtextxy(100,150,"Do You Want To Continue?");
    break;
  }
}
  setcolor(14);
  outtextxy(150,200,"Yes/No [y/n]");
  setcolor(0);
  setfillstyle(1,14);
  fillellipse(33,140,20,10);

  setfillstyle(1,0);
  fillellipse(33,140,15,5);
  if(sex==0)
    malers(9,150);
  if(sex==1)
    femalels(9,150);
  for(;;)
  {
    c=getche();
    if(c=='y' || c=='Y')
     {
       score=0;
       hp=100,sp=100;
       metro=0,blizard=0,thunder=0,dark=0,cross=0;
       play();
     }
    if(c=='n' || c=='N')
     {
       frist=0;
       score=0;
       metro=0,blizard=0,thunder=0,dark=0,cross=0;
       sex=0;
       menu();
      }
  }
}
void play()
{
   int xhold=0,yhold=380;
   int i,temp;
   gettime(&t);
   char a,*text;
   randomize();
   hp=100,sp=100;
   cleardevice();
   //rectangle(550,90,600,100);
  // putpixel(555,95,2);
  // setcolor(3);
  // floodfill(556,95,15);
   setcolor(15);
   int sec_old;
   setfillstyle(0,0);
   if(sex==0)
    {
      bar(xhold,yhold,xhold+60,yhold+107);
      malers(xh,yh);
      sword(xh+45,yh+2);
    }
   if(sex==1)
    {
      bar(xhold,yhold,xhold+70,yhold+107);
      femalels(xh,yh-5);
      rod(xh+45,yh+2);
    }
   for(;;)
     {
       setcolor(15);
       gettime(&t);
       line(500,0,500,500);
       line(0,381,640,381);
       settextstyle(0,0,1);
       outtextxy(510,70,"-----Status-----");
       outtextxy(510,90,"HP:");
       outtextxy(510,120,"SP:");
       outtextxy(510,180,"-----Magic----- ");
       outtextxy(510,390,"Last Item:");
       outtextxy(510,190,"Metro[f]x");
       setfillstyle(0,0);
       sprintf(text,"%d",metro);
       bar(620,190,640,210);
       outtextxy(620,190,text);

       outtextxy(510,210,"Blizard[b]x");
       sprintf(text,"%d",blizard);
       bar(620,210,640,230);
       outtextxy(620,210,text);

       outtextxy(510,230,"Dark Hole[d]x");
       sprintf(text,"%d",dark);
       bar(620,230,640,250);
       outtextxy(620,230,text);

       outtextxy(510,250,"Cross[c]x");
       sprintf(text,"%d",cross);
       bar(620,250,640,270);
       outtextxy(620,250,text);

       outtextxy(510,270,"Thunder[t]x");
       sprintf(text,"%d",thunder);
       bar(620,270,640,290);
       outtextxy(620,270,text);

	 //box1
	 if(hund_old[0]!=t.ti_hund)
	   drawbox(0,0,1+stage);
	 if(hund_old[1]!=t.ti_hund+2)
	   drawbox(1,2,2+stage);
	 if(hund_old[2]!=t.ti_hund+4)
	   drawbox(2,4,3+stage);
	 if(hund_old[3]!=t.ti_hund+6)
	   drawbox(3,6,4+stage);

	 if(hund_old[0]!=t.ti_hund+10)
	  {
	    if(kbhit())
	     {
	       a=getche();
	     }

	    if(a==75) //left
	     {
	       setfillstyle(0,0);
	       if(sex==0)
		{
		  bar(xhold,yhold,xhold+60,yhold+107);
		  malers(xh,yh);
		  sword(xh+45,yh+2);
		}
	       if(sex==1)
		{
		  bar(xhold,yhold,xhold+70,yhold+107);
		  femalels(xh,yh-5);
		  rod(xh+45,yh+2);
		}
	       if(xh-10-haste>=0)
		{
		  xhold=xh;
		  xh=xh-10-haste;
		}
	       a=0;
	     }

	   if(a==77) //right
	    {
	       setfillstyle(0,0);
	       if(sex==0)
		{
		  bar(xhold,yh,xhold+60,yh+107);
		  malers(xh,yh);
		  sword(xh+45,yh+2);
		}
	       if(sex==1)
		{
		  bar(xhold,yhold,xhold+70,yhold+107);
		  femalels(xh,yh-5);
		  rod(xh+45,yh+2);
		}
	       if(xh+10+haste<=420)
		{
		  xhold=xh;
		  xh=xh+10+haste;
		}
	       a=0;
	    }
	   if(a==27)
	    menu();
	   if(a=='b')
	    {
	      blizzard();
	      a=0;
	    }
	   if(a=='f')
	    {
	      metros();
	      a=0;
	    }
	   if(a=='t')
	    {
	      thunders();
	      a=0;
	    }
	   if(a=='d')
	    {
	      darkhole();
	      a=0;
	    }
	   if(a=='c')
	    {
	      crosss();
	      a=0;
	    }
	    //setcolor(15);
	  }

       if(sec_old!=t.ti_sec)  //hp bar
	  {
	    //if(hprate!=hprateold)
	    hp=(hp-(stage+1))+hprate;
	    if(hp<0)
	     lost();
	    temp=100-hp;
	    setfillstyle(0,0);
	    bar(540,90,640,100);
	    bar(550,150,590,170);
	    sprintf(text,"%d",hp);
	    outtextxy(525,150,"HP:");
	    outtextxy(550,150,text);
	    setfillstyle(1,4);
	    bar(540,90,640-temp,100);
	    sec_old=t.ti_sec;
	  }

       if(sec_old!=t.ti_sec+10)  //sp bar
	  {
	    //if(sp<100)
	   //   sp++;
	    if(sp>100)
	       sp=100;
	    if(sp<0)
	      sp=0;
	    temp=100-sp;
	    if(temp<0)
	     temp=0;
	    setfillstyle(0,0);
	    bar(550,120,640,130);
	    bar(600,140,640,160);
	    sprintf(text,"%d",sp);
	    outtextxy(570,150,"SP:");
	    outtextxy(600,150,text);
	    setfillstyle(1,1);
	    bar(540,120,640-temp,130);
	    sec_old=t.ti_sec;
	  }
	outtextxy(510,300,"Last Cast:");
	setfillstyle(0,0);
	bar(510,310,640,400);
	if(lastuse==1)
	 blizzardef(560,320);
	if(lastuse==2)
	 fireef(560,320);
	if(lastuse==3)
	 {
	   setfillstyle(5,8);
	   fillellipse(560,320,10,10);
	 }
	if(lastuse==4)
	 crossef(560,320);
	if(lastuse==5)
	 thunderef(560,320);
	setcolor(15);
	setfillstyle(0,0);
       }
  }

void select()
{
   cleardevice();
   int i,select;
   char a;
   randomize();
   settextstyle(5,0,5);
   outtextxy(150,30,"> Character Select <");
   male(100,100);
   malers(40,350);
   settextstyle(7,0,4);
   outtextxy(120,400,"Takuya");
   sword(85,352);
   female(350,100);
   femalels(550,350);
   outtextxy(400,400,"Riruka");
   select=0;
   for(;;)
    {
      if(select==0)//male
       {
	setcolor(0);
	rectangle(390,400,530,450);
	setcolor(6);
	rectangle(110,400,250,450);
       }
      if(select==1)//female
       {
	setcolor(0);
	rectangle(110,400,250,450);
	setcolor(6);
	rectangle(390,400,530,450);
       }
     if(kbhit())
      {
	a=getche();
	if(a==77)//right
	 {
	   select=1;
	   sex=1;
	 }
	if(a==75)//left
	 {
	   select=0;
	   sex=0;
	 }
	if(a==13)
	   break;
      }
    }
   cleardevice();
}

void drawbox(int num,int spitime,int fall)
{
  setfillstyle(0,0);
  randomize();
  char *text;
  int temp,i,j,color,magic;
  if(stage!=stageold)
    bar(lastpos[num][0],lastpos[num][1]-fall,lastpos[num][0]+20,lastpos[num][1]-fall+20);
  lastpos[num][0]=boxpos[num][0];
  lastpos[num][1]=boxpos[num][1];
  checkpoint(num);
  if(boxpos[num][1]+fall>=370 || stageold!=stage)
  {
     boxpos[num][1]=0;
     checkbox[num]=1;
     stageold=stage;
  }
  if(checkbox[num]==1)
   {
     temp=random(400)+30;
     for(j=0;j<25;j++)
      {
	for(i=0;i<10;i++)
	 {
	   if(temp+j==boxpos[i][0])
	   {
	     temp=random(400)+30;
	     continue;
		   }
	   else
	    boxpos[num][0]=temp;
	 }
      }

     checkbox[num]=0;
     temp=random(15)+1;
     if(temp==5)
      {
	magic=random(4)+1;
	if(magic==1)//blizzard
	  itembox[num]=1;
	if(magic==2)//cross
	  itembox[num]=2;
	if(magic==3)//thunder
	  itembox[num]=3;
	if(magic==4)//dark
	  itembox[num]=4;
	if(magic==5)//fire
	  itembox[num]=5;
      }
     if(temp==2) //hp
	itembox[num]=6;
     if(temp==4 || temp==6)//sp
	itembox[num]=7;
     if(temp==8 && hprate<stage+1) //hp lower rate
	itembox[num]=8;
   }
  setfillstyle(0,0);
  bar(lastpos[num][0],lastpos[num][1]-fall,lastpos[num][0]+20,lastpos[num][1]-fall+20);
  hund_old[num]=t.ti_hund+spitime;
  rectangle(boxpos[num][0],boxpos[num][1],boxpos[num][0]+20,boxpos[num][1]+20);
  if(itembox[num]==1 || itembox[num]==2 || itembox[num]==3 || itembox[num]==4 || itembox[num]==5)
   {
     setfillstyle(1,14);
     bar(boxpos[num][0],boxpos[num][1],boxpos[num][0]+20,boxpos[num][1]+20);
   }
  if(itembox[num]==6)
   {
     setfillstyle(1,12);
     bar(boxpos[num][0],boxpos[num][1],boxpos[num][0]+20,boxpos[num][1]+20);
   }
  if(itembox[num]==7)
   {
    setfillstyle(1,9);
    bar(boxpos[num][0],boxpos[num][1],boxpos[num][0]+20,boxpos[num][1]+20);
   }
  if(itembox[num]==8&& hprate<stage+1)
   {
    setfillstyle(1,2);
    bar(boxpos[num][0],boxpos[num][1],boxpos[num][0]+20,boxpos[num][1]+20);
   }
  boxpos[num][1]+=fall;
  sprintf(text,"%d",score);
  setfillstyle(0,0);
  bar(570,25,585,40);
  outtextxy(520,30,"Score: ");
  outtextxy(570,30,text);

}
void magicbook()
{
  char a=77,i=1,temp=1,start=1;
  char *text;
  settextstyle(0,0,0);
  setcolor(0);
  //cleardevice();

//  cardblizzard(50,60);
 // setcolor(15);
//  settextstyle(7,0,5);
//  outtextxy(350,20,"Magic Card");
//  sprintf(text," %d Of 5",i);
//  outtextxy(380,70,text);
//  settextstyle(7,0,3);
//  outtextxy(400,250,"To Use Press");
//  settextstyle(0,0,1);
//  outtextxy(400,400,"Back To Menu : ESC");
  setcolor(15);
  for(;;)
   {
     if(kbhit() || start==1)
      {
	if(start!=1)
	  a=getch();
	if(a==77)//right
	 {
	   if(start==1)
	     i=1;
	   if(i<5 && start!=1)
	     i++;
	   start=0;
	   temp=0;
	 }
	if(a==75)//left
	 {
	   if(i>1)
	     i--;
	   temp=0;
	   start=0;
	 }
	if(a==27)
	 menu();
	if(i==1 && temp==0)
	 {
	   cleardevice();
	   cardblizzard(50,60);
	   //a=0;
	   setcolor(15);
	   settextstyle(7,0,3);
	   outtextxy(460,300,"b");
	   temp=1;
	   setcolor(15);
	 }
	if(i==2 && temp==0)
	 {
	   cleardevice();
	   cardfire(50,60);
	   setcolor(15);
	   settextstyle(7,0,3);
	   outtextxy(460,300,"f");
	   //a=0;
	   temp=1;
	   setcolor(15);
	 }
	if(i==3 && temp==0)
	 {
	   cleardevice();
	   cardcross(50,60);
	   setcolor(15);
	   settextstyle(7,0,3);
	   outtextxy(460,300,"c");
	   //a=0;
	   temp=1;
	   setcolor(15);
	 }
	if(i==4 && temp==0)
	 {
	   cleardevice();
	   carddark(50,60);
	   setcolor(15);
	   settextstyle(7,0,3);
	   outtextxy(460,300,"d");
	   //a=0;
	   temp=1;
	   setcolor(15);
	 }
	if(i==5 && temp==0)
	 {
	   cleardevice();
	   cardthunder(50,60);
	   setcolor(15);
	   settextstyle(7,0,3);
	   outtextxy(460,300,"t");
	   a=0;
	   temp=1;
	   setcolor(15);
	 }
	settextstyle(7,0,5);
	outtextxy(350,20,"Magic Card");
	sprintf(text," %d Of 5",i);
	outtextxy(380,70,text);
	settextstyle(7,0,3);
	outtextxy(400,250,"To Use Press");
	settextstyle(0,0,1);
	outtextxy(400,400,"Back To Menu : ESC");
      }
   }
}
void checkpoint(int num)
{
  int i,temp=0;
  randomize();
  for(i=0;i<10;i++)
   {
     if(boxpos[num][1]==370-i)
       temp=1;
   }
  if(temp==1)
   {
     if(boxpos[num][0]>=xh+30 && boxpos[num][0]<=xh+70)
       {
	 score++;
	 setfillstyle(1,1);
	 bar(500,470,640,480);

	 setfillstyle(0,0);
	 bar(550,400,590,460);
	 setcolor(15);
	 if(itembox[num]==1)
	   {
	     blizard++;
	     outtextxy(510,470,"Blizard Magic");
	     blizzardef(560,430);
	   }
	 if(itembox[num]==2)
	   {
	     cross++;
	     outtextxy(510,470,"Holy Cross Magic");
	     crossef(560,430);
	   }
	 if(itembox[num]==3)
	   {
	     thunder++;
	     outtextxy(510,470,"Thunder Magic");
	     thunderef(560,430);
	   }
	 if(itembox[num]==4)
	   {
	     dark++;
	     outtextxy(510,470,"Dark Hole Magic");
	     //darkef(560,430);
	     circle(560,430,10);
	   }
	 if(itembox[num]==5)
	   {
	     metro++;
	     outtextxy(510,470,"Fire Magic");
	     fireef(560,430);
	   }
	 if(itembox[num]==6)
	   {
	     if(hp+5<=100)
		hp+=5;
	     outtextxy(510,470,"HP Recovery");
	     hpef(560,430);
	   }
	 if(itembox[num]==7)
	   {
	     if(sp+5<=100)
	      sp+=5;
	     outtextxy(510,470,"SP Recovery");
	     spef(560,430);
	   }
	 if(itembox[num]==8)
	   { temp=random(2);
	     if(temp==0)
	      {
		if(hprate<stage)
		  hprate++;
		outtextxy(510,470,"Mystic Item");
	      }
	     if(temp==1)
	      {
		if(haste<=3)
		  haste++;
		outtextxy(510,470,"Speed Up !");
	      }

	   }
       }

   }
  if(score>=30 && stage==0)
   {
     stage++;
     score=0;
     hptotal+=hp;
     settextstyle(7,0,7);
     hp=100;sp=100;lastuse=0;
     metro=0,blizard=0,thunder=0,dark=0,cross=0;
     hprate=0;
     stageselect(3);
   }
  if(score>=60 && stage==1)
   {
     stage++;
     score=0;
     hptotal+=hp;
     sp=100;hp=100;lastuse=0;
     metro=0,blizard=0,thunder=0,dark=0,cross=0;
     hprate=0;haste=0;
     settextstyle(7,0,7);
     stageselect(0);
   }
  if(score>=80 && stage==2)
   {
     stage++;
     score=0;
     hptotal+=hp;
     sp=100;hp=100;lastuse=0;
     metro=0,blizard=0,thunder=0,dark=0,cross=0;
     hprate=0;haste=0;
     settextstyle(7,0,7);
     stageselect(4);

   }
  if(score>=150 && stage==3)
   {
     stageselect(5);
     menu();
     score=0;
     metro=0,blizard=0,thunder=0,dark=0,cross=0;
     hprate=0;haste=0;
     hptotal+=hp;
     sp=100;hp=100;lastuse=0;
   }

}
void darkhole()
{
  int i;
  if(dark>0  && sp-10>=0 && hp-20>0)
   {
     lastuse=3;
     score+=5;
//     for(i=0;i<5;i++)
     //darkef(boxpos[0][0],boxpos[0][1])
     setcolor(0);
     setfillstyle(5,8);
     for(i=0;i<4;i++)
       fillellipse(boxpos[i][0]+10,boxpos[i][1]+8,10,10);
     delay(500);
     setfillstyle(0,0);
     bar(boxpos[0][0],boxpos[0][1]-1-stage,boxpos[0][0]+35,boxpos[0][1]-1+35-stage);
     bar(boxpos[1][0],boxpos[1][1]-2-stage,boxpos[1][0]+35,boxpos[1][1]-2+35-stage);
     bar(boxpos[2][0],boxpos[2][1]-3-stage,boxpos[2][0]+35,boxpos[2][1]-3+35-stage);
     bar(boxpos[3][0],boxpos[3][1]-4-stage,boxpos[3][0]+35,boxpos[3][1]-4+35-stage);
     for(i=0;i<5;i++)
       {
	 boxpos[i][1]=0;
	 checkbox[i]=1;
       }
     dark--;
     sp-=10;
     hp-=20;
     setcolor(15);
   }
}
void crosss()
{
  int i,temp;
  if(cross>0 && sp>=100)
   {
     lastuse=4;
     score+=5;
     if(hp<100)
      {
	temp=100-hp;
	if(temp<=50)
	  hp+=temp;
	else
	  hp+=50;
      }
     for(i=0;i<4;i++)
      crossef(boxpos[i][0],boxpos[i][1]);
     delay(500);
     setfillstyle(0,0);
     bar(boxpos[0][0],boxpos[0][1]-1-stage,boxpos[0][0]+35,boxpos[0][1]-1-stage+35);
     bar(boxpos[1][0],boxpos[1][1]-2-stage,boxpos[1][0]+35,boxpos[1][1]-2-stage+35);
     bar(boxpos[2][0],boxpos[2][1]-3-stage,boxpos[2][0]+35,boxpos[2][1]-3-stage+35);
     bar(boxpos[3][0],boxpos[3][1]-4-stage,boxpos[3][0]+35,boxpos[3][1]-4-stage+35);
     for(i=0;i<5;i++)
       {
	 boxpos[i][1]=0;
	 checkbox[i]=1;
       }

     cross--;
     sp-=100;
     setcolor(15);
   }
}
void blizzard()
{
  int i;
  if(blizard>0 && sp-45>=0)
   {
     score+=2;
     lastuse=1;
     blizzardef(boxpos[0][0],boxpos[0][1]+5);
     blizzardef(boxpos[1][0],boxpos[1][1]+5);
     delay(500);
     setfillstyle(0,0);
     bar(boxpos[0][0],boxpos[0][1]-2-stage,boxpos[0][0]+35,boxpos[0][1]-2+35-stage);
     bar(boxpos[1][0],boxpos[1][1]-3-stage,boxpos[1][0]+35,boxpos[1][1]-3+35-stage);
     for(i=0;i<2;i++)
     {
       boxpos[i][1]=0;
       checkbox[i]=1;
     }
     blizard--;
     sp-=45;
     if(hp+10<100)
       hp+=10;
     setcolor(15);
   }

}

void thunders()
{
  int i;
  if(thunder>0 && sp-20>=0)
   {
     score+=2;
     lastuse=5;
     thunderef(boxpos[2][0],boxpos[2][1]+5);
     thunderef(boxpos[3][0],boxpos[3][1]+5);
     delay(500);
     setfillstyle(0,0);
     bar(boxpos[2][0],boxpos[2][1]-3-stage,boxpos[2][0]+35,boxpos[2][1]-3-stage+35);
     bar(boxpos[3][0],boxpos[3][1]-4-stage,boxpos[3][0]+35,boxpos[3][1]-4-stage+35);
     boxpos[2][1]=0;
     checkbox[2]=1;
     boxpos[3][1]=0;
     checkbox[3]=1;
     thunder--;
     sp-=20;
     setcolor(15);
   }

}

void metros()
{
  int i;
  if(metro>0 && sp>=50)
   {
     score=score+5;
     lastuse=2;
     setcolor(15);
     for(i=0;i<4;i++)
      fireef(boxpos[i][0],boxpos[i][1]);
     delay(500);
     setfillstyle(0,0);
     bar(boxpos[0][0],boxpos[0][1]-1-stage,boxpos[0][0]+30,boxpos[0][1]-1-stage+30);
     bar(boxpos[1][0],boxpos[1][1]-2-stage,boxpos[1][0]+30,boxpos[1][1]-2-stage+30);
     bar(boxpos[2][0],boxpos[2][1]-3-stage,boxpos[2][0]+30,boxpos[2][1]-3-stage+30);
     bar(boxpos[3][0],boxpos[3][1]-4-stage,boxpos[3][0]+30,boxpos[3][1]-4-stage+30);
     for(i=0;i<5;i++)
       {
	 boxpos[i][1]=0;
	 checkbox[i]=1;
       }

     metro--;
     sp-=50;
     setcolor(15);
   }

}
void ins()
{
  cleardevice();
  char a;
  settextstyle(1,0,4);
  outtextxy(200,20,">|How To Play ?|<");
  settextstyle(1,0,1);
  outtextxy(20,70,"Use Arrow Key To Control Charecter [Right-Left]");
  outtextxy(20,90,"To Get Boxes");
  settextstyle(1,0,2);
  outtextxy(20,120,"> Box Style <");
  settextstyle(1,0,1);
  outtextxy(20,140,"1.Normal Box");
  rectangle(250,140,280,170);
  outtextxy(20,160,"2.Magic Box");
  setfillstyle(1,14);
  bar(290,140,320,170);
  outtextxy(20,180,"3.HP Recovery Box");
  setfillstyle(1,4);
  bar(330,140,360,170);
  outtextxy(20,200,"4.SP Recovery Box");
  setfillstyle(1,1);
  bar(370,140,400,170);
  outtextxy(260,170,"1   2   3   4");
  settextstyle(1,0,2);
  outtextxy(20,220,"> Point <");
  settextstyle(1,0,1);
  outtextxy(20,240,"Slower Boxes have more points than Faster Boxes");
  outtextxy(20,260,"If you use magic to destory box. You can't get item in it");
  settextstyle(1,0,2);
  outtextxy(20,280,"> Magic <");
  settextstyle(1,0,1);
  outtextxy(20,300,"To use magic you must see how to use it in magic book");
  settextstyle(1,0,4);
  outtextxy(220,350,"Good Luck !");
  settextstyle(1,0,1);
  outtextxy(20,450,"ESC To Exit");
  for(;;)
   {
     if(kbhit())
      {
	a=getch();
	if(a==27)
	 {
	   cleardevice();
	   //settextstyle(0,0,0);
	   menu();
	 }
      }
   }
}

void credit()
{
  cleardevice();
  char a;
  settextstyle(1,0,4);
  outtextxy(470,20,"> Credit <");
  settextstyle(14,0,10);
  outtextxy(20,50,"Project : Brick & Block");
  outtextxy(20,80,": Programmer :");
  outtextxy(20,100,"Mr. Thananop Kobchaisawat M:4/7 ID:36644 NO:2");
  outtextxy(20,120,"Address : 203 Supra Rd. Prombprab Bangkok 10100");
  outtextxy(20,140,"Tel : 02-223-2692");
  outtextxy(20,170,"Mr. Karoon   Prasansuklap M:4/7 ID:36740 NO:4");
  outtextxy(20,190,"Address : 472 Mungkorn Rd. Prombprab Bangkok 10100");
  outtextxy(20,210,"Tel : 02-224-2639");
  outtextxy(20,230,": Photography :");
  outtextxy(20,240,"Mr. Vitoon   Treevitchukorn M:4/4 ID:36692 NO:7");
  outtextxy(20,270,": Computer Teacher :");
  outtextxy(20,290,"Mr. Surachai Piyaprapaphan");
  outtextxy(20,310,"Subject : Programming 2 (40210) Term 2 / 2547");
  outtextxy(20,330,"Computer Center @ DEBSIRIN SCHOOL");
  outtextxy(20,340,"1466 Khungkasem Rd.,Pomprab Bangkok 10100");
  outtextxy(20,350,"Tel. 02222-1882 # Computer Centre");
  outtextxy(20,370,"COPYRIGHT JAN 2005 DEBSIRIN SCHOOL");
  outtextxy(20,380,"USED FOR EDUCATION ONLY");
  outtextxy(20,430,"ESC to Exit");
  malers(400,380);
  femalels(480,370);
  for(;;)
   {
     if(kbhit())
      {
	a=getch();
	if(a==27)
	 {
	   cleardevice();
	   //settextstyle(0,0,0);
	   menu();
	 }
      }
   }

}
void stageselect(int x)
{
   cleardevice();
   char a;
   int i,h=0,j;
   settextstyle(6,0,7);
   sprintf(text,"<<::STAGE %d::>>",stage+1);
   settextstyle(7,0,7);
   outtextxy(80,170,text);
   settextstyle(7,0,4);
   outtextxy(240,250,"Loading ...");
   delay(300);
   for(i=0;i<170;i+=10)
    {
      setfillstyle(0,0);
      bar(200,310,400,330);
      setfillstyle(1,2);
      bar(240,310,400-i,330);
      delay(300);
    }
   setfillstyle(0,0);
   bar(200,310,400,330);
   for(;;)
    {
      h+=1;
      if(h==2)
       {
	 setfillstyle(0,0);
	 bar(150,380,550,430);
	 delay(1000);
	 h=0;
       }
      outtextxy(150,380,"Press Spacebar To Play");
      if(kbhit())
       {
	 a=getche();
	 if(a==32)
	  break;
       }
      delay(700);
    }
  cleardevice();
  for(i=0;i<6;i++)
   {
     boxpos[i][1]=0;
	//lastpos[i][j]=0;
   }
  settextstyle(0,0,1);
  if(x==3)
   chapter3();
  if(x==4)
   chapter4();
  if(x==5)
   chapter5(300,-120);
  if(x!=5)
    play();
}

// picture part don't edit !
void rod(int x,int y)
{   int a;
    a=7;
    setcolor(a);
    int p[32];
    p[0]=11+x;	p[1]=0+y;
    p[2]=14+x;	p[3]=6+y;
    p[4]=21+x;	p[5]=6+y;
    p[6]=15+x;	p[7]=11+y;
    p[8]=18+x;	p[9]=17+y;
    p[10]=12+x;	p[11]=13+y;
    p[12]=12+x;	p[13]=29+y;
    p[14]=10+x;	p[15]=29+y;
    p[16]=10+x;	p[17]=13+y;
    p[18]=12+x;	p[19]=13+y;
    p[20]=10+x;	p[21]=13+y;
    p[22]=4+x;	p[23]=17+y;
    p[24]=7+x;	p[25]=11+y;
    p[26]=1+x;	p[27]=6+y;
    p[28]=8+x;	p[29]=6+y;
    p[30]=11+x;	p[31]=0+y;
    drawpoly(16,p);

setfillstyle(1,14);
putpixel(10+x,12+y,13);
floodfill(10+x,12+y,a);

setfillstyle(1,15);
putpixel(11+x,21+y,15);
floodfill(11+x,21+y,a);
}
void hpef(int x,int y)
{   int p[26];
    p[0]=7+x;	p[1]=0+y;
    p[2]=7+x;	p[3]=5+y;
    p[4]=2+x;	p[5]=5+y;
    p[6]=2+x;	p[7]=10+y;
    p[8]=7+x;	p[9]=10+y;
    p[10]=7+x;	p[11]=15+y;
    p[12]=13+x;	p[13]=15+y;
    p[14]=13+x;	p[15]=10+y;
    p[16]=18+x;	p[17]=10+y;
    p[18]=18+x;	p[19]=5+y;
    p[20]=13+x;	p[21]=5+y;
    p[22]=13+x;	p[23]=0+y;
    p[24]=7+x;	p[25]=0+y;
    drawpoly(13,p);

setfillstyle(1,4);
floodfill(9+x,7+y,15);

}

void spef(int x,int y)
{   setfillstyle(1,1);
    fillellipse(x,y,8,8);
}
void sword(int x,int y)
{   int a;
    a=7;
    setcolor(a);
    int p[38];
    p[0]=5+x;	p[1]=27+y;
    p[2]=8+x;	p[3]=27+y;
    p[4]=8+x;	p[5]=34+y;
    p[6]=11+x;	p[7]=34+y;
    p[8]=11+x;	p[9]=27+y;
    p[10]=8+x;	p[11]=27+y;
    p[12]=15+x;	p[13]=27+y;
    p[14]=15+x;	p[15]=24+y;
    p[16]=11+x;	p[17]=24+y;
    p[18]=5+x;	p[19]=24+y;
    p[20]=8+x;	p[21]=24+y;
    p[22]=5+x;	p[23]=14+y;
    p[24]=10+x;	p[25]=5+y;
    p[26]=15+x;	p[27]=14+y;
    p[28]=12+x;	p[29]=24+y;
    p[30]=10+x;	p[31]=15+y;
    p[32]=8+x;	p[33]=24+y;
    p[34]=5+x;	p[35]=24+y;
    p[36]=5+x;	p[37]=27+y;
    drawpoly(19,p);

setfillstyle(1,15);
putpixel(10+x,12+y,15);
floodfill(10+x,12+y,a);

setfillstyle(1,14);
putpixel(10+x,21+y,15);
floodfill(10+x,21+y,a);

setfillstyle(1,6);
putpixel(9+x,26+y,15);
floodfill(9+x,26+y,a);

setfillstyle(1,5);
putpixel(9+x,30+y,15);
floodfill(9+x,30+y,a);

}
void thunderef(int x,int y)
{   setcolor(4);
    int p[14];
    p[0]=4+x;	p[1]=22+y;
    p[2]=8+x;	p[3]=12+y;
    p[4]=2+x;	p[5]=12+y;
    p[6]=9+x;	p[7]=1+y;
    p[8]=8+x;	p[9]=9+y;
    p[10]=15+x;	p[11]=7+y;
    p[12]=4+x;	p[13]=22+y;
    drawpoly(7,p);

    setfillstyle(1,14);
    floodfill(6+x,10+y,4);

}

void crossef(int x,int y)
{   setcolor(1);
    int p[26];
    p[0]=9+x;	p[1]=0+y;
    p[2]=16+x;	p[3]=0+y;
    p[4]=16+x;	p[5]=6+y;
    p[6]=23+x;	p[7]=6+y;
    p[8]=23+x;	p[9]=13+y;
    p[10]=16+x;	p[11]=13+y;
    p[12]=16+x;	p[13]=27+y;
    p[14]=9+x;	p[15]=27+y;
    p[16]=9+x;	p[17]=13+y;
    p[18]=2+x;	p[19]=13+y;
    p[20]=2+x;	p[21]=6+y;
    p[22]=9+x;	p[23]=6+y;
    p[24]=9+x;	p[25]=0+y;
    drawpoly(13,p);

    int i[26];
    i[0]=4+x;	i[1]=8+y;
    i[2]=11+x;	i[3]=8+y;
    i[4]=11+x;	i[5]=2+y;
    i[6]=14+x;	i[7]=2+y;
    i[8]=14+x;	i[9]=8+y;
    i[10]=21+x;	i[11]=8+y;
    i[12]=21+x;	i[13]=11+y;
    i[14]=14+x;	i[15]=11+y;
    i[16]=14+x;	i[17]=25+y;
    i[18]=11+x;	i[19]=25+y;
    i[20]=11+x;	i[21]=11+y;
    i[22]=4+x;	i[23]=11+y;
    i[24]=4+x;	i[25]=8+y;
    drawpoly(13,i);
    setfillstyle(1,6);
    floodfill(12+x,9+y,1);

    setfillstyle(1,15);
    floodfill(3+x,8+y,1);

}

void fireef(int x,int y)
{
    int p[30];

    p[0]=8+x;	p[1]=18+y;
    p[2]=20+x;	p[3]=18+y;
    p[4]=24+x;	p[5]=7+y;
    p[6]=17+x;	p[7]=11+y;
    p[8]=13+x;	p[9]=0+y;
    p[10]=11+x;	p[11]=11+y;
    p[12]=1+x;	p[13]=8+y;
    p[14]=8+x;	p[15]=18+y;
    p[16]=11+x;	p[17]=18+y;
    p[18]=8+x;	p[19]=14+y;
    p[20]=12+x;	p[21]=15+y;
    p[22]=14+x;	p[23]=11+y;
    p[24]=16+x;	p[25]=15+y;
    p[26]=19+x;	p[27]=13+y;
    p[28]=17+x;	p[29]=18+y;
    setcolor(15);
    drawpoly(15,p);

    setfillstyle(1,4);
    floodfill(13+x,7+y,15);

    setfillstyle(1,14);
    floodfill(14+x,17+y,15);

}
void blizzardef(int x,int y)
{   setcolor(1);
    int p[52];
    p[0]=12+x;	p[1]=12+y;
    p[2]=7+x;	p[3]=0+y;
    p[4]=1+x;	p[5]=0+y;
    p[6]=1+x;	p[7]=6+y;
    p[8]=12+x;	p[9]=12+y;
    p[10]=1+x;	p[11]=18+y;
    p[12]=1+x;	p[13]=23+y;
    p[14]=7+x;	p[15]=23+y;
    p[16]=12+x;	p[17]=12+y;
    p[18]=18+x;	p[19]=23+y;
    p[20]=23+x;	p[21]=23+y;
    p[22]=23+x;	p[23]=17+y;
    p[24]=12+x;	p[25]=12+y;
    p[26]=23+x;	p[27]=6+y;
    p[28]=23+x;	p[29]=0+y;
    p[30]=18+x;	p[31]=0+y;
    p[32]=12+x;	p[33]=12+y;
    p[34]=5+x;	p[35]=19+y;
    p[36]=12+x;	p[37]=12+y;
    p[38]=6+x;	p[39]=5+y;
    p[40]=12+x;	p[41]=12+y;
    p[42]=19+x;	p[43]=5+y;
    p[44]=12+x;	p[45]=12+y;
    p[46]=19+x;	p[47]=18+y;
    p[48]=12+x;	p[49]=12+y;
    p[50]=1+x;	p[51]=18+y;
   drawpoly(26,p);
   setfillstyle(1,15);
   floodfill(5+x,3+y,1);
   floodfill(20+x,3+y,1);
   floodfill(21+x,20+y,1);
   floodfill(3+x,20+y,1);
}
void darkef(int x,int y)
{   setcolor(0);
    setfillstyle(4,5);
    fillellipse(100+x,100+y,10,10);

}
void start()
{   randomize();
    int h=15,a=630,r=639,k=479,s=0;
    for(;;)
  { if(kbhit())
      { cleardevice();
	setbkcolor(0);
	break; }
    s+=1;
    setbkcolor(8);
    setcolor(10);
    settextstyle(7,0,5);
    outtextxy(100,100,"Karoon");
    settextstyle(7,0,5);
    setcolor(11);
    outtextxy(330,300,"Thananop");
    settextstyle(3,0,5);
    setcolor(14);
    outtextxy(220,200,"M.4/7");
    if(s==2)
     { cleardevice();
       setbkcolor(0);
       break;
     }
    delay(2500);
  }

    for(;;)
     { if(kbhit())
      { cleardevice();
	break; }
     r-=1;
     k-=1;
     setfillstyle(1,12);
     bar(r,10,639,20);
     bar(10,k,20,479);
     setfillstyle(1,15);
     bar(0,14,639,15);
     bar(14,0,15,479);
     if(r<=0)
       { break; }
delay(3);
    }
    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      h+=5;
      female(50,h);
      if(h>=110)
	{  setfillstyle(1,0);
	   bar(21,21,300,470);
	   break;
	}
     delay(80);
    }
    female(50,110);

    namef();

    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      a-=25;
      femalels(a,200);
      setfillstyle(1,0);
      bar(300,100,639,470);
      if(a<=430)
	{ break; }
      delay(200);
    }
    femalels(430,200);
    delay(1000);
    cleardevice();

    s=0;
    for(;;)
  { if(kbhit())
      { cleardevice();
	break; }
    s+=1;
    setbkcolor(4);
    setcolor(14);
    settextstyle(7,0,5);
    outtextxy(220,200,"PRESENT");
    if(s==2)
     { cleardevice();
       setbkcolor(0);
       break;
     }
    delay(2500);
  }
   s=0;k=479;
    for(;;)
     { if(kbhit())
      { cleardevice();
	break; }
     s+=1;
     k-=1;
     setfillstyle(1,2);
     bar(0,10,s,20);
     bar(617,k,630,479);
     setfillstyle(1,15);
     bar(0,14,639,15);
     bar(623,0,625,479);
     if(s>=639)
       { break; }
delay(1);
    }
    k=479;
    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      k-=10;
      male(400,k);
      if(k<=110)
	{  setfillstyle(1,0);
	   bar(300,21,615,479);
	   break;
	}
     delay(30);
    }

    male(400,110);

    namem();

    s=0;
    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      malers(s,190);
      s+=10;
      setfillstyle(1,0);
      bar(0,190,300,300);
      if(s>=140)
	{ break; }
     delay(100);
    }
    malers(140,190);
    delay(1000);
    h=0;k=0;
    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      h+=4; k+=3;
      setfillstyle(4,12);
      bar(0,0,h,k);
      if(h>=639)
      { break; }
      delay(10);
    }
    h=639; k=479;
    for(;;)
    { if(kbhit())
      { cleardevice();
	break; }
      h-=4; k-=3;
      setfillstyle(5,2);
      bar(639,479,h,k);
      if(h<=0)
      {	break; }
      delay(10);
    }
    cleardevice();
    setfillstyle(1,1);
    setcolor(1);
    fillellipse(320,240,50,50);
    delay(3000);
    s=0;
    for(;;)
  { if(kbhit())
      { cleardevice();
	break; }
    s+=10;
    setcolor(7);
    setfillstyle(10,7);
    fillellipse(0,0,s,s);
    setfillstyle(10,7);
    fillellipse(639,0,s,s);
    setfillstyle(10,7);
    fillellipse(0,479,s,s);
    setfillstyle(10,7);
    fillellipse(639,479,s,s);
    if(s>=350)
    { break; }
    delay(50);
  }
    delay(500);
    h=0; k=0;
    for(;;)
    {  if(kbhit())
      { cleardevice();
	break; }
       h+=10;
       setcolor(0);
       setfillstyle(1,0);
       pieslice(320,240,0,h,k);
       if(h==360)
       { h=0;
	 k+=50; }
       if(k>=450)
       { break; }
    }

    r=200,a=200,k=200;
    for(;;)
  {
    setcolor(12);
    settextstyle(7,0,7);
    outtextxy(k,50,"B");
    outtextxy(r,100,"r");
    outtextxy(a,150,"i");
    outtextxy(r,200,"c");
    outtextxy(k,250,"k");
    if(a>=60)
    { a-=1; }
    if(r>=40)
    { r-=1; }
    if(k>=10)
    { k-=1; }
    if(k<10)
    { setfillstyle(1,0);
      bar(0,0,320,479);
      break;
    }
    delay(10);
  }
    setcolor(12);
    settextstyle(7,0,7);
    outtextxy(10,50,"B");
    outtextxy(40,100,"r");
    outtextxy(60,150,"i");
    outtextxy(40,200,"c");
    outtextxy(10,250,"k");

    r=350,a=350,k=350;
    for(;;)
  {
    settextstyle(7,0,7);
    setcolor(11);
    outtextxy(k,50,"B");
    outtextxy(r,100,"l");
    outtextxy(a,150,"o");
    outtextxy(r,200,"c");
    outtextxy(k,250,"k");
    if(a<=500)
    { a+=1; }
    if(r<=530)
    { r+=1; }
    if(k<=550)
    { k+=1; }
    if(k>550)
    { setfillstyle(1,0);
      bar(300,0,639,479);
      break;
    }
    delay(5);
  }
    settextstyle(7,0,7);
    outtextxy(550,50,"B");
    outtextxy(530,100,"l");
    outtextxy(500,150,"o");
    outtextxy(530,200,"c");
    outtextxy(550,250,"k");

    settextstyle(6,0,20);
    setcolor(14);
    outtextxy(250,0,"&");

    h=0;
    for(;;)
  {
    h+=1;
    if(h==2)
     { setfillstyle(1,0);
       bar(0,360,639,639);
       h=0;
       delay(1000);
     }
      setcolor(10);
      settextstyle(8,0,5);
      outtextxy(50,370,"PRESS SPACE BUTTON");
      delay(500);
    if(kbhit())
      { a=getch();
	if(a==32)
	{ break; }
      }
  }
}
void namef()
{   int x;
    x=0;
    settextstyle(4,0,5);
    setcolor(4);
    for(;;)
  { if(kbhit())
      { cleardevice();
	break; }
    if(x==0)
     {  outtextxy(380,50,"R"); }
    if(x==1)
     {  outtextxy(412,50,"i"); }
    if(x==2)
     {  outtextxy(425,50,"r"); }
    if(x==3)
     {  outtextxy(445,50,"u"); }
    if(x==4)
     {  outtextxy(470,50,"k");  }
    if(x==5)
     {  outtextxy(493,50,"a");  }
    if(x==6)
     { break; }
    x+=1;
    delay(500);
  }
}
void namem()
{   int x;
    x=0;
    settextstyle(7,0,5);
    setcolor(2);
    for(;;)
  { if(kbhit())
      { cleardevice();
	break; }
    if(x==0)
     {  outtextxy(245,50,"a"); }
    if(x==1)
     {   outtextxy(215,50,"y"); }
    if(x==2)
     {   outtextxy(180,50,"u"); }
    if(x==3)
     {   outtextxy(153,50,"k"); }
    if(x==4)
     {   outtextxy(125,50,"a");  }
    if(x==5)
     {   outtextxy(100,50,"T");  }
    if(x==6)
     { break; }
    x+=1;
    delay(500);
  }
}

void female(int x,int y)
{   int a;
    a=7;
    setcolor(a);
    int p[258];
    p[0]=29+x;	p[1]=44+y;
    p[2]=69+x;	p[3]=33+y;
    p[4]=84+x;	p[5]=27+y;
    p[6]=100+x;	p[7]=27+y;
    p[8]=116+x;	p[9]=30+y;
    p[10]=136+x;  	p[11]=39+y;
    p[12]=105+x;	p[13]=39+y;
    p[14]=136+x;	p[15]=39+y;
    p[16]=140+x;	p[17]=42+y;
    p[18]=140+x;	p[19]=47+y;
    p[20]=133+x;	p[21]=59+y;
    p[22]=140+x;	p[23]=47+y;
    p[24]=140+x;	p[25]=42+y;
    p[26]=136+x;	p[27]=39+y;
    p[28]=144+x;	p[29]=31+y;
    p[30]=149+x;	p[31]=31+y;
    p[32]=157+x;	p[33]=35+y;
    p[34]=167+x;	p[35]=45+y;
    p[36]=173+x;	p[37]=56+y;
    p[38]=175+x;	p[39]=73+y;
    p[40]=173+x;	p[41]=95+y;
    p[42]=170+x;	p[43]=130+y;
    p[44]=170+x;	p[45]=159+y;
    p[46]=173+x;	p[47]=167+y;
    p[48]=163+x;	p[49]=167+y;
    p[50]=163+x;	p[51]=135+y;
    p[52]=164+x;	p[53]=134+y;
    p[54]=164+x;	p[55]=73+y;
    p[56]=158+x;	p[57]=57+y;
    p[58]=140+x;	p[59]=42+y;
    p[60]=152+x;	p[61]=42+y;
    p[62]=156+x;	p[63]=45+y;
    p[64]=152+x;	p[65]=42+y;
    p[66]=145+x;	p[67]=42+y;
    p[68]=155+x;	p[69]=48+y;
    p[70]=162+x;	p[71]=56+y;
    p[72]=166+x;	p[73]=65+y;
    p[74]=162+x;	p[75]=56+y;
    p[76]=155+x;	p[77]=48+y;
    p[78]=145+x;	p[79]=42+y;
    p[80]=140+x;	p[81]=42+y;
    p[82]=145+x;	p[83]=53+y;
    p[84]=145+x;	p[85]=67+y;
    p[86]=140+x;	p[87]=79+y;
    p[88]=145+x;	p[89]=67+y;
    p[90]=145+x;	p[91]=53+y;
    p[92]=147+x;	p[93]=53+y;
    p[94]=150+x;	p[95]=73+y;
    p[96]=147+x;	p[97]=53+y;
    p[98]=140+x;	p[99]=42+y;
    p[100]=151+x;	p[101]=55+y;
    p[102]=156+x;	p[103]=73+y;
    p[104]=156+x;	p[105]=93+y;
    p[106]=154+x;	p[107]=106+y;
    p[108]=150+x;	p[109]=104+y;
    p[110]=150+x;	p[111]=82+y;
    p[112]=147+x;	p[113]=74+y;
    p[114]=150+x;	p[115]=82+y;
    p[116]=150+x;	p[117]=104+y;
    p[118]=154+x;	p[119]=106+y;
    p[120]=156+x;	p[121]=93+y;
    p[122]=156+x;	p[123]=73+y;
    p[124]=151+x;	p[125]=55+y;
    p[126]=140+x;	p[127]=42+y;
    p[128]=158+x;	p[129]=57+y;
    p[130]=164+x;	p[131]=73+y;
    p[132]=164+x;	p[133]=134+y;
    p[134]=163+x;	p[135]=135+y;
    p[136]=163+x;	p[137]=167+y;
    p[138]=159+x;	p[139]=167+y;
    p[140]=159+x;	p[141]=78+y;
    p[142]=159+x;	p[143]=167+y;
    p[144]=155+x;	p[145]=167+y;
    p[146]=151+x;	p[147]=157+y;
    p[148]=151+x;	p[149]=135+y;
    p[150]=151+x;	p[151]=157+y;
    p[152]=147+x;	p[153]=163+y;
    p[154]=151+x;	p[155]=184+y;
    p[156]=142+x;	p[157]=188+y;
    p[158]=142+x;	p[159]=158+y;
    p[160]=140+x;	p[161]=144+y;
    p[162]=140+x;	p[163]=140+y;
    p[164]=139+x;	p[165]=187+y;
    p[166]=141+x;	p[167]=96+y;
    p[168]=141+x;	p[169]=119+y;
    p[170]=142+x;	p[171]=119+y;
    p[172]=142+x;	p[173]=130+y;
    p[174]=143+x;	p[175]=130+y;
    p[176]=143+x;	p[177]=140+y;
    p[178]=147+x;	p[179]=163+y;
    p[180]=151+x;	p[181]=184+y;
    p[182]=142+x;	p[183]=188+y;
    p[184]=135+x;	p[185]=191+y;
    p[186]=133+x;	p[187]=174+y;
    p[188]=128+x;	p[189]=192+y;
    p[190]=128+x;	p[191]=177+y;
    p[192]=129+x;	p[193]=177+y;
    p[194]=129+x;	p[195]=162+y;
    p[196]=129+x;	p[197]=142+y;
    p[198]=129+x;	p[199]=135+y;
    p[200]=130+x;	p[201]=134+y;
    p[202]=130+x;	p[203]=94+y;
    p[204]=135+x;	p[205]=71+y;
    p[206]=130+x;	p[207]=94+y;
    p[208]=125+x;	p[209]=104+y;
    p[210]=103+x;	p[211]=59+y;
    p[212]=116+x;	p[213]=102+y;
    p[214]=82+x;	p[215]=75+y;
    p[216]=94+x;	p[217]=113+y;
    p[218]=66+x;	p[219]=65+y;
    p[220]=67+x;	p[221]=107+y;
    p[222]=53+x;	p[223]=77+y;
    p[224]=62+x;	p[225]=115+y;
    p[226]=67+x;	p[227]=151+y;
    p[228]=73+x;	p[229]=198+y;
    p[230]=64+x;	p[231]=201+y;
    p[232]=63+x;	p[233]=180+y;
    p[234]=59+x;	p[235]=198+y;
    p[236]=59+x;	p[237]=177+y;
    p[238]=45+x;	p[239]=119+y;
    p[240]=41+x;	p[241]=142+y;
    p[242]=37+x;	p[243]=120+y;
    p[244]=36+x;	p[245]=86+y;
    p[246]=11+x;	p[247]=109+y;
    p[248]=46+x;	p[249]=54+y;
    p[250]=53+x;	p[251]=46+y;
    p[252]=46+x;	p[253]=54+y;
    p[254]=29+x;	p[255]=44+y;
    p[256]=69+x;	p[257]=33+y;
    drawpoly(129,p);


    int d[206];
    d[0]=67+x;	d[1]=151+y;
    d[2]=92+x;	d[3]=162+y;
    d[4]=100+x;	d[5]=163+y;
    d[6]=113+x;	d[7]=155+y;
    d[8]=129+x;	d[9]=142+y;
    d[10]=113+x;	d[11]=155+y;
    d[12]=129+x;	d[13]=158+y;
    d[14]=129+x;	d[15]=162+y;
    d[16]=123+x;	d[17]=162+y;
    d[18]=111+x;	d[19]=171+y;
    d[20]=107+x;	d[21]=170+y;
    d[22]=113+x;	d[23]=155+y;
    d[24]=107+x;	d[25]=170+y;
    d[26]=111+x;	d[27]=171+y;
    d[28]=111+x;	d[29]=179+y;
    d[30]=117+x;	d[31]=174+y;
    d[32]=122+x;	d[33]=174+y;
    d[34]=122+x;	d[35]=176+y;
    d[36]=118+x;	d[37]=181+y;
    d[38]=122+x;	d[39]=177+y;
    d[40]=122+x;	d[41]=174+y;
    d[42]=117+x;	d[43]=174+y;
    d[44]=111+x;	d[45]=179+y;
    d[46]=111+x;	d[47]=186+y;
    d[48]=128+x;	d[49]=198+y;
    d[50]=131+x;	d[51]=194+y;
    d[52]=133+x;	d[53]=174+y;
    d[54]=131+x;	d[55]=194+y;
    d[56]=128+x;	d[57]=198+y;
    d[58]=111+x;	d[59]=186+y;
    d[60]=123+x;	d[61]=205+y;
    d[62]=106+x;	d[63]=210+y;
    d[64]=104+x;	d[65]=187+y;
    d[66]=99+x;	d[67]=189+y;
    d[68]=98+x;	d[69]=212+y;
    d[70]=83+x;	d[71]=212+y;
    d[72]=86+x;	d[73]=199+y;
    d[74]=95+x;	d[75]=189+y;
    d[76]=95+x;	d[77]=179+y;
    d[78]=88+x;	d[79]=177+y;
    d[80]=85+x;	d[81]=180+y;
    d[82]=89+x;	d[83]=184+y;
    d[84]=85+x;	d[85]=180+y;
    d[86]=88+x;	d[87]=177+y;
    d[88]=95+x;	d[89]=179+y;
    d[90]=95+x;	d[91]=173+y;
    d[92]=99+x;	d[93]=171+y;
    d[94]=107+x;	d[95]=170+y;
    d[96]=113+x;	d[97]=155+y;
    d[98]=100+x;	d[99]=163+y;
    d[100]=92+x;	d[101]=162+y;
    d[102]=99+x;	d[103]=171+y;
    d[104]=95+x;	d[105]=173+y;
    d[106]=86+x;	d[107]=168+y;
    d[108]=92+x;	d[109]=162+y;
    d[110]=86+x;	d[111]=168+y;
    d[112]=74+x;	d[113]=168+y;
    d[114]=75+x;	d[115]=201+y;
    d[116]=78+x;	d[117]=205+y;
    d[118]=81+x;	d[119]=205+y;
    d[120]=86+x;	d[121]=199+y;
    d[122]=81+x;	d[123]=205+y;
    d[124]=78+x;	d[125]=205+y;
    d[126]=75+x;	d[127]=201+y;
    d[128]=75+x;	d[129]=198+y;
    d[130]=73+x;	d[131]=198+y;
    d[132]=74+x;	d[133]=201+y;
    d[134]=52+x;	d[135]=216+y;
    d[136]=75+x;	d[137]=234+y;
    d[138]=82+x;	d[139]=225+y;
    d[140]=80+x;	d[141]=240+y;
    d[142]=86+x;	d[143]=230+y;
    d[144]=87+x;	d[145]=237+y;
    d[146]=101+x;	d[147]=232+y;
    d[148]=101+x;	d[149]=237+y;
    d[150]=85+x;	d[151]=244+y;
    d[152]=78+x;	d[153]=244+y;
    d[154]=48+x;	d[155]=221+y;
    d[156]=52+x;	d[157]=216+y;
    d[158]=48+x;	d[159]=221+y;
    d[160]=78+x;	d[161]=244+y;
    d[162]=85+x;	d[163]=244+y;
    d[164]=101+x;	d[165]=237+y;
    d[166]=101+x;	d[167]=188+y;
    d[168]=103+x;	d[169]=187+y;
    d[170]=107+x;	d[171]=231+y;
    d[172]=119+x;	d[173]=236+y;
    d[174]=118+x;	d[175]=225+y;
    d[176]=124+x;	d[177]=233+y;
    d[178]=127+x;	d[179]=214+y;
    d[180]=139+x;	d[181]=235+y;
    d[182]=167+x;	d[183]=212+y;
    d[184]=173+x;	d[185]=220+y;
    d[186]=142+x;	d[187]=246+y;
    d[188]=137+x;	d[189]=246+y;
    d[190]=108+x;	d[191]=239+y;
    d[192]=107+x;	d[193]=231+y;
    d[194]=108+x;	d[195]=239+y;
    d[196]=137+x;	d[197]=246+y;
    d[198]=142+x;	d[199]=246+y;
    d[200]=173+x;	d[201]=220+y;
    d[202]=167+x;	d[203]=212+y;
    d[204]=149+x;	d[205]=185+y;
    drawpoly(103,d);


    int l[8];
    l[0]=86+x;	l[1]=150+y;
    l[2]=88+x;	l[3]=151+y;
    l[4]=91+x;	l[5]=151+y;
    l[6]=94+x; 	l[7]=148+y;
    drawpoly(4,l);


    int n[6];
    n[0]=87+x;	n[1]=138+y;
    n[2]=87+x;	n[3]=140+y;
    n[4]=86+x;	n[5]=141+y;
    drawpoly(3,n);

    int o[60];
    o[0]=78+x;	o[1]=105+y;
    o[2]=76+x;	o[3]=104+y;
    o[4]=73+x;	o[5]=104+y;
    o[6]=72+x;	o[7]=105+y;
    o[8]=73+x;	o[9]=106+y;
    o[10]=76+x;	o[11]=107+y;
    o[12]=77+x;	o[13]=109+y;
    o[14]=80+x;	o[15]=112+y;
    o[16]=81+x;	o[17]=114+y;
    o[18]=81+x;	o[19]=119+y;
    o[20]=81+x;	o[21]=131+y;
    o[22]=78+x;	o[23]=134+y;
    o[24]=73+x;	o[25]=134+y;
    o[26]=72+x;	o[27]=133+y;
    o[28]=72+x;	o[29]=129+y;
    o[30]=75+x;	o[31]=126+y;
    o[32]=75+x;	o[33]=123+y;
    o[34]=73+x;	o[35]=123+y;
    o[36]=71+x;	o[37]=125+y;
    o[38]=70+x;	o[39]=124+y;
    o[40]=70+x;	o[41]=108+y;
    o[42]=73+x;	o[43]=106+y;
    o[44]=72+x;	o[45]=105+y;
    o[46]=69+x;	o[47]=105+y;
    o[48]=67+x;	o[49]=107+y;
    o[50]=65+x;	o[51]=110+y;
    o[52]=63+x;	o[53]=115+y;
    o[54]=63+x;	o[55]=123+y;
    o[56]=66+x;	o[57]=126+y;
    o[58]=68+x;	o[59]=129+y;
    drawpoly(30,o);

    int g[48];
    g[0]=100+x;	g[1]=104+y;
    g[2]=104+x;	g[3]=100+y;
    g[4]=108+x;	g[5]=98+y;
    g[6]=117+x;	g[7]=98+y;
    g[8]=119+x;	g[9]=99+y;
    g[10]=125+x;	g[11]=104+y;
    g[12]=130+x;	g[13]=111+y;
    g[14]=130+x;	g[15]=104+y;
    g[16]=125+x;	g[17]=109+y;
    g[18]=126+x;	g[19]=110+y;
    g[20]=126+x;	g[21]=120+y;
    g[22]=121+x;	g[23]=125+y;
    g[24]=113+x;	g[25]=125+y;
    g[26]=110+x;	g[27]=122+y;
    g[28]=110+x;	g[29]=121+y;
    g[30]=113+x;	g[31]=117+y;
    g[32]=113+x;	g[33]=116+y;
    g[34]=112+x;	g[35]=114+y;
    g[36]=108+x;	g[37]=114+y;
    g[38]=108+x;	g[39]=98+y;
    g[40]=112+x;	g[41]=98+y;
    g[42]=108+x;	g[43]=94+y;
    g[44]=105+x;	g[45]=94+y;
    g[46]=102+x;	g[47]=96+y;
    drawpoly(24,g);

    int i[12];
    i[0]=64+x;	i[1]=95+y;
    i[2]=65+x;	i[3]=93+y;
    i[4]=68+x;	i[5]=91+y;
    i[6]=71+x;	i[7]=90+y;
    i[8]=74+x;	i[9]=90+y;
    i[10]=76+x;	i[11]=92+y;
    drawpoly(6,i);

    int f[14];
    f[0]=98+x;	f[1]=86+y;
    f[2]=104+x;	f[3]=82+y;
    f[4]=106+x;	f[5]=81+y;
    f[6]=112+x;	f[7]=81+y;
    f[8]=118+x;	f[9]=82+y;
    f[10]=124+x;	f[11]=86+y;
    f[12]=128+x;	f[13]=90+y;
    drawpoly(7,f);

    int j[16];
    j[0]=141+x;	j[1]=111+y;
    j[2]=144+x;	j[3]=107+y;
    j[4]=147+x;	j[5]=104+y;
    j[6]=150+x;	j[7]=104+y;
    j[8]=154+x;	j[9]=106+y;
    j[10]=154+x;	j[11]=118+y;
    j[12]=152+x;	j[13]=122+y;
    j[14]=143+x;	j[15]=130+y;
    drawpoly(8,j);

    rectangle(5+x,6+y,192+x,252+y);



//hair
setfillstyle(1,1);
putpixel(88+x,50+y,15);
floodfill(88+x,50+y,a);

setfillstyle(1,1);
putpixel(167+x,54+y,15);
floodfill(167+x,54+y,a);

setfillstyle(1,1);
putpixel(138+x,160+y,15);
floodfill(138+x,160+y,a);

setfillstyle(1,1);
putpixel(146+x,173+y,15);
floodfill(146+x,173+y,a);

setfillstyle(1,1);
putpixel(157+x,133+y,15);
floodfill(157+x,133+y,a);

setfillstyle(1,1);
putpixel(105+x,87+y,15);
floodfill(105+x,87+y,a);


//body
setfillstyle(1,15);
putpixel(102+x,142+y,15);
floodfill(102+x,142+y,a);

setfillstyle(1,15);
putpixel(147+x,114+y,15);
floodfill(147+x,114+y,a);

setfillstyle(1,15);
putpixel(128+x,104+y,15);
floodfill(128+x,104+y,a);

setfillstyle(1,15);
putpixel(117+x,92+y,15);
floodfill(117+x,92+y,a);

setfillstyle(1,15);
putpixel(61+x,98+y,15);
floodfill(61+x,98+y,a);

setfillstyle(1,15);
putpixel(111+x,77+y,15);
floodfill(111+x,77+y,a);

setfillstyle(1,15);
putpixel(101+x,166+y,15);
floodfill(101+x,166+y,a);


//eye
setfillstyle(1,8);
putpixel(113+x,110+y,15);
floodfill(113+x,110+y,a);

setfillstyle(1,8);
putpixel(75+x,117+y,15);
floodfill(75+x,117+y,a);

//bow
setfillstyle(1,5);
putpixel(101+x,177+y,15);
floodfill(101+x,177+y,a);

setfillstyle(1,5);
putpixel(82+x,189+y,15);
floodfill(82+x,189+y,a);

setfillstyle(1,5);
putpixel(124+x,187+y,15);
floodfill(124+x,187+y,a);

//cloth
setfillstyle(1,11);
putpixel(116+x,162+y,15);
floodfill(116+x,162+y,a);

setfillstyle(1,11);
putpixel(92+x,167+y,15);
floodfill(92+x,167+y,a);

setfillstyle(1,11);
putpixel(65+x,218+y,15);
floodfill(65+x,218+y,a);

setfillstyle(1,11);
putpixel(117+x,218+y,15);
floodfill(117+x,218+y,a);

//screen
setfillstyle(1,12);
putpixel(62+x,228+y,15);
floodfill(62+x,228+y,a);

setfillstyle(1,12);
putpixel(129+x,237+y,15);
floodfill(129+x,237+y,a);

//background
setfillstyle(3,7);
putpixel(180+x,233+y,15);
floodfill(180+x,233+y,a);

setfillstyle(3,7);
putpixel(76+x,163+y,15);
floodfill(76+x,163+y,a);

setfillstyle(3,7);
putpixel(125+x,152+y,15);
floodfill(125+x,152+y,a);
}


void cardblizzard(int x,int y)
{

    rectangle(-50+x,-50+y,260+x,400+y);
    rectangle(-30+x,-30+y,240+x,240+y);
    outtextxy(10+x,260+y,"The power from shiva will");
    outtextxy(10+x,273+y,"assist to destroy and");
    outtextxy(10+x,286+y,"recover up your Hp power");
    outtextxy(10+x,320+y,"Ability: Destroy 2 boxes");
    outtextxy(80+x,333+y,"from your screen");
    outtextxy(80+x,346+y,"& Heal 10 Hp");
    outtextxy(10+x,370+y,"Requirement : Hp 45");
    setcolor(1);
    int p[52];
    p[0]=105+x;	p[1]=98+y;
    p[2]=69+x;	p[3]=19+y;
    p[4]=33+x;	p[5]=19+y;
    p[6]=33+x;	p[7]=59+y;
    p[8]=105+x;	p[9]=98+y;
    p[10]=33+x;	p[11]=134+y;
    p[12]=33+x;	p[13]=173+y;
    p[14]=70+x;	p[15]=173+y;
    p[16]=105+x;	p[17]=98+y;
    p[18]=141+x;	p[19]=173+y;
    p[20]=177+x;	p[21]=173+y;
    p[22]=177+x;	p[23]=133+y;
    p[24]=105+x;	p[25]=98+y;
    p[26]=177+x;	p[27]=63+y;
    p[28]=177+x;	p[29]=19+y;
    p[30]=141+x;	p[31]=19+y;
    p[32]=105+x;	p[33]=98+y;
    p[34]=149+x;	p[35]=55+y;
    p[36]=105+x;	p[37]=98+y;
    p[38]=65+x;	p[39]=57+y;
    p[40]=105+x;	p[41]=98+y;
    p[42]=65+x;	p[43]=139+y;
    p[44]=105+x;	p[45]=98+y;
    p[46]=141+x;	p[47]=136+y;
    p[48]=105+x;	p[49]=98+y;
    p[50]=33+x;	p[51]=134+y;
   drawpoly(26,p);
   setfillstyle(1,15);
   floodfill(50+x,136+y,1);
   floodfill(144+x,144+y,1);
   floodfill(60+x,60+y,1);
   floodfill(120+x,70+y,1);

   setfillstyle(1,1);
   floodfill(200+x,300+y,15);
}
void cardcross(int x,int y)
{   int z;
    z=50;
    rectangle(-50+x,-50+y,260+x,400+y);
    rectangle(-30+x,-30+y,240+x,240+y);
    outtextxy(10+x,260+y,"The holy cross of heaven");
    outtextxy(10+x,273+y,"will slaught the darkness");
    outtextxy(10+x,286+y,"and assist you from the harm");
    outtextxy(10+x,320+y,"Ability: Destroy all boxes");
    outtextxy(80+x,333+y,"from your screen");
    outtextxy(80+x,346+y,"& Heal 50 Hp");
    outtextxy(10+x,370+y,"Requirement : Sp 100");
     setcolor(1);
    int p[26];
    p[0]=44+x+z;	p[1]=7+y+z;
    p[2]=68+x+z;	p[3]=7+y+z;
    p[4]=68+x+z;	p[5]=34+y+z;
    p[6]=99+x+z;	p[7]=34+y+z;
    p[8]=99+x+z;	p[9]=60+y+z;
    p[10]=68+x+z;	p[11]=60+y+z;
    p[12]=68+x+z;	p[13]=128+y+z;
    p[14]=44+x+z;	p[15]=128+y+z;
    p[16]=44+x+z;	p[17]=60+y+z;
    p[18]=12+x+z;	p[19]=60+y+z;
    p[20]=12+x+z;	p[21]=34+y+z;
    p[22]=44+x+z;	p[23]=34+y+z;
    p[24]=44+x+z;	p[25]=7+y+z;
    drawpoly(13,p);

    int i[26];
    i[0]=49+x+z;	i[1]=12+y+z;
    i[2]=63+x+z;	i[3]=12+y+z;
    i[4]=63+x+z;	i[5]=39+y+z;
    i[6]=94+x+z;	i[7]=39+y+z;
    i[8]=94+x+z;	i[9]=55+y+z;
    i[10]=63+x+z;	i[11]=55+y+z;
    i[12]=63+x+z;	i[13]=122+y+z;
    i[14]=49+x+z;	i[15]=122+y+z;
    i[16]=49+x+z;	i[17]=55+y+z;
    i[18]=17+x+z;	i[19]=55+y+z;
    i[20]=17+x+z;	i[21]=39+y+z;
    i[22]=49+x+z;	i[23]=39+y+z;
    i[24]=49+x+z;	i[25]=12+y+z;
    drawpoly(13,i);

    setfillstyle(1,6);
    floodfill(66+x+z,57+y+z,1);

    setfillstyle(1,15);
    floodfill(59+x+z,48+y+z,1);

   setfillstyle(1,1);
   floodfill(200+x,300+y,15);
}
void cardthunder(int x,int y)
{   int z;
    z=20;
    rectangle(-50+x,-50+y,260+x,400+y);
    rectangle(-30+x,-30+y,240+x,240+y);
    outtextxy(10+x,260+y,"Strong power from lighting");
    outtextxy(10+x,273+y,"of God. Ramuh will spark");
    outtextxy(10+x,286+y,"on enemy and destroy it");
    outtextxy(10+x,320+y,"Ability: Destroy 2 boxes");
    outtextxy(80+x,333+y,"from your screen");
    outtextxy(10+x,370+y,"Requirement : Sp 20");

    setcolor(4);
    int p[14];
    p[0]=76+x+z;	p[1]=21+y+z;
    p[2]=40+x+z;	p[3]=99+y+z;
    p[4]=78+x+z;	p[5]=99+y+z;
    p[6]=47+x+z;	p[7]=170+y+z;
    p[8]=121+x+z;	p[9]=65+y+z;
    p[10]=74+x+z;	p[11]=83+y+z;
    p[12]=76+x+z;	p[13]=21+y+z;
    drawpoly(7,p);

    setfillstyle(1,14);
    floodfill(90+x+z,93+y+z,4);

    setfillstyle(1,1);
    floodfill(200+x,300+y,15);

}
void carddark(int x,int y)
{   rectangle(-50+x,-50+y,260+x,400+y);
    rectangle(-30+x,-30+y,240+x,240+y);
    outtextxy(10+x,260+y,"The power of abyss darkness");
    outtextxy(10+x,273+y,"will swallow everything");
    outtextxy(10+x,286+y,"which startle the hero");
    outtextxy(10+x,320+y,"Ability: Destroy all boxes");
    outtextxy(80+x,333+y,"from your screen");
    outtextxy(10+x,370+y,"Requirement : Sp 10 & Hp 20");

    setcolor(0);
    setfillstyle(4,5);
    fillellipse(100+x,100+y,80,80);

    setfillstyle(1,1);
    floodfill(200+x,300+y,15);
}
void cardfire(int x,int y)
{   int z,o;
    z=-230;
    rectangle(-50+x,-50+y,260+x,400+y);
    rectangle(-30+x,-30+y,240+x,240+y);
    outtextxy(10+x,260+y,"With the power of fire from");
    outtextxy(10+x,273+y,"Odin. You can use his");
    outtextxy(10+x,286+y,"power to destroy all enemy");
    outtextxy(10+x,299+y,"that interrupt you");
    outtextxy(10+x,330+y,"Ability: Destroy all boxes");
    outtextxy(80+x,343+y,"from your screen");
    outtextxy(10+x,370+y,"Requirement : Sp 50");

    int p[34];
    p[0]=244+x+z;	p[1]=95+y;
    p[2]=316+x+z;	p[3]=130+y;
    p[4]=334+x+z;	p[5]=37+y;
    p[6]=360+x+z;	p[7]=130+y;
    p[8]=441+x+z;	p[9]=90+y;
    p[10]=378+x+z;	p[11]=175+y;
    p[12]=301+x+z;	p[13]=175+y;
    p[14]=317+x+z;	p[15]=175+y;
    p[16]=289+x+z;	p[17]=130+y;
    p[18]=328+x+z;	p[19]=152+y;
    p[20]=333+x+z;	p[21]=97+y;
    p[22]=356+x+z;	p[23]=150+y;
    p[24]=381+x+z;	p[25]=129+y;
    p[26]=367+x+z;	p[27]=175+y;
    p[28]=301+x+z;	p[29]=175+y;
    p[30]=244+x+z;	p[31]=95+y;
    p[32]=301+x+z;	p[33]=175+y;
    drawpoly(17,p);

    setfillstyle(1,4);
    floodfill(347+x+z,106+y,15);

    setfillstyle(1,14);
    floodfill(347+x+z,135+y,15);

    setfillstyle(1,1);
    floodfill(200+x,300+y,15);
}
void male(int x,int y)
{   int a;
    a=7;
    setcolor(a);
  //hair
    int p[758];
    p[0]=57+x;	p[1]=11+y;
    p[2]=72+x;	p[3]=26+y;
    p[4]=74+x;	p[5]=26+y;
    p[6]=82+x;	p[7]=34+y;
    p[8]=84+x;	p[9]=34+y;
    p[10]=89+x;	p[11]=39+y;
    p[12]=101+x;	p[13]=39+y;
    p[14]=101+x;	p[15]=40+y;
    p[16]=105+x;	p[17]=40+y;
    p[18]=105+x;	p[19]=41+y;
    p[20]=108+x;	p[21]=41+y;
    p[22]=108+x;	p[23]=42+y;
    p[24]=110+x;	p[25]=42+y;
    p[26]=110+x;	p[27]=43+y;
    p[28]=112+x;	p[29]=43+y;
    p[30]=112+x;	p[31]=44+y;
    p[32]=113+x;	p[33]=44+y;
    p[34]=113+x;	p[35]=45+y;
    p[36]=114+x;	p[37]=45+y;
    p[38]=114+x;	p[39]=46+y;
    p[40]=116+x;	p[41]=46+y;
    p[42]=116+x;	p[43]=47+y;
    p[44]=117+x;	p[45]=47+y;
    p[46]=117+x;	p[47]=48+y;
    p[48]=118+x;	p[49]=48+y;
    p[50]=118+x;	p[51]=49+y;
    p[52]=119+x;	p[53]=49+y;
    p[54]=119+x;	p[55]=50+y;
    p[56]=120+x;	p[57]=50+y;
    p[58]=120+x;	p[59]=51+y;
    p[60]=121+x;	p[61]=51+y;
    p[62]=121+x;	p[63]=52+y;
    p[64]=122+x;	p[65]=52+y;
    p[66]=122+x;	p[67]=53+y;
    p[68]=123+x;	p[69]=53+y;
    p[70]=123+x;	p[71]=54+y;
    p[72]=124+x;	p[73]=54+y;
    p[74]=124+x;	p[75]=55+y;
    p[76]=125+x;	p[77]=55+y;
    p[78]=125+x;	p[79]=56+y;
    p[80]=126+x;	p[81]=56+y;
    p[82]=126+x;	p[83]=57+y;
    p[84]=127+x;	p[85]=57+y;
    p[86]=127+x;	p[87]=58+y;
    p[88]=128+x;	p[89]=58+y;
    p[90]=128+x;	p[91]=60+y;
    p[92]=129+x;	p[93]=60+y;
    p[94]=129+x;	p[95]=62+y;
    p[96]=130+x;	p[97]=62+y;
    p[98]=130+x;	p[99]=63+y;
    p[100]=131+x;	p[101]=63+y;
    p[102]=131+x;	p[103]=64+y;
    p[104]=132+x;	p[105]=64+y;
    p[106]=132+x;	p[107]=66+y;
    p[108]=133+x;	p[109]=66+y;
    p[110]=133+x;	p[111]=68+y;
    p[112]=134+x;	p[113]=68+y;
    p[114]=134+x;	p[115]=70+y;
    p[116]=135+x;	p[117]=70+y;
    p[118]=135+x;	p[119]=72+y;
    p[120]=136+x;	p[121]=72+y;
    p[122]=136+x;	p[123]=74+y;
    p[124]=137+x;	p[125]=74+y;
    p[126]=137+x;	p[127]=76+y;
    p[128]=138+x;	p[129]=76+y;
    p[130]=138+x;	p[131]=80+y;
    p[132]=139+x;	p[133]=80+y;
    p[134]=139+x;	p[135]=83+y;
    p[136]=140+x;	p[137]=83+y;
    p[138]=140+x;	p[139]=88+y;
    p[140]=141+x;	p[141]=88+y;
    p[142]=141+x;	p[143]=129+y;
    p[144]=141+x;	p[145]=126+y;
    p[146]=140+x;	p[147]=126+y;
    p[148]=140+x;	p[149]=120+y;
    p[150]=139+x;	p[151]=120+y;
    p[152]=139+x;	p[153]=117+y;
    p[154]=138+x;	p[155]=117+y;
    p[156]=138+x;	p[157]=113+y;
    p[158]=137+x;	p[159]=113+y;
    p[160]=137+x;	p[161]=109+y;
    p[162]=136+x;	p[163]=109+y;
    p[164]=136+x;	p[165]=106+y;
    p[166]=135+x;	p[167]=106+y;
    p[168]=135+x;	p[169]=101+y;
    p[170]=134+x;	p[171]=99+y;
    p[172]=133+x;	p[173]=99+y;
    p[174]=133+x;	p[175]=96+y;
    p[176]=133+x;	p[177]=99+y;
    p[178]=134+x;	p[179]=99+y;
    p[180]=135+x;	p[181]=101+y;
    p[182]=135+x;	p[183]=106+y;
    p[184]=136+x;	p[185]=106+y;
    p[186]=136+x;	p[187]=109+y;
    p[188]=137+x;	p[189]=109+y;
    p[190]=137+x;	p[191]=118+y;
    p[192]=137+x;	p[193]=119+y;
    p[194]=136+x;	p[195]=119+y;
    p[196]=136+x;	p[197]=112+y;
    p[198]=135+x;	p[199]=112+y;
    p[200]=135+x;	p[201]=125+y;
    p[202]=134+x;	p[203]=125+y;
    p[204]=134+x;	p[205]=128+y;
    p[206]=133+x;	p[207]=128+y;
    p[208]=133+x;	p[209]=131+y;
    p[210]=132+x;	p[211]=133+y;
    p[212]=132+x;	p[213]=134+y;
    p[214]=131+x;	p[215]=134+y;
    p[216]=131+x;	p[217]=136+y;
    p[218]=130+x;	p[219]=136+y;
    p[220]=130+x;	p[221]=140+y;
    p[222]=129+x;	p[223]=140+y;
    p[224]=129+x;	p[225]=145+y;
    p[226]=129+x;	p[227]=117+y;
    p[228]=129+x;	p[229]=125+y;
    p[230]=128+x;	p[231]=125+y;
    p[232]=128+x;	p[233]=128+y;
    p[234]=127+x;	p[235]=128+y;
    p[236]=127+x;	p[237]=132+y;
    p[238]=126+x;	p[239]=132+y;
    p[240]=126+x;	p[241]=134+y;
    p[242]=125+x;	p[243]=134+y;
    p[244]=125+x;	p[245]=136+y;
    p[246]=124+x;	p[247]=136+y;
    p[248]=124+x;	p[249]=138+y;
    p[250]=122+x;	p[251]=138+y;
    p[252]=122+x;	p[253]=142+y;
    p[254]=121+x;	p[255]=142+y;
    p[256]=121+x;	p[257]=144+y;
    p[258]=120+x;	p[259]=144+y;
    p[260]=120+x;	p[261]=149+y;
    p[262]=120+x;	p[263]=144+y;
    p[264]=118+x;	p[265]=144+y;
    p[266]=118+x;	p[267]=133+y;
    p[268]=117+x;	p[269]=133+y;
    p[270]=117+x;	p[271]=116+y;
    p[272]=116+x;	p[273]=116+y;
    p[274]=116+x;	p[275]=107+y;
    p[276]=115+x;	p[277]=107+y;
    p[278]=115+x;	p[279]=97+y;
    p[280]=114+x;	p[281]=97+y;
    p[282]=114+x;	p[283]=88+y;
    p[284]=113+x;	p[285]=88+y;
    p[286]=113+x;	p[287]=85+y;
    p[288]=112+x;	p[289]=85+y;
    p[290]=112+x;	p[291]=81+y;
    p[292]=111+x;	p[293]=81+y;
    p[294]=111+x;	p[295]=78+y;
    p[296]=110+x;	p[297]=78+y;
    p[298]=110+x;	p[299]=75+y;
    p[300]=109+x;	p[301]=75+y;
    p[302]=109+x;	p[303]=72+y;
    p[304]=108+x;	p[305]=72+y;
    p[306]=108+x;	p[307]=69+y;
    p[308]=107+x;	p[309]=69+y;
    p[310]=108+x;	p[311]=69+y;
    p[312]=108+x;	p[313]=72+y;
    p[314]=109+x;	p[315]=72+y;
    p[316]=109+x;	p[317]=75+y;
    p[318]=110+x;	p[319]=75+y;
    p[320]=110+x;	p[321]=78+y;
    p[322]=111+x;	p[323]=78+y;
    p[324]=111+x;	p[325]=81+y;
    p[326]=112+x;	p[327]=81+y;
    p[328]=112+x;	p[329]=85+y;
    p[330]=113+x;	p[331]=85+y;
    p[332]=113+x;	p[333]=88+y;
    p[334]=114+x;	p[335]=88+y;
    p[336]=114+x;	p[337]=90+y;
    p[338]=115+x;	p[339]=90+y;
    p[340]=115+x;	p[341]=93+y;
    p[342]=116+x;	p[343]=93+y;
    p[344]=117+x;	p[345]=94+y;
    p[346]=117+x;	p[347]=97+y;
    p[348]=118+x;	p[349]=97+y;
    p[350]=118+x;	p[351]=99+y;
    p[352]=119+x;	p[353]=99+y;
    p[354]=119+x;	p[355]=101+y;
    p[356]=120+x;	p[357]=101+y;
    p[358]=120+x;	p[359]=103+y;
    p[360]=121+x;	p[361]=103+y;
    p[362]=121+x;	p[363]=106+y;
    p[364]=122+x;	p[365]=106+y;
    p[366]=122+x;	p[367]=109+y;
    p[368]=123+x;	p[369]=109+y;
    p[370]=123+x;	p[371]=112+y;
    p[372]=124+x;	p[373]=112+y;
    p[374]=124+x;	p[375]=114+y;
    p[376]=125+x;	p[377]=114+y;
    p[378]=125+x;	p[379]=116+y;
    p[380]=125+x;	p[381]=96+y;
    p[382]=124+x;	p[383]=96+y;
    p[384]=124+x;	p[385]=91+y;
    p[386]=123+x;	p[387]=91+y;
    p[388]=123+x;	p[389]=87+y;
    p[390]=122+x;	p[391]=87+y;
    p[392]=122+x;	p[393]=83+y;
    p[394]=121+x;	p[395]=83+y;
    p[396]=122+x;	p[397]=83+y;
    p[398]=122+x;	p[399]=87+y;
    p[400]=123+x;	p[401]=87+y;
    p[402]=123+x;	p[403]=91+y;
    p[404]=124+x;	p[405]=91+y;
    p[406]=124+x;	p[407]=96+y;
    p[408]=125+x;	p[409]=96+y;
    p[410]=125+x;	p[411]=116+y;
    p[412]=125+x;	p[413]=114+y;
    p[414]=124+x;	p[415]=114+y;
    p[416]=124+x;	p[417]=112+y;
    p[418]=123+x;	p[419]=112+y;
    p[420]=123+x;	p[421]=109+y;
    p[422]=122+x;	p[423]=109+y;
    p[424]=122+x;	p[425]=106+y;
    p[426]=121+x;	p[427]=106+y;
    p[428]=121+x;	p[429]=103+y;
    p[430]=120+x;	p[431]=103+y;
    p[432]=120+x;	p[433]=101+y;
    p[434]=119+x;	p[435]=101+y;
    p[436]=119+x;	p[437]=99+y;
    p[438]=118+x;	p[439]=99+y;
    p[440]=118+x;	p[441]=97+y;
    p[442]=117+x;	p[443]=97+y;
    p[444]=117+x;	p[445]=94+y;
    p[446]=116+x;	p[447]=93+y;
    p[448]=114+x;	p[449]=93+y;
    p[450]=114+x;	p[451]=97+y;
    p[452]=115+x;	p[453]=97+y;
    p[454]=115+x;	p[455]=107+y;
    p[456]=116+x;	p[457]=107+y;
    p[458]=116+x;	p[459]=116+y;
    p[460]=114+x;	p[461]=116+y;
    p[462]=114+x;	p[463]=121+y;
    p[464]=113+x;	p[465]=121+y;
    p[466]=113+x;	p[467]=125+y;
    p[468]=112+x;	p[469]=125+y;
    p[470]=112+x;	p[471]=128+y;
    p[472]=111+x;	p[473]=128+y;
    p[474]=111+x;	p[475]=133+y;
    p[476]=110+x;	p[477]=133+y;
    p[478]=110+x;	p[479]=139+y;
    p[480]=109+x;	p[481]=139+y;
    p[482]=109+x;	p[483]=144+y;
    p[484]=108+x;	p[485]=144+y;
    p[486]=108+x;	p[487]=147+y;
    p[488]=107+x;	p[489]=147+y;
    p[490]=107+x;	p[491]=151+y;
    p[492]=106+x;	p[493]=151+y;
    p[494]=106+x;	p[495]=154+y;
    p[496]=105+x;	p[497]=154+y;
    p[498]=105+x;	p[499]=158+y;
    p[500]=105+x;	p[501]=107+y;
    p[502]=106+x;	p[503]=107+y;
    p[504]=106+x;	p[505]=103+y;
    p[506]=107+x;	p[507]=103+y;
    p[508]=107+x;	p[509]=99+y;
    p[510]=108+x;	p[511]=99+y;
    p[512]=108+x;	p[513]=93+y;
    p[514]=109+x;	p[515]=93+y;
    p[516]=109+x;	p[517]=90+y;
    p[518]=109+x;	p[519]=93+y;
    p[520]=108+x;	p[521]=93+y;
    p[522]=108+x;	p[523]=99+y;
    p[524]=107+x;	p[525]=99+y;
    p[526]=107+x;	p[527]=103+y;
    p[528]=106+x;	p[529]=103+y;
    p[530]=106+x;	p[531]=107+y;
    p[532]=105+x;	p[533]=107+y;
    p[534]=104+x;	p[535]=107+y;
    p[536]=104+x;	p[537]=111+y;
    p[538]=102+x;	p[539]=113+y;
    p[540]=102+x;	p[541]=83+y;
    p[542]=101+x;	p[543]=84+y;
    p[544]=101+x;	p[545]=87+y;
    p[546]=100+x;	p[547]=87+y;
    p[548]=100+x;	p[549]=90+y;
    p[550]=99+x;	p[551]=91+y;
    p[552]=99+x;	p[553]=92+y;
    p[554]=98+x;	p[555]=93+y;
    p[556]=98+x;	p[557]=94+y;
    p[558]=97+x;	p[559]=95+y;
    p[560]=97+x;	p[561]=96+y;
    p[562]=96+x;	p[563]=97+y;
    p[564]=96+x;	p[565]=99+y;
    p[566]=95+x;	p[567]=100+y;
    p[568]=95+x;	p[569]=102+y;
    p[570]=94+x;	p[571]=103+y;
    p[572]=94+x;	p[573]=104+y;
    p[574]=91+x;	p[575]=107+y;
    p[576]=91+x;	p[577]=104+y;
    p[578]=91+x;	p[579]=103+y;
    p[580]=92+x;	p[581]=103+y;
    p[582]=92+x;	p[583]=100+y;
    p[584]=93+x;	p[585]=100+y;
    p[586]=93+x;	p[587]=95+y;
    p[588]=94+x;	p[589]=95+y;
    p[590]=94+x;	p[591]=90+y;
    p[592]=95+x;	p[593]=90+y;
    p[594]=95+x;	p[595]=87+y;
    p[596]=96+x;	p[597]=87+y;
    p[598]=96+x;	p[599]=82+y;
    p[600]=97+x;	p[601]=82+y;
    p[602]=97+x;	p[603]=76+y;
    p[604]=98+x;	p[605]=76+y;
    p[606]=98+x;	p[607]=74+y;
    p[608]=73+x;	p[609]=115+y;
    p[610]=85+x;	p[611]=75+y;
    p[612]=85+x;  	p[613]=73+y;
    p[614]=66+x;	p[615]=110+y;
    p[616]=82+x;	p[617]=67+y;
    p[618]=60+x;	p[619]=110+y;
    p[620]=71+x;	p[621]=64+y;
    p[622]=51+x;	p[623]=105+y;
    p[624]=51+x;	p[625]=105+y;
    p[626]=51+x;	p[627]=105+y;
    p[628]=60+x;	p[629]=64+y;
    p[630]=47+x;	p[631]=97+y;
    p[632]=47+x;	p[633]=113+y;
    p[634]=36+x;	p[635]=153+y;
    p[636]=42+x;	p[637]=119+y;
    p[638]=30+x;	p[639]=143+y;
    p[640]=37+x;	p[641]=103+y;
    p[642]=47+x;	p[643]=78+y;
    p[644]=37+x;	p[645]=103+y;
    p[646]=19+x;	p[647]=121+y;
    p[648]=35+x;	p[649]=84+y;
    p[650]=36+x;	p[651]=84+y;
    p[652]=36+x;	p[653]=83+y;
    p[654]=40+x;	p[655]=79+y;
    p[656]=36+x;	p[657]=83+y;
    p[658]=36+x;	p[659]=84+y;
    p[660]=35+x;	p[661]=84+y;
    p[662]=9+x;	p[663]=103+y;
    p[664]=12+x;	p[665]=100+y;
    p[666]=13+x;	p[667]=100+y;
    p[668]=24+x;	p[669]=89+y;
    p[670]=24+x;	p[671]=88+y;
    p[672]=26+x;	p[673]=86+y;
    p[674]=26+x;	p[675]=85+y;
    p[676]=29+x;	p[677]=82+y;
    p[678]=29+x;	p[679]=81+y;
    p[680]=31+x;	p[681]=79+y;
    p[682]=31+x;	p[683]=76+y;
    p[684]=53+x;	p[685]=58+y;
    p[686]=31+x;	p[687]=76+y;
    p[688]=9+x;	p[689]=89+y;
    p[690]=24+x;	p[691]=77+y;
    p[692]=31+x;	p[693]=70+y;
    p[694]=31+x;	p[695]=69+y;
    p[696]=46+x;	p[697]=54+y;
    p[698]=47+x;	p[699]=54+y;
    p[700]=51+x;	p[701]=50+y;
    p[702]=52+x;	p[703]=50+y;
    p[704]=54+x;	p[705]=48+y;
    p[706]=55+x;	p[707]=48+y;
    p[708]=56+x;	p[709]=47+y;
    p[710]=57+x;	p[711]=47+y;
    p[712]=59+x;	p[713]=45+y;
    p[714]=63+x;	p[715]=45+y;
    p[716]=63+x;	p[717]=44+y;
    p[718]=67+x;	p[719]=44+y;
    p[720]=67+x;	p[721]=43+y;
    p[722]=69+x;	p[723]=43+y;
    p[724]=69+x;	p[725]=42+y;
    p[726]=84+x;	p[727]=42+y;
    p[728]=84+x;	p[729]=43+y;
    p[730]=85+x;	p[731]=43+y;
    p[732]=84+x;	p[733]=43+y;
    p[734]=84+x;	p[735]=42+y;
    p[736]=69+x;	p[737]=42+y;
    p[738]=69+x;	p[739]=43+y;
    p[740]=67+x;	p[741]=43+y;
    p[742]=67+x;	p[743]=44+y;
    p[744]=63+x;	p[745]=44+y;
    p[746]=63+x;	p[747]=45+y;
    p[748]=59+x;  	p[749]=45+y;
    p[750]=44+x;	p[751]=35+y;
    p[752]=51+x;	p[753]=38+y;
    p[754]=70+x;	p[755]=39+y;
    p[756]=57+x;	p[757]=11+y;
  drawpoly(379,p);

  //hair2
    int f[74];
    f[0]=105+x;	f[1]=55+y;
    f[2]=107+x;	f[3]=55+y;
    f[4]=107+x;	f[5]=56+y;
    f[6]=109+x;	f[7]=56+y;
    f[8]=111+x;	f[9]=58+y;
    f[10]=112+x;	f[11]=58+y;
    f[12]=123+x;	f[13]=69+y;
    f[14]=123+x;	f[15]=70+y;
    f[16]=125+x;	f[17]=72+y;
    f[18]=125+x;	f[19]=73+y;
    f[20]=126+x;	f[21]=74+y;
    f[22]=126+x;	f[23]=75+y;
    f[24]=127+x;	f[25]=76+y;
    f[26]=127+x;	f[27]=77+y;
    f[28]=128+x;	f[29]=78+y;
    f[30]=128+x;	f[31]=79+y;
    f[32]=129+x;	f[33]=80+y;
    f[34]=129+x;	f[35]=81+y;
    f[36]=130+x;	f[37]=82+y;
    f[38]=130+x;	f[39]=84+y;
    f[40]=131+x;	f[41]=85+y;
    f[42]=131+x;	f[43]=87+y;
    f[44]=130+x;	f[45]=86+y;
    f[46]=129+x;	f[47]=86+y;
    f[48]=128+x;	f[49]=85+y;
    f[50]=128+x;	f[51]=83+y;
    f[52]=127+x;	f[53]=82+y;
    f[54]=127+x;	f[55]=81+y;
    f[56]=126+x;	f[57]=81+y;
    f[58]=126+x;	f[59]=79+y;
    f[60]=118+x;	f[61]=71+y;
    f[62]=113+x;	f[63]=66+y;
    f[64]=112+x;	f[65]=66+y;
    f[66]=112+x;	f[67]=65+y;
    f[68]=110+x;	f[69]=65+y;
    f[70]=110+x;	f[71]=64+y;
    f[72]=108+x;	f[73]=64+y;
  drawpoly(37,f);

    //ear
    int e[86];
    e[0]=118+x;	e[1]=120+y;
    e[2]=119+x;	e[3]=119+y;
    e[4]=120+x;	e[5]=119+y;
    e[6]=121+x;	e[7]=120+y;
    e[8]=121+x;	e[9]=121+y;
    e[10]=122+x;	e[11]=121+y;
    e[12]=122+x;	e[13]=126+y;
    e[14]=120+x;	e[15]=124+y;
    e[16]=119+x;	e[17]=124+y;
    e[18]=118+x;	e[19]=125+y;
    e[20]=118+x;	e[21]=126+y;
    e[22]=118+x;	e[23]=125+y;
    e[24]=119+x;	e[25]=124+y;
    e[26]=120+x;	e[27]=124+y;
    e[28]=122+x;	e[29]=126+y;
    e[30]=122+x;	e[31]=127+y;
    e[32]=122+x;	e[33]=128+y;
    e[34]=123+x;	e[35]=128+y;
    e[36]=123+x;	e[37]=133+y;
    e[38]=122+x;	e[39]=133+y;
    e[40]=122+x;	e[41]=135+y;
    e[42]=121+x;	e[43]=135+y;
    e[44]=121+x;	e[45]=137+y;
    e[46]=118+x;	e[47]=140+y;
    e[48]=117+x;	e[49]=139+y;
    e[50]=117+x;	e[51]=137+y;
    e[52]=116+x;	e[53]=137+y;
    e[54]=116+x;	e[55]=135+y;
    e[56]=115+x;	e[57]=135+y;
    e[58]=115+x;	e[59]=133+y;
    e[60]=114+x;	e[61]=133+y;
    e[62]=114+x;	e[63]=131+y;
    e[64]=112+x;	e[65]=129+y;
    e[66]=114+x;	e[67]=131+y;
    e[68]=114+x;	e[69]=133+y;
    e[70]=115+x;	e[71]=133+y;
    e[72]=115+x;	e[73]=135+y;
    e[74]=116+x;	e[75]=135+y;
    e[76]=116+x;	e[77]=137+y;
    e[78]=117+x;	e[79]=137+y;
    e[80]=117+x;	e[81]=139+y;
    e[82]=118+x;	e[83]=140+y;
    e[84]=110+x;	e[85]=143+y;
 drawpoly(43,e);

  //body
    int o[254];
    o[0]=46+x;	o[1]=107+y;
    o[2]=49+x;	o[3]=158+y;
    o[4]=53+x;	o[5]=146+y;
    o[6]=47+x;	o[7]=133+y;
    o[8]=53+x;	o[9]=146+y;
    o[10]=78+x;	o[11]=160+y;
    o[12]=80+x;	o[13]=160+y;
    o[14]=98+x;	o[15]=151+y;
    o[16]=80+x;	o[17]=160+y;
    o[18]=83+x;	o[19]=160+y;
    o[20]=83+x;	o[21]=165+y;
    o[22]=76+x;	o[23]=170+y;
    o[24]=76+x;	o[25]=166+y;
    o[26]=83+x;	o[27]=165+y;
    o[28]=76+x;	o[29]=170+y;
    o[30]=76+x;	o[31]=177+y;
    o[32]=71+x;	o[33]=172+y;
    o[34]=71+x;	o[35]=167+y;
    o[36]=65+x;	o[37]=163+y;
    o[38]=63+x;	o[39]=163+y;
    o[40]=63+x;	o[41]=169+y;
    o[42]=63+x;	o[43]=163+y;
    o[44]=65+x; o[45]=163+y;
    o[46]=71+x;	o[47]=167+y;
    o[48]=71+x;	o[49]=170+y;
    o[50]=58+x;	o[51]=180+y;
    o[52]=58+x;	o[53]=163+y;
    o[54]=69+x;	o[55]=154+y;
    o[56]=58+x;	o[57]=163+y;
    o[58]=58+x;	o[59]=177+y;
    o[60]=47+x;	o[61]=188+y;
    o[62]=39+x;	o[63]=235+y;
    o[64]=39+x;	o[65]=237+y;
    o[66]=38+x;	o[67]=237+y;
    o[68]=38+x;	o[69]=238+y;
    o[70]=38+x;	o[71]=239+y;
    o[72]=37+x;	o[73]=239+y;
    o[74]=34+x;	o[75]=242+y;
    o[76]=37+x;	o[77]=245+y;
    o[78]=37+x;	o[79]=246+y;
    o[80]=35+x;	o[81]=246+y;
    o[82]=35+x;	o[83]=247+y;
    o[84]=34+x;	o[85]=247+y;
    o[86]=34+x;	o[87]=250+y;
    o[88]=53+x;	o[89]=250+y;
    o[90]=54+x;	o[91]=208+y;
    o[92]=53+x;	o[93]=197+y;
    o[94]=54+x;	o[95]=208+y;
    o[96]=53+x;	o[97]=250+y;
    o[98]=69+x;	o[99]=250+y;
    o[100]=74+x;	o[101]=200+y;
    o[102]=75+x;	o[103]=187+y;
    o[104]=78+x;	o[105]=193+y;
    o[106]=75+x; 	o[107]=187+y;
    o[108]=72+x;	o[109]=184+y;
    o[110]=72+x;	o[111]=183+y;
    o[112]=73+x;	o[113]=180+y;
    o[114]=67+x;	o[115]=172+y;
    o[116]=73+x;	o[117]=180+y;
    o[118]=76+x;	o[119]=180+y;
    o[120]=76+x;	o[121]=177+y;
    o[122]=76+x;	o[123]=180+y;
    o[124]=81+x;	o[125]=180+y;
    o[126]=91+x;	o[127]=185+y;
    o[128]=91+x;	o[129]=186+y;
    o[130]=84+x;	o[131]=193+y;
    o[132]=83+x;	o[133]=193+y;
    o[134]=84+x;	o[135]=193+y;
    o[136]=87+x;	o[137]=190+y;
    o[138]=88+x;	o[139]=191+y;
    o[140]=88+x;	o[141]=201+y;
    o[142]=74+x;	o[143]=200+y;
    o[144]=88+x;	o[145]=201+y;
    o[146]=85+x;	o[147]=203+y;
    o[148]=89+x;	o[149]=236+y;
    o[150]=90+x;	o[151]=237+y;
    o[152]=90+x;	o[153]=243+y;
    o[154]=91+x;	o[155]=243+y;
    o[156]=91+x;	o[157]=248+y;
    o[158]=92+x;	o[159]=248+y;
    o[160]=92+x;	o[161]=250+y;
    o[162]=69+x;	o[163]=250+y;
    o[164]=124+x;	o[165]=250+y;
    o[166]=118+x;	o[167]=232+y;
    o[168]=118+x;	o[169]=229+y;
    o[170]=112+x;	o[171]=223+y;
    o[172]=117+x;	o[173]=220+y;
    o[174]=107+x;	o[175]=198+y;
    o[176]=117+x;	o[177]=220+y;
    o[178]=112+x;	o[179]=223+y;
    o[180]=118+x;	o[181]=229+y;
    o[182]=118+x;	o[183]=232+y;
    o[184]=124+x;	o[185]=250+y;
    o[186]=159+x;	o[187]=250+y;
    o[188]=141+x;	o[189]=196+y;
    o[190]=137+x;	o[191]=187+y;
    o[192]=116+x;	o[193]=164+y;
    o[194]=116+x;	o[195]=164+y;
    o[196]=116+x;	o[197]=160+y;
    o[198]=113+x;	o[199]=160+y;
    o[200]=113+x;	o[201]=142+y;
    o[202]=113+x;	o[203]=144+y;
    o[204]=98+x;	o[205]=158+y;
    o[206]=98+x;	o[207]=159+y;
    o[208]=89+x;	o[209]=159+y;
    o[210]=89+x;	o[211]=164+y;
    o[212]=81+x;	o[213]=180+y;
    o[214]=97+x;	o[215]=166+y;
    o[216]=97+x;	o[217]=164+y;
    o[218]=95+x;	o[219]=162+y;
    o[220]=92+x;	o[221]=165+y;
    o[222]=92+x;	o[223]=166+y;
    o[224]=91+x;	o[225]=166+y;
    o[226]=92+x;	o[227]=166+y;
    o[228]=92+x;	o[229]=165+y;
    o[230]=95+x;	o[231]=162+y;
    o[232]=97+x;	o[233]=164+y;
    o[234]=97+x;	o[235]=166+y;
    o[236]=98+x;	o[237]=166+y;
    o[238]=100+x;	o[239]=176+y;
    o[240]=87+x;	o[241]=183+y;
    o[242]=100+x;	o[243]=176+y;
    o[244]=102+x;	o[245]=188+y;
    o[246]=109+x; 	o[247]=169+y;
    o[248]=113+x;	o[249]=160+y;
    o[250]=109+x;	o[251]=169+y;
    o[252]=116+x;	o[253]=164+y;
     drawpoly(127,o);

  //eye1
    int j[142];
    j[0]=87+x;	j[1]=130+y;
    j[2]=101+x;	j[3]=130+y;
    j[4]=104+x;	j[5]=127+y;
    j[6]=104+x;	j[7]=125+y;
    j[8]=108+x;	j[9]=121+y;
    j[10]=110+x;	j[11]=121+y;
    j[12]=110+x;	j[13]=120+y;
    j[14]=109+x;	j[15]=119+y;
    j[16]=109+x;	j[17]=118+y;
    j[18]=109+x;	j[19]=117+y;
    j[20]=104+x;	j[21]=112+y;
    j[22]=103+x;	j[23]=112+y;
    j[24]=102+x;	j[25]=111+y;
    j[26]=100+x;	j[27]=111+y;
    j[28]=99+x;	j[29]=110+y;
    j[30]=97+x;	j[31]=110+y;
    j[32]=96+x;	j[33]=109+y;
    j[34]=92+x;	j[35]=109+y;
    j[36]=91+x;	j[37]=109+y;
    j[38]=90+x;	j[39]=108+y;
    j[40]=89+x;	j[41]=107+y;
    j[42]=86+x;	j[43]=107+y;
    j[44]=83+x;	j[45]=110+y;
    j[46]=86+x;	j[47]=107+y;
    j[48]=89+x;	j[49]=107+y;
    j[50]=90+x;	j[51]=108+y;
    j[52]=91+x;	j[53]=109+y;
    j[54]=90+x;	j[55]=110+y;
    j[56]=88+x;	j[57]=110+y;
    j[58]=87+x;	j[59]=111+y;
    j[60]=86+x;	j[61]=111+y;
    j[62]=85+x;	j[63]=112+y;
    j[64]=84+x;	j[65]=112+y;
    j[66]=84+x;	j[67]=113+y;
    j[68]=83+x;	j[69]=113+y;
    j[70]=83+x;	j[71]=114+y;
    j[72]=83+x;	j[73]=113+y;
    j[74]=84+x;	j[75]=113+y;
    j[76]=84+x;	j[77]=112+y;
    j[78]=85+x;	j[79]=112+y;
    j[80]=86+x;	j[81]=111+y;
    j[82]=87+x;	j[83]=111+y;
    j[84]=88+x;	j[85]=110+y;
    j[86]=90+x;	j[87]=110+y;
    j[88]=91+x;	j[89]=109+y;
    j[90]=92+x;	j[91]=109+y;
    j[92]=92+x;	j[93]=112+y;
    j[94]=91+x;	j[95]=112+y;
    j[96]=89+x;	j[97]=114+y;
    j[98]=91+x;	j[99]=112+y;
    j[100]=91+x;	j[101]=113+y;
    j[102]=91+x;	j[103]=122+y;
    j[104]=94+x;	j[105]=122+y;
    j[106]=95+x;	j[107]=123+y;
    j[108]=95+x;	j[109]=124+y;
    j[110]=95+x;	j[111]=125+y;
    j[112]=94+x;	j[113]=126+y;
    j[114]=91+x;	j[115]=126+y;
    j[116]=92+x;	j[117]=127+y;
    j[118]=93+x;	j[119]=128+y;
    j[120]=93+x;	j[121]=130+y;
    j[122]=101+x;	j[123]=130+y;
    j[124]=104+x;	j[125]=127+y;
    j[126]=104+x;	j[127]=112+y;
    j[128]=104+x;	j[129]=113+y;
    j[130]=103+x;	j[131]=114+y;
    j[132]=101+x;	j[133]=116+y;
    j[134]=101+x;	j[135]=118+y;
    j[136]=100+x;	j[137]=119+y;
    j[138]=100+x;	j[139]=121+y;
    j[140]=99+x;	j[141]=122+y;
   drawpoly(71,j);

  //eye2
    int r[120];
    r[0]=54+x;	r[1]=127+y;
    r[2]=55+x;	r[3]=128+y;
    r[4]=61+x;	r[5]=128+y;
    r[6]=62+x;	r[7]=127+y;
    r[8]=63+x;	r[9]=127+y;
    r[10]=63+x;	r[11]=126+y;
    r[12]=64+x;	r[13]=126+y;
    r[14]=64+x;	r[15]=124+y;
    r[16]=65+x;	r[17]=124+y;
    r[18]=65+x;	r[19]=115+y;
    r[20]=64+x;	r[21]=115+y;
    r[22]=64+x;	r[23]=114+y;
    r[24]=64+x;	r[25]=113+y;
    r[26]=63+x;	r[27]=113+y;
    r[28]=63+x;	r[29]=112+y;
    r[30]=62+x;	r[31]=111+y;
    r[32]=61+x;	r[33]=111+y;
    r[34]=60+x;	r[35]=110+y;
    r[36]=60+x;	r[37]=109+y;
    r[38]=59+x;	r[39]=109+y;
    r[40]=58+x;	r[41]=108+y;
    r[42]=57+x;	r[43]=108+y;
    r[44]=56+x;	r[45]=107+y;
    r[46]=53+x;	r[47]=107+y;
    r[48]=53+x;	r[49]=108+y;
    r[50]=52+x;	r[51]=108+y;
    r[52]=51+x;	r[53]=109+y;
    r[54]=48+x;	r[55]=112+y;
    r[56]=48+x;	r[57]=114+y;
    r[58]=48+x;	r[59]=112+y;
    r[60]=51+x;	r[61]=109+y;
    r[62]=52+x;	r[63]=108+y;
    r[64]=52+x;	r[65]=119+y;
    r[66]=53+x;	r[67]=119+y;
    r[68]=53+x;	r[69]=121+y;
    r[70]=54+x;	r[71]=122+y;
    r[72]=54+x;	r[73]=127+y;
    r[74]=55+x;	r[75]=128+y;
    r[76]=58+x;	r[77]=128+y;
    r[78]=58+x;	r[79]=123+y;
    r[80]=60+x;	r[81]=123+y;
    r[82]=61+x;	r[83]=122+y;
    r[84]=61+x;	r[85]=121+y;
    r[86]=60+x;	r[87]=120+y;
    r[88]=58+x;	r[89]=120+y;
    r[90]=58+x;	r[91]=115+y;
    r[92]=57+x;	r[93]=115+y;
    r[94]=57+x;	r[95]=108+y;
    r[96]=58+x;	r[97]=108+y;
    r[98]=59+x;	r[99]=109+y;
    r[100]=60+x;	r[101]=109+y;
    r[102]=60+x;	r[103]=110+y;
    r[104]=61+x;	r[105]=111+y;
    r[106]=62+x;	r[107]=111+y;
    r[108]=63+x;	r[109]=110+y;
    r[110]=63+x;	r[111]=109+y;
    r[112]=62+x;	r[113]=108+y;
    r[114]=62+x;	r[115]=107+y;
    r[116]=61+x;	r[117]=106+y;
    r[118]=60+x;	r[119]=106+y;
drawpoly(60,r);

  //nose
    int n[16];
    n[0]=67+x;	n[1]=131+y;
    n[2]=68+x;	n[3]=131+y;
    n[4]=68+x;	n[5]=132+y;
    n[6]=69+x;	n[7]=132+y;
    n[8]=69+x;	n[9]=134+y;
    n[10]=68+x;	n[11]=135+y;
    n[12]=68+x;	n[13]=136+y;
    n[14]=67+x;	n[15]=137+y;
drawpoly(8,n);

  //eyerow1
    int k[26];
    k[0]=83+x;	k[1]=100+y;
    k[2]=85+x;	k[3]=98+y;
    k[4]=87+x;	k[5]=98+y;
    k[6]=87+x;	k[7]=97+y;
    k[8]=90+x;	k[9]=97+y;
    k[10]=90+x;	k[11]=96+y;
    k[12]=99+x;	k[13]=96+y;
    k[14]=99+x;	k[15]=97+y;
    k[16]=103+x;	k[17]=97+y;
    k[18]=103+x;	k[19]=98+y;
    k[20]=105+x;	k[21]=98+y;
    k[22]=106+x;	k[23]=99+y;
    k[24]=107+x;	k[25]=99+y;
drawpoly(13,k);

   //eyerow2
    int l[20];
    l[0]=45+x;	l[1]=94+y;
    l[2]=54+x;	l[3]=94+y;
    l[4]=54+x;	l[5]=95+y;
    l[6]=58+x;	l[7]=95+y;
    l[8]=58+x;	l[9]=96+y;
    l[10]=60+x;	l[11]=96+y;
    l[12]=61+x;	l[13]=97+y;
    l[14]=62+x;	l[15]=97+y;
    l[16]=64+x;	l[17]=99+y;
    l[18]=65+x;	l[19]=100+y;
 drawpoly(10,l);

  //mouse
    int m[6];
    m[0]=67+x;	m[1]=145+y;
    m[2]=83+x;	m[3]=145+y;
    m[4]=84+x;	m[5]=144+y;
 drawpoly(3,m);

//hair
setfillstyle(1,6);
putpixel(60+x,55+y,15);
floodfill(60+x,55+y,a);

//hair
setfillstyle(1,6);
putpixel(115+x,123+y,15);
floodfill(115+x,123+y,a);

//hair
setfillstyle(1,6);
putpixel(50+x,144+y,15);
floodfill(50+x,144+y,a);

//hair
setfillstyle(1,6);
putpixel(105+x,100+y,15);
floodfill(105+x,100+y,a);


//cloth
setfillstyle(1,1);
putpixel(100+x,200+y,15);
floodfill(100+x,200+y,a);

//cloth
setfillstyle(1,1);
putpixel(60+x,200+y,15);
floodfill(60+x,200+y,a);

//cloth
setfillstyle(1,1);
putpixel(95+x,165+y,15);
floodfill(95+x,165+y,a);

 //cloth
setfillstyle(1,1);
putpixel(73+x,165+y,15);
floodfill(73+x,165+y,a);

//face
setfillstyle(1,15);
putpixel(82+x,155+y,15);
floodfill(82+x,155+y,a);

//ear
setfillstyle(1,15);
putpixel(120+x,122+y,15);
floodfill(120+x,122+y,a);

//ear
setfillstyle(1,15);
putpixel(120+x,129+y,15);
floodfill(120+x,129+y,a);

//ear
setfillstyle(1,15);
putpixel(113+x,135+y,15);
floodfill(113+x,135+y,a);

setfillstyle(1,15);
putpixel(55+x,118+y,15);
floodfill(55+x,118+y,a);

setfillstyle(1,15);
putpixel(55+x,100+y,15);
floodfill(55+x,100+y,a);

setfillstyle(1,15);
putpixel(52+x,90+y,15);
floodfill(52+x,90+y,a);

setfillstyle(1,15);
putpixel(60+x,90+y,15);
floodfill(60+x,90+y,a);

setfillstyle(1,15);
putpixel(101+x,90+y,15);
floodfill(101+x,90+y,a);

setfillstyle(1,15);
putpixel(90+x,90+y,15);
floodfill(90+x,90+y,a);

setfillstyle(1,15);
putpixel(100+x,100+y,15);
floodfill(100+x,100+y,a);

setfillstyle(1,6);
putpixel(107+x,118+y,15);
floodfill(107+x,118+y,a);

//tie
setfillstyle(1,8);
putpixel(80+x,210+y,15);
floodfill(80+x,210+y,a);

//tie
setfillstyle(1,8);
putpixel(80+x,195+y,15);
floodfill(80+x,195+y,a);

//tie
setfillstyle(1,8);
putpixel(95+x,173+y,15);
floodfill(95+x,173+y,a);

 //tie
setfillstyle(1,8);
putpixel(70+x,174+y,15);
floodfill(70+x,174+y,a);


//eye1
setfillstyle(1,2);
putpixel(62+x,118+y,15);
floodfill(62+x,118+y,a);

//eye2
setfillstyle(1,2);
putpixel(98+x,118+y,15);
floodfill(98+x,118+y,a);

rectangle(5+x,4+y,166+x,251+y);
setfillstyle(11,5);
putpixel(15+x,118+y,15);
floodfill(15+x,118+y,a);
}
void femalels(int x,int y)
{   int a;
    a=7;
    setcolor(a);
    int p[70];
    p[0]=0+x;	p[1]=18+y;
    p[2]=13+x;	p[3]=12+y;
    p[4]=24+x;	p[5]=12+y;
    p[6]=34+x;	p[7]=22+y;
    p[8]=34+x;	p[9]=36+y;
    p[10]=31+x;	p[11]=30+y;
    p[12]=32+x;	p[13]=48+y;
    p[14]=35+x;	p[15]=48+y;
    p[16]=39+x;	p[17]=42+y;
    p[18]=40+x;	p[19]=20+y;
    p[20]=32+x;	p[21]=10+y;
    p[22]=24+x;	p[23]=12+y;
    p[24]=34+x;	p[25]=22+y;
    p[26]=34+x;	p[27]=36+y;
    p[28]=31+x;	p[29]=30+y;
    p[30]=32+x;	p[31]=48+y;
    p[32]=32+x;	p[33]=54+y;
    p[34]=29+x;	p[35]=54+y;
    p[36]=28+x;	p[37]=51+y;
    p[38]=28+x;	p[39]=26+y;
    p[40]=22+x;	p[41]=24+y;
    p[42]=22+x;	p[43]=31+y;
    p[44]=17+x;	p[45]=24+y;
    p[46]=16+x;	p[47]=32+y;
    p[48]=11+x;	p[49]=22+y;
    p[50]=9+x;	p[51]=32+y;
    p[52]=9+x;	p[53]=54+y;
    p[54]=7+x;	p[55]=54+y;
    p[56]=5+x;	p[57]=50+y;
    p[58]=5+x;	p[59]=31+y;
    p[60]=3+x;	p[61]=35+y;
    p[62]=3+x;	p[63]=27+y;
    p[64]=0+x;	p[65]=28+y;
    p[66]=8+x;	p[67]=18+y;
    p[68]=0+x;	p[69]=18+y;
    drawpoly(35,p);
    line(28+x,54+y,32+x,54+y);

    int l[72];
    l[0]=10+x;	l[1]=43+y;
    l[2]=17+x;	l[3]=47+y;
    l[4]=19+x;	l[5]=47+y;
    l[6]=19+x;	l[7]=50+y;
    l[8]=18+x;	l[9]=50+y;
    l[10]=17+x;	l[11]=49+y;
    l[12]=15+x;	l[13]=49+y;
    l[14]=15+x;	l[15]=56+y;
    l[16]=16+x;	l[17]=56+y;
    l[18]=18+x;	l[19]=54+y;
    l[20]=19+x;	l[21]=54+y;
    l[22]=19+x;	l[23]=55+y;
    l[24]=18+x;	l[25]=56+y;
    l[26]=18+x;	l[27]=58+y;
    l[28]=17+x;	l[29]=59+y;
    l[30]=17+x;	l[31]=60+y;
    l[32]=21+x;	l[33]=60+y;
    l[34]=21+x;	l[35]=54+y;
    l[36]=23+x;	l[37]=54+y;
    l[38]=23+x;	l[39]=60+y;
    l[40]=26+x;	l[41]=60+y;
    l[42]=26+x;	l[43]=56+y;
    l[44]=24+x;	l[45]=54+y;
    l[46]=25+x;	l[47]=55+y;
    l[48]=26+x;	l[49]=54+y;
    l[50]=26+x;	l[51]=48+y;
    l[52]=25+x;	l[53]=48+y;
    l[54]=23+x;	l[55]=50+y;
    l[56]=23+x;	l[57]=54+y;
    l[58]=19+x;	l[59]=54+y;
    l[60]=19+x;	l[61]=50+y;
    l[62]=23+x;	l[63]=50+y;
    l[64]=22+x;	l[65]=47+y;
    l[66]=28+x;	l[67]=44+y;
    l[68]=22+x;	l[69]=47+y;
    l[70]=17+x;	l[71]=47+y;
    drawpoly(36,l);

    int q[164];
    q[0]=14+x;	q[1]=54+y;
    q[2]=10+x;	q[3]=60+y;
    q[4]=8+x;	q[5]=62+y;
    q[6]=14+x;	q[7]=66+y;
    q[8]=12+x;	q[9]=64+y;
    q[10]=7+x;	q[11]=71+y;
    q[12]=7+x;	q[13]=74+y;
    q[14]=4+x;	q[15]=75+y;
    q[16]=1+x;	q[17]=74+y;
    q[18]=1+x;	q[19]=71+y;
    q[20]=2+x;	q[21]=68+y;
    q[22]=5+x;	q[23]=69+y;
    q[24]=10+x;	q[25]=63+y;
    q[26]=8+x;	q[27]=62+y;
    q[28]=10+x;	q[29]=60+y;
    q[30]=15+x;	q[31]=63+y;
    q[32]=16+x;	q[33]=62+y;
    q[34]=21+x;	q[35]=63+y;
    q[36]=21+x;	q[37]=65+y;
    q[38]=17+x;	q[39]=65+y;
    q[40]=14+x;	q[41]=66+y;
    q[42]=17+x;	q[43]=65+y;
    q[44]=17+x;	q[45]=68+y;
    q[46]=4+x;	q[47]=83+y;
    q[48]=12+x;	q[49]=77+y;
    q[50]=12+x;	q[51]=88+y;
    q[52]=17+x;	q[53]=80+y;
    q[54]=17+x;	q[55]=96+y;
    q[56]=10+x;	q[57]=99+y;
    q[58]=10+x;	q[59]=104+y;
    q[60]=11+x;	q[61]=105+y;
    q[62]=14+x;	q[63]=105+y;
    q[64]=20+x;	q[65]=102+y;
    q[66]=20+x;	q[67]=80+y;
    q[68]=19+x;	q[69]=79+y;
    q[70]=17+x;	q[71]=80+y;
    q[72]=19+x;	q[73]=79+y;
    q[74]=20+x;	q[75]=80+y;
    q[76]=24+x;	q[77]=86+y;
    q[78]=25+x;	q[79]=98+y;
    q[80]=23+x;	q[81]=101+y;
    q[82]=23+x;	q[83]=105+y;
    q[84]=28+x;	q[85]=107+y;
    q[86]=32+x;	q[87]=97+y;
    q[88]=28+x;	q[89]=94+y;
    q[90]=26+x;	q[91]=82+y;
    q[92]=24+x;	q[93]=86+y;
    q[94]=26+x;	q[95]=82+y;
    q[96]=26+x;	q[97]=80+y;
    q[98]=32+x;	q[99]=85+y;
    q[100]=32+x;	q[101]=81+y;
    q[102]=36+x;	q[103]=81+y;
    q[104]=26+x;	q[105]=69+y;
    q[106]=26+x;	q[107]=65+y;
    q[108]=23+x;       	q[109]=65+y;
    q[110]=23+x;	q[111]=63+y;
    q[112]=29+x;	q[113]=63+y;
    q[114]=34+x;	q[115]=58+y;
    q[116]=34+x;	q[117]=61+y;
    q[118]=29+x;	q[119]=65+y;
    q[120]=30+x;	q[121]=64+y;
    q[122]=35+x;	q[123]=73+y;
    q[124]=35+x;	q[125]=77+y;
    q[126]=38+x;	q[127]=79+y;
    q[128]=41+x;	q[129]=76+y;
    q[130]=41+x;	q[131]=73+y;
    q[132]=39+x;	q[133]=71+y;
    q[134]=37+x;	q[135]=71+y;
    q[136]=32+x;	q[137]=62+y;
    q[138]=34+x;	q[139]=61+y;
    q[140]=34+x;	q[141]=58+y;
    q[142]=32+x;	q[143]=54+y;
    q[144]=27+x;	q[145]=54+y;
    q[146]=32+x;	q[147]=54+y;
    q[148]=34+x;	q[149]=58+y;
    q[150]=28+x;	q[151]=63+y;
    q[152]=23+x;	q[153]=63+y;
    q[154]=23+x;	q[155]=65+y;
    q[156]=29+x;	q[157]=65+y;
    q[158]=32+x;	q[159]=62+y;
    q[160]=29+x;	q[161]=65+y;
    q[162]=17+x;	q[163]=65+y;
    drawpoly(82,q);

    int r[22];
    r[0]=10+x;	r[1]=34+y;
    r[2]=11+x;	r[3]=33+y;
    r[4]=12+x;	r[5]=32+y;
    r[6]=12+x;	r[7]=38+y;
    r[8]=13+x;	r[9]=38+y;
    r[10]=13+x;	r[11]=41+y;
    r[12]=14+x;	r[13]=41+y;
    r[14]=15+x;	r[15]=40+y;
    r[16]=15+x;	r[17]=34+y;
    r[18]=14+x;	r[19]=33+y;
    r[20]=12+x;	r[21]=33+y;
    drawpoly(11,r);

    int u[22];
    u[0]=21+x;	u[1]=33+y;
    u[2]=23+x;	u[3]=33+y;
    u[4]=23+x;	u[5]=38+y;
    u[6]=25+x;	u[7]=38+y;
    u[8]=25+x;	u[9]=39+y;
    u[10]=24+x;	u[11]=40+y;
    u[12]=24+x;	u[13]=41+y;
    u[14]=28+x;	u[15]=41+y;
    u[16]=28+x;	u[17]=34+y;
    u[18]=27+x;	u[19]=34+y;
    u[20]=23+x;	u[21]=31+y;
    drawpoly(11,u);
    line(17+x,44+y,20+x,44+y);

//hair
setfillstyle(1,1);
putpixel(24+x,18+y,15);
floodfill(24+x,18+y,a);

setfillstyle(1,1);
putpixel(36+x,18+y,15);
floodfill(36+x,18+y,a);

//body
setfillstyle(1,15);
putpixel(19+x,40+y,15);
floodfill(19+x,40+y,a);

setfillstyle(1,15);
putpixel(38+x,74+y,15);
floodfill(38+x,74+y,a);

setfillstyle(1,15);
putpixel(4+x,72+y,15);
floodfill(4+x,72+y,a);

setfillstyle(1,15);
putpixel(27+x,99+y,15);
floodfill(27+x,99+y,a);

setfillstyle(1,15);
putpixel(17+x,101+y,15);
floodfill(17+x,101+y,a);

setfillstyle(1,15);
putpixel(26+x,29+y,15);
floodfill(26+x,29+y,a);

//bow
setfillstyle(1,5);
putpixel(20+x,52+y,15);
floodfill(20+x,52+y,a);

setfillstyle(1,5);
putpixel(19+x,57+y,15);
floodfill(19+x,57+y,a);

setfillstyle(1,5);
putpixel(16+x,52+y,15);
floodfill(16+x,52+y,a);

setfillstyle(1,5);
putpixel(24+x,52+y,15);
floodfill(24+x,52+y,a);

setfillstyle(1,5);
putpixel(25+x,57+y,15);
floodfill(25+x,57+y,a);

//cloth
setfillstyle(1,11);
putpixel(14+x,59+y,15);
floodfill(14+x,59+y,a);

//screen
setfillstyle(1,12);
putpixel(18+x,64+y,15);
floodfill(18+x,64+y,a);

setfillstyle(1,12);
putpixel(26+x,64+y,15);
floodfill(26+x,64+y,a);

setfillstyle(1,12);
putpixel(33+x,60+y,15);
floodfill(33+x,60+y,a);

setfillstyle(1,12);
putpixel(30+x,62+y,15);
floodfill(30+x,62+y,a);


setfillstyle(1,1);
putpixel(20+x,73+y,15);
floodfill(20+x,73+y,a);

//eye
setfillstyle(1,8);
putpixel(14+x,37+y,15);
floodfill(14+x,37+y,a);

setfillstyle(1,8);
putpixel(26+x,36+y,15);
floodfill(26+x,36+y,a);
}
void malers(int x,int y)
{   int a;
    a=7;
    setcolor(a);
    int p[46];
    p[0]=36+x;	p[1]=2+y;
    p[2]=32+x;	p[3]=8+y;
    p[4]=42+x;	p[5]=11+y;
    p[6]=37+x;	p[7]=14+y;
    p[8]=46+x;	p[9]=20+y;
    p[10]=39+x;	p[11]=18+y;
    p[12]=44+x;	p[13]=26+y;
    p[14]=35+x;	p[15]=20+y;
    p[16]=38+x;	p[17]=32+y;
    p[18]=29+x;	p[19]=18+y;
    p[20]=30+x;	p[21]=28+y;
    p[22]=24+x;	p[23]=19+y;
    p[24]=21+x;	p[25]=29+y;
    p[26]=20+x;	p[27]=22+y;
    p[28]=18+x;	p[29]=35+y;
    p[30]=15+x;	p[31]=25+y;
    p[32]=12+x;	p[33]=34+y;
    p[34]=10+x;	p[35]=22+y;
    p[36]=6+x;	p[37]=26+y;
    p[38]=10+x;	p[39]=15+y;
    p[40]=17+x;	p[41]=8+y;
    p[42]=25+x;	p[43]=8+y;
    p[44]=36+x;	p[45]=2+y;
    drawpoly(23,p);

    int i[216];
    i[0]=14+x;	i[1]=29+y;
    i[2]=15+x;	i[3]=35+y;
    i[4]=23+x;	i[5]=40+y;
    i[6]=28+x;	i[7]=44+y;
    i[8]=25+x;	i[9]=47+y;
    i[10]=21+x;	i[11]=43+y;
    i[12]=23+x;	i[13]=40+y;
    i[14]=21+x;	i[15]=43+y;
    i[16]=11+x;	i[17]=51+y;
    i[18]=13+x;	i[19]=54+y;
    i[20]=8+x;	i[21]=58+y;
    i[22]=5+x;	i[23]=59+y;
    i[24]=5+x;	i[25]=62+y;
    i[26]=8+x;	i[27]=65+y;
    i[28]=11+x;	i[29]=63+y;
    i[30]=11+x;	i[31]=60+y;
    i[32]=15+x;	i[33]=56+y;
    i[34]=13+x;	i[35]=54+y;
    i[36]=15+x;	i[37]=56+y;
    i[38]=18+x;	i[39]=57+y;
    i[40]=23+x;	i[41]=49+y;
    i[42]=23+x;	i[43]=61+y;
    i[44]=21+x;	i[45]=73+y;
    i[46]=23+x;	i[47]=73+y;
    i[48]=23+x;	i[49]=81+y;
    i[50]=23+x;	i[51]=90+y;
    i[52]=22+x;	i[53]=91+y;
    i[54]=22+x; 	i[55]=94+y;
    i[56]=23+x;	i[57]=95+y;
    i[58]=33+x;	i[59]=95+y;
    i[60]=34+x; 	i[61]=94+y;
    i[62]=34+x;	i[63]=87+y;
    i[64]=33+x;	i[65]=86+y;
    i[66]=26+x;	i[67]=86+y;
    i[68]=26+x;	i[69]=81+y;
    i[70]=23+x;	i[71]=81+y;
    i[72]=26+x;	i[73]=81+y;
    i[74]=26+x;	i[75]=73+y;
    i[76]=21+x;	i[77]=73+y;
    i[78]=29+x;	i[79]=73+y;
    i[80]=29+x;	i[81]=68+y;
    i[82]=32+x;	i[83]=68+y;
    i[84]=32+x;	i[85]=73+y;
    i[86]=33+x;	i[87]=73+y;
    i[88]=33+x;	i[89]=81+y;
    i[90]=32+x;	i[91]=81+y;
    i[92]=32+x;	i[93]=86+y;
    i[94]=33+x;	i[95]=86+y;
    i[96]=34+x;	i[97]=87+y;
    i[98]=34+x;	i[99]=94+y;
    i[100]=35+x;	i[101]=94+y;
    i[102]=36+x;	i[103]=95+y;
    i[104]=43+x;	i[105]=95+y;
    i[106]=44+x;	i[107]=94+y;
    i[108]=44+x;	i[109]=89+y;
    i[110]=43+x;	i[111]=88+y;
    i[112]=38+x;	i[113]=88+y;
    i[114]=38+x;	i[115]=87+y;
    i[116]=36+x;	i[117]=87+y;
    i[118]=36+x;	i[119]=81+y;
    i[120]=33+x;	i[121]=81+y;
    i[122]=36+x;	i[123]=81+y;
    i[124]=36+x;	i[125]=73+y;
    i[126]=33+x; i[127]=73+y;
    i[128]=38+x;	i[129]=73+y;
    i[130]=36+x;	i[131]=61+y;
    i[132]=23+x;	i[133]=61+y;
    i[134]=36+x;	i[135]=61+y;
    i[136]=36+x;	i[137]=52+y;
    i[138]=44+x;	i[139]=46+y;
    i[140]=44+x;	i[141]=40+y;
    i[142]=48+x;	i[143]=39+y;
    i[144]=48+x;	i[145]=34+y;
    i[146]=55+x;	i[147]=34+y;
    i[148]=56+x;	i[149]=35+y;
    i[150]=56+x;	i[151]=39+y;
    i[152]=54+x;	i[153]=41+y;
    i[154]=51+x;	i[155]=41+y;
    i[156]=51+x;	i[157]=38+y;
    i[158]=50+x;	i[159]=38+y;
    i[160]=50+x;	i[161]=36+y;
    i[162]=51+x;	i[163]=36+y;
    i[164]=51+x;	i[165]=34+y;
    i[166]=51+x;	i[167]=36+y;
    i[168]=50+x;	i[169]=36+y;
    i[170]=50+x;	i[171]=38+y;
    i[172]=51+x;	i[173]=38+y;
    i[174]=51+x;	i[175]=41+y;
    i[176]=44+x;	i[177]=44+y;
    i[178]=44+x;	i[179]=40+y;
    i[180]=42+x;	i[181]=38+y;
    i[182]=34+x;	i[183]=43+y;
    i[184]=31+x;	i[185]=41+y;
    i[186]=31+x;	i[187]=46+y;
    i[188]=34+x;	i[189]=43+y;
    i[190]=31+x;	i[191]=46+y;
    i[192]=31+x;	i[193]=49+y;
    i[194]=33+x;	i[195]=57+y;
    i[196]=30+x;	i[197]=60+y;
    i[198]=27+x;	i[199]=57+y;
    i[200]=29+x;	i[201]=49+y;
    i[202]=31+x;	i[203]=49+y;
    i[204]=29+x;	i[205]=49+y;
    i[206]=28+x;	i[207]=44+y;
    i[208]=31+x;	i[209]=41+y;
    i[210]=33+x;	i[211]=40+y;
    i[212]=38+x;	i[213]=36+y;
    i[214]=38+x;	i[215]=32+y;
    drawpoly(108,i);

    int r[16];
    r[0]=21+x;	r[1]=29+y;
    r[2]=21+x; 	r[3]=35+y;
    r[4]=25+x; 	r[5]=35+y;
    r[6]=24+x;	r[7]=34+y;
    r[8]=24+x;	r[9]=33+y;
    r[10]=25+x;	r[11]=32+y;
    r[12]=25+x;	r[13]=29+y;
    r[14]=21+x;	r[15]=29+y;
    drawpoly(8,r);

    int w[18];
    w[0]=32+x;	w[1]=28+y;
    w[2]=32+x;	w[3]=34+y;
    w[4]=36+x;	w[5]=34+y;
    w[6]=36+x;	w[7]=33+y;
    w[8]=35+x;	w[9]=32+y;
    w[10]=35+x;	w[11]=31+y;
    w[12]=36+x;	w[13]=30+y;
    w[14]=36+x;	w[15]=28+y;
    w[16]=32+x;	w[17]=28+y;
    drawpoly(9,w);
    line(28+x,39+y,30+x,39+y);

setfillstyle(1,15);
putpixel(28+x,34+y,15);
floodfill(28+x,34+y,a);

setfillstyle(1,15);
putpixel(8+x,61+y,15);
floodfill(8+x,61+y,a);

setfillstyle(1,15);
putpixel(53+x,37+y,15);
floodfill(53+x,37+y,a);

setfillstyle(1,15);
putpixel(47+x,41+y,15);
floodfill(47+x,41+y,a);

setfillstyle(1,15);
putpixel(34+x,78+y,15);
floodfill(34+x,78+y,a);

setfillstyle(1,15);
putpixel(24+x,77+y,15);
floodfill(24+x,77+y,a);

setfillstyle(1,1);
putpixel(37+x,46+y,15);
floodfill(37+x,46+y,a);

setfillstyle(1,1);
putpixel(25+x,53+y,15);
floodfill(25+x,53+y,a);

setfillstyle(1,8);
putpixel(30+x,56+y,15);
floodfill(30+x,56+y,a);

setfillstyle(1,8);
putpixel(30+x,47+y,15);
floodfill(30+x,47+y,a);

setfillstyle(1,3);
putpixel(29+x,90+y,15);
floodfill(29+x,90+y,a);

setfillstyle(1,3);
putpixel(41+x,91+y,15);
floodfill(41+x,91+y,a);

setfillstyle(1,6);
putpixel(24+x,13+y,15);
floodfill(24+x,13+y,a);

setfillstyle(1,4);
putpixel(27+x,66+y,15);
floodfill(27+x,66+y,a);

setfillstyle(1,3);
putpixel(33+x,32+y,15);
floodfill(33+x,32+y,a);

setfillstyle(1,3);
putpixel(23+x,31+y,15);
floodfill(23+x,31+y,a);

setfillstyle(1,3);
putpixel(34+x,84+y,15);
floodfill(34+x,84+y,a);
}
void chapter1(int x,int y)
{    setcolor(15);
     settextstyle(0,0,0);
     outtextxy(20,350,"On one lovely Island. There are 2 people live on it.");
     outtextxy(20,380,"They are very happy with their live.");

     setcolor(10);
     settextstyle(7,0,1);
     outtextxy(480,440,"press any key");

     setcolor(7);
     setfillstyle(1,8);
     ellipse(300,320,360,180,290,100);
     line(0,320,639,320);
     putpixel(320,300,15);
     floodfill(320,300,7);

     femalels(400,140);
     malers(200,150);
     rectangle(0,320,639,479);

     setfillstyle(1,4);
     line(520,20,490,20);
     line(530,50,500,65);
     line(550,80,530,100);
     line(580,100,560,130);
     line(620,120,620,150);
     fillellipse(639,0,100,100);

    int p[26];
    p[0]=156+x;	p[1]=384+y;
    p[2]=174+x;	p[3]=384+y;
    p[4]=174+x;	p[5]=285+y;
    p[6]=212+x;	p[7]=285+y;
    p[8]=196+x;	p[9]=260+y;
    p[10]=213+x;	p[11]=260+y;
    p[12]=169+x;	p[13]=160+y;
    p[14]=116+x;	p[15]=258+y;
    p[16]=139+x;	p[17]=258+y;
    p[18]=119+x;	p[19]=285+y;
    p[20]=177+x;	p[21]=285+y;
    p[22]=156+x;	p[23]=285+y;
    p[24]=156+x;	p[25]=384+y;
    drawpoly(13,p);

    setfillstyle(1,2);
    floodfill(165+x,251+y,7);

    setfillstyle(1,6);
    floodfill(165+x,314+y,7);
    floodfill(164+x,381+y,7);

    setfillstyle(1,1);
    floodfill(0,0,7);
    getch();
    cleardevice();
}
void chapter2(int x,int y)
{   int a=0,s=20,d=10,f=-40,g=0,h=10,j=10,k=-200;
    setcolor(7);
    settextstyle(0,0,0);
    ellipse(320+x,50+y,0,360,100,20);
    ellipse(320+x,70+y,0,360,90,20);
    ellipse(320+x,90+y,0,360,80,20);
    ellipse(320+x,110+y,0,360,70,20);
    ellipse(320+x,130+y,0,360,60,20);
    ellipse(320+x,150+y,0,360,50,20);
    ellipse(320+x,170+y,0,360,40,20);
    ellipse(320+x,190+y,0,360,30,20);
    ellipse(320+x,210+y,0,360,20,15);
    ellipse(320+x,225+y,0,360,10,5);
    setcolor(15);
    outtextxy(20,350,"One day storm is coming from another Dimension.");
    outtextxy(20,380,"It destroyed everything and break island into many parts.");

    setcolor(7);
    int q[10];
    q[0]=63+a;	q[1]=91+s;
    q[2]=176+a;	q[3]=78+s;
    q[4]=147+a;	q[5]=168+s;
    q[6]=76+a;	q[7]=157+s;
    q[8]=63+a;	q[9]=91+s;
    drawpoly(5,q);
    setfillstyle(1,8);
    floodfill(135+a,109+s,7);

    int w[10];
    w[0]=212+d;	w[1]=244+f;
    w[2]=99+d;	w[3]=249+f;
    w[4]=93+d;	w[5]=343+f;
    w[6]=195+d;	w[7]=331+f;
    w[8]=212+d;	w[9]=244+f;
    drawpoly(5,w);
    setfillstyle(1,8);
    floodfill(149+d,298+f,7);

    int e[10];
    e[0]=384+g;	e[1]=150+h;
    e[2]=308+g;	e[3]=218+h;
    e[4]=385+g;	e[5]=268+h;
    e[6]=434+g;	e[7]=217+h;
    e[8]=384+g;	e[9]=150+h;
    drawpoly(5,e);
    setfillstyle(1,8);
    floodfill(358+g,211+h,7);

    int r[10];
    r[0]=397+j;	r[1]=359+k;
    r[2]=443+j;	r[3]=297+k;
    r[4]=514+j;	r[5]=372+k;
    r[6]=463+j;	r[7]=409+k;
    r[8]=397+j;	r[9]=359+k;
    drawpoly(5,r);
    setfillstyle(1,8);
    floodfill(450+j,360+k,7);

    line(0,320,639,320);
    setfillstyle(1,1);
    floodfill(10,10,7);


    setcolor(10);
    settextstyle(7,0,1);
    outtextxy(480,440,"press any key");

    setcolor(7);
    rectangle(0,320,639,479);
    getch();
    cleardevice();
}

void chapter3()
{   femalels(410,150);
    malers(240,140);
    settextstyle(0,0,0);
    setcolor(7);
    line(0,320,639,320);
    setfillstyle(1,1);
    floodfill(10,10,7);


     setfillstyle(1,4);
     line(520,20,490,20);
     line(530,50,500,65);
     line(550,80,530,100);
     line(580,100,560,130);
     line(620,120,620,150);
     fillellipse(639,0,100,100);

     line(0,200,200,150);
     line(200,150,300,200);
     line(300,200,280,320);
     setfillstyle(1,8);
     putpixel(500,300,15);
     floodfill(10,300,7);


     line(639,200,500,150);
     line(500,150,400,250);
     line(400,250,400,320);
     setfillstyle(1,8);
     floodfill(500,300,7);


    setcolor(15);
    outtextxy(20,350,"The island was seperated. And They were seperated too.");
    outtextxy(20,380,"But They wanted to live together again.");

    setcolor(10);
    settextstyle(7,0,1);
    outtextxy(480,440,"press any key");

     setcolor(7);
    rectangle(0,320,639,479);
    getch();
    cleardevice();
}
void chapter4()
{   int a=400,s=0,d=-40,f=-40;
    setcolor(7);
    settextstyle(0,0,0);
    line(0,320,639,320);
    setcolor(15);
    outtextxy(20,350,"They are floting on the sea. Then they try to find the new island");
    outtextxy(20,380,"And they find for 5 days.");

    femalels(480,20);
    malers(100,140);

    setcolor(7);
    int q[10];
    q[0]=63+a;	q[1]=91+s;
    q[2]=176+a;	q[3]=78+s;
    q[4]=147+a;	q[5]=168+s;
    q[6]=76+a;	q[7]=157+s;
    q[8]=63+a;	q[9]=91+s;
    drawpoly(5,q);
    setfillstyle(1,8);
    floodfill(135+a,109+s,7);

    int w[10];
    w[0]=212+d;	w[1]=244+f;
    w[2]=99+d;	w[3]=249+f;
    w[4]=93+d;	w[5]=343+f;
    w[6]=195+d;	w[7]=331+f;
    w[8]=212+d;	w[9]=244+f;
    drawpoly(5,w);
    setfillstyle(1,8);
    floodfill(149+d,298+f,7);

    line(0,0,639,320);
    setcolor(10);
    settextstyle(7,0,1);
    outtextxy(480,440,"press any key");

    setcolor(7);
    rectangle(0,320,639,479);

    setfillstyle(1,11);
    putpixel(10,10,15);
    floodfill(10,10,7);

    setfillstyle(1,1);
    putpixel(50,10,15);
    floodfill(50,10,7);
    getch();
    cleardevice();
}
void chapter5(int x,int y)
{    setcolor(7);
    settextstyle(0,0,0);
     setfillstyle(1,4);
     line(520,20,490,20);
     line(530,50,500,65);
     line(550,80,530,100);
     line(580,100,560,130);
     line(620,120,620,150);
     fillellipse(639,0,100,100);


    femalels(210,135);
    malers(150,140);

    setcolor(7);
    line(0,320,639,320);

    ellipse(0,320,360,180,600,200);
    setcolor(15);
    outtextxy(20,350,"Finally, they can live together again at the new island.");
    setcolor(14);
    settextstyle(5,0,5);
    outtextxy(230,380,"The End");

    setcolor(7);
    int p[26];
    p[0]=156+x;	p[1]=384+y;
    p[2]=174+x;	p[3]=384+y;
    p[4]=174+x;	p[5]=285+y;
    p[6]=212+x;	p[7]=285+y;
    p[8]=196+x;	p[9]=260+y;
    p[10]=213+x;	p[11]=260+y;
    p[12]=169+x;	p[13]=160+y;
    p[14]=116+x;	p[15]=258+y;
    p[16]=139+x;	p[17]=258+y;
    p[18]=119+x;	p[19]=285+y;
    p[20]=177+x;	p[21]=285+y;
    p[22]=156+x;	p[23]=285+y;
    p[24]=156+x;	p[25]=384+y;
    drawpoly(13,p);

    setfillstyle(1,2);
    floodfill(165+x,251+y,7);

    setfillstyle(1,6);
    floodfill(165+x,310+y,7);
    floodfill(164+x,381+y,7);

    setfillstyle(1,1);
    floodfill(10,10,7);

    setfillstyle(1,8);
    putpixel(50,200,15);
    floodfill(50,200,7);

    setcolor(7);
    rectangle(0,320,639,479);
    getch();
    cleardevice();
}

