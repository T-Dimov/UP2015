#include<iostream>
using namespace std;
int main()
{
double sortedArr[10] = {0,1,2,3,4,4.5,6,7,8,9}, x;
size_t start=0,mid,end=9; //end = size of sortedArray
bool found = false;
cin>>x;
while(start <= end && !found)
{
    mid = (start + end) / 2;
    if (x == sortedArr[mid])
        found = true;
    else if (x > sortedArr[mid])
        start = mid + 1;
    else
        end = mid - 1;
}
cout<<boolalpha<<found<<endl;
if(found) cout<<mid<<endl; //outputs position of x (if x is a member of sortedArr)
return 0;
}
