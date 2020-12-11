#include <stdio.h>
#include <graphics.h>
#include <math.h>

void frfr(int x, int y, int r, int n)
{
    if (n!=0)
    {
        circle(x, y, r);
        frfr(x+r/2, y, r/2, n-1);
        frfr(x-r/2, y, r/2, n-1);
        frfr(x, y+r/2, r/2, n-1);
        frfr(x, y-r/2, r/2, n-1);
    }
}

int main()
{
    int gd = DETECT;
    int gm;
    int n;
    scanf("%d", &n);
    initgraph(&gd, &gm,"");
    setcolor (YELLOW);
    frfr(300, 220, 200, n);
    readkey();
    closegraph();
    return 0;
}
