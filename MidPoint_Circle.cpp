#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

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

void MP(int x, int y, int r)
{
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



int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm, "");
    int r;
    cout << "Enter the redius: ";
    cin >> r;
    MP(200,200,r);
    getch();
    return 0;
}

