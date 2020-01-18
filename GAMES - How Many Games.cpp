#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define MAX INT_MAX
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define X first
#define Y second
#define check() {printf("OK\n");}
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())

//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}

int power(int n){
        int y = pow(10,n);
    return y;
}

int main()
{f();
        int t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            int p=0;
            for(int i = 0; i<s.length(); i++){
                if(s[i]=='.'){
                    p = i;
                }
            }
            int x = s.length()-(p+1);
            //pin(x);
            string sx="";
            for(int i = 0; i<s.length();i++){
                    if(s[i] !='.')
                    {
                           sx+=s[i];
                    }

            }
            //cout<<sx<<nl;
            int xin = to_int(sx);
            //pin(xin);
            int yin = power(x);
            if(yin==99){
                yin=100;
            }
//            pin(yin);
            /*
                amra prothome a = x/y chinta kori, jekhane a= given number , x = a*pow(10,number of digit after decimal num), y = pow(10, numbe.....)
                amra ekhane  string theke decimal e convert korbo.
                now ans  jodi only integer number thake tahole direct 1 print kore dibo otherwise amaderke 3025/100 ke reduce korte hobe, eta GCD diye kora jai,
                gcd(3025,100)=25, ei 25 diye lob o hor ke vag korle eta reduce hoye darai 121/4
                tahole amader ans = y/gcd(x,y); y=100,x=3025;
                */
            int ans = 1;
            if(p>0){
                ans = yin/gcd(xin,yin);
                cout<<ans<<nl;
            }
            else cout<<ans<<nl;


        }



return 0;
}
