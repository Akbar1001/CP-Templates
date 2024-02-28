#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int Maxelement(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int Minelement(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int n;
    cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    int max= Maxelement(arr,n);
    int min= Minelement(arr,n);
    display(arr,n);
    cout<<"Max element in Array : "<<max<<endl;
    cout<<"Min element in Array : "<<min;
}