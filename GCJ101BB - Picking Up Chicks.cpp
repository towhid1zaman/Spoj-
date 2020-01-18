#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7


int main(){f();
        int c;
        int n,k,t;
        LL b;
        int tc = 0;
        cin>>c;
        while(c--)
        {
            cin>>n>>k>>b>>t;
            vector<LL>x(n);
            vector<LL>v(n);
            for(int i = 0; i<n;i++)
            {
                cin>>x[i];
            }
            for(int i = 0; i<n;i++)
            {
                cin>>v[i];
            }
            LL red=0,blue=0,ans=0;
            for(int i = n-1; i>=0;i--)
            {
                if(red==k){
                    break;
                }
                if((x[i] +t*v[i])<b){
                    blue+=1;
                }
                else{
                    red+=1;
                    ans+=blue;
                }
            }

            cout<<"Case #"<<++tc<<":";
            if(red>=k){
                cout<<ans<<nl;
            }
            else{
                cout<<"IMPOSSIBLE"<<nl;
            }
        }









return 0;
}



