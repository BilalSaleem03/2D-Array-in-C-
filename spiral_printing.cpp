#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and column of matrix"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Input date in matrix"<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

    while(row_start<=row_end && column_start<=column_end)
    {
        for(int a = column_start; a<=column_end;a++)
        {
            cout<<arr[row_start][a];
        }
        row_start++;
        
        for(int b = row_start; b<=row_end;b++)
        {
            cout<<arr[b][column_end];
        }
        column_end--;

        for(int c = column_end; c>=column_start;c--)
        {
            cout<<arr[row_end][c];
        }
        row_end--;

        for(int d=row_end ; d>=row_start;d--)
        {
            cout<<arr[d][column_start];
        }
        column_start++;
    }

    return 0;
}