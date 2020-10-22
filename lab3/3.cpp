#include <iostream>
#include <array>

using namespace std;

struct Point2D
{
    double x;
    double y;
};

Point2D create_point()
{
    Point2D tmp;
    tmp.x=rand()%10;
    tmp.y=rand()%10;

    return tmp;
}

int main()
{
    array<Point2D,10>points;
    for (int i=0;i<10;i++)
    {
        points[i]=create_point();
        cout<<"point["<<i<<"]=("<<points[i].x<<","<<points[i].y<<")"<<endl;
    }


    return 0;
}
