#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
#define pbb pop_back
#define nl '\n'
using namespace std;
void plotpoints(int x, int y, int x1, int y1)
{
    putpixel(x+x1, y+y1,7);
    putpixel(x+x1, y-y1,7);
    putpixel(x-x1, y+y1,7);
    putpixel(x-x1, y-y1,7);
    putpixel(x+y1, y+x1,7);
    putpixel(x+y1, y-x1,7);
    putpixel(x-y1, y+x1,7);
    putpixel(x-y1, y-x1,7);
}

void MidPoint_Circle(int x, int y, int r)
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm, "");

    int x1 = 0;
    int y1 = r;
    int p = 1-r;

    plotpoints(x, y, x1, y1);
    while(x1<y1)
    {
        x1++;
        if(p<0)
        {
            p = p + (2*x1) + 1;
        }
        else
        {
            y1--;
            p = p + (2*x1) + 1 - (2*y1);
        }
        plotpoints(x, y, x1, y1);
        delay(100);


    }


}

void DDA()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int x1, y1, x2, y2;
    cout << "Enter the value of x1 & y1: ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 & y2: ";
    cin >> x2 >> y2;

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int x = x1, y = y1;
    int temp;
    if(dx > dy)
    {
        temp = dx;
    }
    else
    {
        temp = dy;
    }

    x = round(((double)dx/(double)temp));
    y = round(((double)dy/(double)temp));

    while(x1 <= x2 or y1 <= y2)
    {
        putpixel(x1, y1, GREEN);

        x1 += x;
        y1 += y;

        delay(200);

    }

    getch();
    closegraph();
}

void Create_Emoji()
{
    int gd =  DETECT, gm;
    initgraph(&gd,&gm," ");

    circle(300,200,80);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300,200,15);


    ellipse(280,180,0,360,8,13);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(280,180,15);


    ellipse(320,180,0,360,8,13);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(320,180,15);


    setcolor(BLACK);
    ellipse(300,225,185,355,32,20);
    ellipse(300,225,185,355,31,19);
    ellipse(300,225,185,355,30,18);
    ellipse(300,225,185,355,29,17);



    getch();

    closegraph();

}

void Doreamon()
{
     int gd =  DETECT, gm;
    initgraph(&gd,&gm," ");
    setbkcolor(WHITE);
    setcolor(BLUE);
    for(int i=10; i<600; i++)
    {
        arc(100+i, 300, 120, 60, 30);     // head
        arc(100+i, 300, 310, 230, 50);

        ellipse(92+i, 270, 0, 360, 8, 15);      //eyes
        ellipse(108+i, 270, 0, 360, 8, 15);
        circle(92+i, 270, 2);
        circle(108+i, 270, 2);

        circle(100+i, 300, 5);                     //nose
        setfillstyle(SOLID_FILL, LIGHTRED);
        floodfill(100+i, 300, BLUE);

        line(50+i, 338, 150+i, 338);              //chain
        line(50+i, 345, 150+i, 345);
        line(50+i, 338, 50+i, 345);
        line(150+i, 338, 150+i, 345);
        setfillstyle(SOLID_FILL, LIGHTRED);
        floodfill(100+i, 342, BLUE);
         setfillstyle(SOLID_FILL, CYAN);
        floodfill(52+i, 300, WHITE);

        line(110+i, 300, 160+i, 300);       // mustach
        line(110+i, 295, 160+i, 275);
        line(110+i, 305, 160+i, 325);
        line(90+i, 300, 40+i, 300);
        line(90+i, 295, 40+i, 275);
        line(90+i, 305, 40+i, 325);

        line(100+i, 305, 100+i, 325);      //nose

        arc(100+i, 315, 180, 0, 10);       //mouth

        line(52+i, 345, 52+i, 450);
        line(148+i, 345, 148+i, 450);
        line(52+i, 450, 82+i, 450);
        line(148+i, 450, 118+i, 450);
        line(82+i, 450, 82+i, 432);
        line(118+i, 450, 118+i, 432);
        line(82+i, 432, 118+i, 432);

        circle(67+i, 465, 15);                  // legs
        circle(133+i, 465, 15);

        circle(100+i, 390, 30);                  // stomach
        arc(100+i, 390, 180, 0, 18);
        line(82+i, 390, 118+i, 390);

        circle(100+i, 352, 5);                   // bell
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(100+i, 352, BLUE);

        circle(15+i, 410, 15);                     // right hand
        line(10+i, 395, 52+i, 360);
        line(26+i, 420, 52+i, 390);

        circle(185+i, 410, 15);                     // left hand
        line(172+i, 418, 148+i, 390);
        line(197+i, 400, 148+i, 360);
        setfillstyle(SOLID_FILL, CYAN);
        floodfill(48+i, 385, BLUE);
         setfillstyle(SOLID_FILL, CYAN);
        floodfill(152+i, 380, BLUE);
         setfillstyle(SOLID_FILL, CYAN);
        floodfill(53+i, 360, BLUE);

        delay(100);
        cleardevice();

    }
    getch();
    closegraph();

}

void menu()
{
    cout << "Main Menu " << nl << nl;
    cout << "1.Midpoint Circle."<< nl;
    cout << "2.DDA Algorithm Emplimentation." << nl;
    cout << "3.Create Emoji." << nl;
    cout << "4.Moving Doreamon" << nl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
    {
    case 1:
        MidPoint_Circle(200,200,100);

        break;
    case 2:
        DDA();

        break;
    case 3:
        Create_Emoji();

        break;
    case 4:
        Doreamon();

        break;
    }

}
int main()
{
    menu();
    return 0;

}

