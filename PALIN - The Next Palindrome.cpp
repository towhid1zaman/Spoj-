#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define P(x) printf("%d\n",x)
#define Pl(x) printf("%lld\n",x)

int main()
{f();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
        int t;
        cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            int n = s.length();
            vector<int>v;
            for(int i = 0; i<n;i++)
            {
                v.pb(s[i]-'0');
            }
            int i,j;
            i = n/2;
            j = i;
            if(n%2==0){
                i--;
            }
            while(i>=0 and v[i]==v[j]){
                i--;
                j++;
            }
            if(i>=0 and v[i]>v[j]){
                while(i>=0){
                    v[j]=v[i];
                    i--;
                    j++;
                }
                for(int i = 0; i<v.size();i++)
                {
                    cout<<v[i];
                }
                cout<<nl;
                continue;
            }
            i = n/2;
            j = i;
            if(n%2==0){
                i--;
            }
            int x = 1;
            while(i>=0)
            {
                int s = (v[i]+x)%10;
                x = (v[i]+x)/10;
                v[i--] = s;
                v[j++] = s;
            }
            if(v[i+1]==0){
                cout<<1;
                v[j-1]=1;
            }
            for(int i = 0; i<v.size();i++){
                cout<<v[i];
            }
            cout<<nl;
        }
return 0;
}

