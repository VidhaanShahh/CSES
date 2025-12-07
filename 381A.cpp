#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <numeric>

#define all(x) (x).begin(), (x).end()
#define dbg(x) cout << "Line(" << __LINE__ << ") -> " << #x << " = " << (x) << endl;

using namespace std;

template <typename S, typename T>
void smax(S &a, const T &b)
{
    if (a < b)
        a = b;
};

template <typename S, typename T>
void smin(S &a, const T &b)
{
    if (a > b)
        a = b;
};

using ll = long long;
const int INF = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll s=0;
    ll d=0;
    ll a=0;
    while(v.size()>0){
        if(v[0]<=v[v.size()-1]){
            if(!(a&1)){
                s=s+v[v.size()-1];
            }
            else{
                d=d+v[v.size()-1];
            }
            v.erase(v.end()-1);
        }
        else{
            if(!(a&1)){
                s=s+v[0];
            }
            else{
                d=d+v[0];
            }
            v.erase(v.begin());
        }
        a++;
    }
    cout<<s<<" "<<d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}