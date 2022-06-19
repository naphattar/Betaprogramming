#include <bits/stdc++.h>
using namespace std;
void solve() {
int n; cin >> n;
vector go(n+5);
for (int i = 1; i <= n; i++) cin >> go[i];
vector vi(n+5);
int ans = -1;
for (int i = 1; i <= n; i++) {
if (vi[i]) continue;
int u = i;
int sz = 0;
do {
vi[u] = true;
u = go[u];
sz++;
} while (u != i);
int res = -1;
if (sz == 1) res = 1;
else if (sz%2 == 0) res = 2;
else res = 3;
ans = max(ans, res);
}
cout << ans << "\n";
}
int main(void) {
ios_base::sync_with_stdio(0); cin.tie(0);
int Q; cin >> Q;
while (Q--) {
solve();
}
return 0;
}
