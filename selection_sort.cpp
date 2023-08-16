#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
main()
{
    int n;
    cout<<"\nEnter count of array element : ";
    cin>>n;

    int arr[n];

    cout<<"\nArray elements are : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
