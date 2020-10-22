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
    //declare
    Point2D mypoint;

    //initialize
    mypoint.x=3.3;
    mypoint.y=5.5;

    //print
    cout<<"the value of x: "<<mypoint.x<<endl;
    cout<<"the value of y: "<<mypoint.y<<endl;

    return 0;
}
