#include <iostream>

using namespace std;
int main()
{
    double p;
    drawXY();
    for(p=0.6;p<=1;p=p+0.1)
        draw(p);
    system("PAUSE");
    return 0;
}
