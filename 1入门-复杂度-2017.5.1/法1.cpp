#include <iostream>

using namespace std;
int yes=0;
int main()
{
    int n=7;
    int a[7]={-9,-5,-3,4,5,6,10};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==0)
                yes=1;
        }
    }
    if(yes)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
