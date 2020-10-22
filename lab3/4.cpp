#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

struct Matrix2D
{
    vector<vector<int>> contents;

};

void input_matrix()
{
    //sak: how many rows
    //ask: how many columns
    //read r rows c times
    int columns, rows;

    cout<<"number of rows: "; cin>>rows; cout<<endl;
    cout<<"number of columns:"; cin>>columns; cout<<endl;

    for (int i=0;i<3;i++)
    {
        contents.push_back(vector<int>())
        for(int j=0;j<3;j++)
        {

        }
    }
}

void print()
{
    cout<<"contents of rhe matrix: "<<endl;

    int rows=contents.size();
    int cols=contents[0].size();

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<contents[i][j]<<",";
        }
        cout<<endl;
    }
}

int main()
{
    //A 4x2, B 2x3
    //declare the matrices
    Matrix2D a;
    Matrix2D b;

    //initialize the contents
    a.contents={{1,2},{3,4},{5,6}};
    b.contents={{9,8,7},{6,5,4},{3,2,1}};

    // A = [
    //
    //
    // B = [
    //
    //

    a.print();
    b.print();

    return 0;
}
