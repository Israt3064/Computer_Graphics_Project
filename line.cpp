#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
   int gd = DETECT,gm;
   initgraph(&gd,&gm," ");

   line(100,30,200,30);       //Alphabet "I"
   line(100,130,200,130);
   line(150,30,150,130);

   line(250,30,300,30);       //Alphabet "S"
   line(250,30,250,80);
   line(250,80,300,80);
   line(300,80,300,130);
   line(250,130,300,130);

   line(350,30,350,130);      //Alphabet "R"
   line(350,30,400,30);
   line(400,30,400,80);
   line(350,80,400,80);
   line(350,80,400,130);

   line(450,30,425,130);      //Alphabet "A"
   line(450,30,500,130);
   line(435,80,475,80);

   line(500,30,550,30);       //Alphabet "T"
   line(525,30,525,130);



    getch();
    closegraph();
    return 0;
}
