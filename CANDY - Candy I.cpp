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
#define in(n) scanf("%d", &n)
#define out(n) printf("%d\n",n)
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
int main()
{f();
       	  //freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

        while(true)
        {
             LL n;
             cin>>n;
             if(n<0){
                    break;
             }
            vector<LL>v(n);
             LL sum = 0;
            LL mn = 0;
             for(LL i = 0; i<n;i++)
             {
                 cin>>v[i];
                 sum+=v[i];
             }
             if(sum%2){
                cout<<-1<<nl;
             }
             else{
                 sum/=n;
                 for(LL i = 0; i<n;i++)
                 {
                     if(sum>v[i])
                        mn +=(sum-v[i]);
                 }
                 cout<<mn<<nl;
             }
             v.clear();
        }



return 0;
}
