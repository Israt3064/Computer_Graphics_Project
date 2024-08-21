#include<graphics.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
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
    else{
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


    return 0;

}
