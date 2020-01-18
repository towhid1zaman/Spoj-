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
                       // freopen("output.txt", "w", stdout);

        int n;
        in(n);
       while(n--){
                int x;
                in(x);
                vector<int>v;
                v.pb(1);
                int carry = 0;
                for(int i = 2; i<=x;i++){
                        cout<<" i "<<i<<nl;
                    for(int j = 0; j<v.size();j++)
                    {
                        cout<<"j "<<j<<nl;
                        int temp = v[j]*i;
                cout<<"temp "<<temp<<nl;
                        v[j] = (temp+carry)%10;
                        cout<<"v[j] "<<v[j]<<nl;
                        carry = (temp+carry)/10;
                        cout<<"carry "<<carry<<nl;
                    }
                    cout<<"carry before while() "<<carry<<nl;
                    while(carry !=0){
                        v.pb(carry%10);
                        cout<<"carry mod "<<carry%10<<nl;
                        carry/=10;
                    }
                    cout<<"current vect "<<nl;
                    for(int k = 0; k<v.size();k++){
                        cout<<v[k]<<" ";
                    }
                    cout<<endl;
                }
                for(int i = v.size()-1 ; i>=0;i--){
                    cout<<v[i];
                }
                cout<<nl;

       }




return 0;
}
