#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY : ";
    cin>>size;
    int array[size];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : ";
    for(int i=0;i<=size-1;i++)
    {
        cin>>array[i];
    }
    int sum=0;
    int avg=0;
    for(int i=0;i<=size-1;i++)
    {
        sum+=array[i];
    }
    avg=sum/size;
    cout<<"SUM IS "<<sum<<endl;
    cout<<"AVERAGE IS "<<avg<<endl;
    return 0;
}
