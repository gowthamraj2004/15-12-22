#include <iostream>
using namespace std;
int main(){
    int rows,cols,i,j,arr[100][100],k;
    cin>>rows>>cols;
    for(i=1;i<rows;i++)
    {
        for(j=1;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=1;i<rows;i++)
    {
        for(j=1;j<cols;j++)
        {
            k=arr[i+j];
        }
    }
    cout<<k;
}