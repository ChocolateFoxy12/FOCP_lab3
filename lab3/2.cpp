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
    tmp.x=rand()%100;
    tmp.y=rand()%100;

    return tmp;
}

void initialize_in_place(Point2D& point)
{
    point.x=rand()%10;
    point.y=rand()%10;

    cout<<"the value of x: "<<point.x<<endl;
    cout<<"the value of y: "<<point.y<<endl;
}

int main()
{
    //declare
    Point2D my_point=create_point();

    //initialize
    cout<<"the value of x: "<<my_point.x<<endl;
    cout<<"the value of y: "<<my_point.y<<endl;

    //declare
    Point2D empty_point;
    initialize_in_place(empty_point);

    //print
    cout<<"the value of x: "<<empty_point.x<<endl;
    cout<<"the value of y: "<<empty_point.y<<endl;

    return 0;
}
