#include <iostream>

using namespace std;
int yes=0,n=7;
int l=0,r=n-1;

int main()
{
    int a[7]={-9,-5,-3,4,5,6,10};
    while(l<r){
        int sum=a[l]+a[r];
        if(sum>0)
            r--;
        else if(sum<0)
            l++;
        else break;
    }
    if(l!=r)
        cout<<"yes"<<endl;
}
