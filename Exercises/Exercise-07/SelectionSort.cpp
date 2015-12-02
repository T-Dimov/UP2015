#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i , j;
    cin>>n;
    for(i = 0 ; i < n ; i++)
        cin>>arr[i]; //input

    for(i = 0; i < n - 1; ++i)
    {
        int index = i;

        for(j = i + 1; j < n; ++j)
            if(arr[j] < arr[index])
                index = j;
        if(index != i)
            swap (arr[i], arr[index]);

    }//selection sort
    for( i = 0 ; i < n ; i++)
        cout<<arr[i]<<" "; //outpur
    cout<<endl;
    return 0;
}
