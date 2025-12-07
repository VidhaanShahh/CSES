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

bool check(ll n){
    if(n<=1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%1==0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n;
    cin>>n;
    if(!(n&1)){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else if(n&1 && !check(n)){
        for(ll i=2;i*i<=n;i++){
            if((n/i)%i==0){
                cout<<i<<" "<<n/i<<endl;
                break;
            }
        }
    }
    else if(n&1 && check(n)){
        cout<<1<<" "<<n-1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int TC;
    cin >> TC;
    while(TC--) solve(), cout << endl;
    return 0;
}