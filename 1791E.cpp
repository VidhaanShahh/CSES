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
    ll negatives=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v.at(i)<0){
            negatives++;
        }
    }
    sort(v.begin(),v.end());
    if(negatives>=2){
        v.at(0)=v.at(0)*-1;
        v.at(1)=v.at(1)*-1;
    }
    else if(negatives==1){
        if(abs(v[0])>=v[1]){
            v.at(0)=v.at(0)*-1;
            v.at(1)=v.at(1)*-1;
        }
    }
    ll t=accumulate(v.begin(),v.end(),0);
    cout<<t<<endl;
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