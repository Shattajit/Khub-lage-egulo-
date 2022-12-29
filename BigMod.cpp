#include<bits/stdc++.h>
#define pb push_back
#define ll long long int
#define se second
#define fi first
using namespace std;

int dx[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dy[8] = { 0, 0, 1, -1, 1, -1, -1, 1 };

/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree <
    pair<int ,int>,
    null_type,
    less<pair<int ,int>>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set;
*/

const int mod = 1e9+7;
const int N = 5e3+10;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve(int tc)
{

}
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//pre();

	int tc = 1;
	cin>>tc;

	for(int tt=1;tt<=tc;tt++)
    {
        solve(tt);
    }
	return 0;
}
