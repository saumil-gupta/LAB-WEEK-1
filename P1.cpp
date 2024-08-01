#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE MATRIX : ";
    cin>>size;
    int array[size][size];
    cout<<"ENTER THE ELEMENTS OF THE MATRIX : ";
    for(int i=0;i<=size-1;i++)
    {
        for(int j=0;j<=size-1;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"TRANSPOSE OF GIVEN MATRIX : "<<endl;
    for(int i=0;i<=size-1;i++)
    {
        for(int j=0;j<=size-1;j++)
        {
            cout<<array[j][i]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}
