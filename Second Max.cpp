#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,1,1,1,1};
    int i,k,max=arr[0],min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
             k=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    if(max==min)
    {
        cout<<-1;
    }
    else
    {
        arr[k]=min;
        int Smax=arr[0];
        for(i=0;i<5;i++)
        {
            if(arr[i]>Smax)
            {
                Smax=arr[i];
            }
        }
        cout<<"Second Max is : "<<Smax;
    }                                                
}