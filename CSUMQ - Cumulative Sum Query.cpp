#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof a);
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1; i<n;i++)
    {
        a[i] = a[i]+a[i-1];
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        int left,right;
        cin>>left>>right;
        if(left==0){
            cout<<a[right]<<endl;
        }
        else cout<<a[right]-a[left-1]<<endl;
    }
}
