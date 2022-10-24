#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"This is programm for printing matrix"<<endl;
    int row, col;
    cout<<"enter no of row and no of col"<<endl;
    cin>>row>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}