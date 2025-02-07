#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; (i) < (int)(N); ++ (i))
#define all(x) std::begin(x), std::end(x)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    rep (i, n) {
        cin >> s[i];;
    }
    int q; cin >> q;
    int cnt = 0;
    while (q --) {
        int t_i; cin >> t_i;
        cnt += binary_search(all(s), t_i);
    }
    cout << cnt << endl;
    return 0;
}
