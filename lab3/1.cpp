#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,10> numbers={6,2,8,5,1,3,7,4};

    for(int i=0;i<10;i++)
    {
        if (numbers[i]>numbers[i+1])
        {
            int left=numbers[i];
            numbers[i]=numbers[i+1];
            numbers[i+1]=left;
        }
    }

    return 0;
}
