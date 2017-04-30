#include <iostream>

using namespace std;
int yes=0;

int vis[7]; //一般编译器全局变量初始化会自动置0
int main()
{
    int n=7;
    int a[7]={-9,-5,-3,4,5,6,10};
    for(int i=0;i<n;i++){
        if(a[i]<0) vis[-a[i]]=1;
        if(a[i]>0&&vis[a[i]]==1)
            yes=1;
    }
    if(yes)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
