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
    int n;
    cin >> n;
    ll sum_given = 0;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum_given += x;
    }
    ll total = 1LL * n * (n + 1) / 2;
    cout << total - sum_given << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}