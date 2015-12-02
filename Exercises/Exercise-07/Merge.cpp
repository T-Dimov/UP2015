#include<iostream>
using namespace std;
int main()
{
    int arrN[100]={1,3,5,7},arrM[100]={2,4,6},newArr[200];
    size_t i=0,j=0,k=0,n=4,m=3; //n = size of arrN, m = size of arrM
     while( i < n && j < m)
    {
        if(arrN[i] < arrM[j])
            newArr[k++] = arrN[i++];
        else
            newArr[k++] = arrM[j++];

    }
    if( i < n )
        for(i; i < n; i++)
            newArr[k++] = arrN[i];

    else
        for(j; j < m; j++)
            newArr[k++] = arrM[j];

    for(i = 0; i < k; i++)
        cout << newArr[i] << " ";
    cout << endl;

    return 0;
}
