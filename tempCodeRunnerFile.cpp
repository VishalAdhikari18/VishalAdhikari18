#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[n];
    for (int i=0;i<n;i+2)
    {
        if(arr[i]<arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[n]<<" ";
}