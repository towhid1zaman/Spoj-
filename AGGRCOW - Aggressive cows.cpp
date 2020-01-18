#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;
bool canPlace(LL points[], LL N, LL MinDis,LL cows){
        LL last = points[0], placed = 1;
        for(LL i = 1; i<N;i++)
        {
            if(points[i]-last>=MinDis)
            {
                last = points[i];
                placed++;
            }
            if(placed==cows){
                return true;
            }
        }
        return false;
}

int main(){
        IO

        LL t;
        cin>>t;
        while(t--)
        {
            LL n,c;
            cin>>n>>c;
            LL points[n+1];
            for(LL i = 0; i<n;i++)
            {
                cin>>points[i];
            }
            sort(points,points+n);
            LL low_min_dis = 0, hi_min_dis = points[n-1]-points[0], mid_min_dis;
            ///binary search
            while(hi_min_dis-low_min_dis>1)
            {
                mid_min_dis = low_min_dis + (hi_min_dis-low_min_dis)/2;
                //cout<<mid_min_dis<<endl;
                if(canPlace(points,n,mid_min_dis,c)){
                    low_min_dis = mid_min_dis;
                  //  cout<<low_min_dis<<endl;
                }
                else{
                    hi_min_dis = mid_min_dis;
                    //cout<<hi_min_dis<<endl;
                }
            }
            cout<<low_min_dis<<endl;
        }



return 0;
}




