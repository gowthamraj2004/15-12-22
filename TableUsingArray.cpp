#include <iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,arr[100][100];
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
         cin>>arr[i][j];
         cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}