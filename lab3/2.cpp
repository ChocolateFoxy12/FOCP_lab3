#include <iostream>
#include <array>

using namespace std;

struct Point2D
{
    double x;
    double y;
};

int main()
{
    Point2D mypoint;

    mypoint.x=3.3;
    mypoint.y=5.5;

    cout<<"the value of x: "<<mypoint.x<<endl;
    cout<<"the value of y: "<<mypoint.y<<endl;

    return 0;}
