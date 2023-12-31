#include<iostream>
using namespace std;

int main()
{
    int n1,m1;
    cout<<"Enter number of rows and column of matrix_1"<<endl;
    cin>>n1>>m1;
    int arr1[n1][m1];
    cout<<"Input date in matrix_1"<<endl;
    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cin>>arr1[i][j];
        }  
    }

    int n2,m2;
    cout<<"Enter number of rows and column of matrix_2 \n make sure that columns of first matrix must be equal to rows of second matrix"<<endl;
    cin>>n2>>m2;
    int arr2[n2][m2];
    cout<<"Input date in matrix_2"<<endl;
    for(int i =0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cin>>arr2[i][j];
        }  
    }

    int multiply_matrix[n1][m2];

    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            multiply_matrix[i][j]=0;
        }  
    }


    for(int i = 0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            for(int k=0 ;k<n2;k++)
            {
                multiply_matrix[i][j]+=arr1[i][k]*arr2[k][j];
            }        
        }

        
    }
    cout<<endl;

    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<multiply_matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}


/*

int main(){



 int n1,n2,n3;
 cin >> n1 >> n2 >> n3;
 int m1[n1][n2]; int m2[n2][n3]; int ans[n1][n3];
 for(int i=0; i<n1; i++) {
 for(int j=0; j<n2; j++)
 cin >> m1[i][j];
 }
 for(int i=0; i<n2; i++) {
 for(int j=0; j<n3; j++)
 cin >> m2[i][j];
 }
 for(int i=0; i<n1; i++) {
 for(int j=0; j<n3; j++)
 ans[i][j] = 0;
 }
 for(int i=0; i<n1; i++) {
 for(int j=0; j<n3; j++)
 {
 for(int k=0; k<n2; k++) {
 ans[i][j] += m1[i][k]*m2[k][j];
 }
 }
 }
 for(int i=0; i<n1; i++) {
 for(int j=0; j<n3; j++)
 cout << ans[i][j] <<" ";
 cout << endl;
 }
return 0;
}
*/