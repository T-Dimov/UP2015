#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i , j;
    cin>>n;
    for(i = 0 ; i < n ; i++)
        cin>>arr[i]; 

    for(i = 0 ; i < n - 1 ; i++)
        for(j = i+1 ; j < n ; j++ )
            if(arr[i] > arr[j])
                swap(arr[i],arr[j]);

    for( i = 0 ; i < n ; i++)
        cout<<arr[i]<<" "; //outpur
    cout<<endl;
    return 0;
}
