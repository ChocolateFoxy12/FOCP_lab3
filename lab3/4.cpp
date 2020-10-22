#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

struct Matrix2D
{
    vector<vector<int>> contents;

    Matrix2D add(Matrix2D other)
    {
        if (other.rows()==rows()&&other.columns()==columns())
        {
            Matrix2D result;
            result.contents=contents;

            for (int i=0;i<row();i++)
            {
                for (int j=0;j<row();j++)
            }
        }
        else {cout<<"dimensions must match!"<<endl;}
    }

void input_matrix()
{
    int columns, rows;

    cout<<"number of rows: "; cin>>rows; cout<<endl;
    cout<<"number of columns:"; cin>>columns; cout<<endl;

    for (int i=0;i<3;i++)
    {
        vector<int> row;
        int tmp;
        cout<<"adding a row with "<<columns<<" columns"<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"introduce value: "; cin>>tmp; cout<<endl;
            row.push_back(tmp);
        }
        contents.push_back(row);
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
};

int main()
{
    Matrix2D a;
    Matrix2D b;

    a.input_matrix();
    b.input_matrix();

    a.print();
    b.print();

    a.add(b);
    a.print();

    return 0;
}
