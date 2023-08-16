#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
main()
{
    int n;
    cout<<"\nEnter the count for array element : ";
    cin>>n;

    int arr[n];

    cout<<"\nArray elements are : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    cout<<"\nBubble Sort Array is : ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
