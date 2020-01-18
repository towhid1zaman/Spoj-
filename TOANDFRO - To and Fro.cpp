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
            int n;
            cin>>n;
            if(n==0)
            {
                break;
            }
            string s;
            cin>>s;
            vector<string>v;
            int k = s.length();
            int cnt = 0;
            for(int i = 0; i<s.length();)
            {
                string r = "";
                r = s.substr(i,n);
                cnt++;
                if(cnt%2==0){
                    REV(r);
                    v.pb(r);
                }
                else{
                    v.pb(r);
                }
                //cout<<r<<nl;
                r="";
                i+=n;
            }
            vector<char>res;
            int j = 0;
            while(n--){

                    for(int i = 0; i<v.size();i++){
                    res.pb(v[i][j]);
                }
                j++;
            }

            for(int i = 0; i<res.size();i++)
            {
                cout<<res[i];
            }
            cout<<nl;
        }




return 0;
}
