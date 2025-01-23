---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"example.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <bits/stdc++.h>\n#define rep(i, N) for (int i = 0; (i) < (int)(N);\
    \ ++ (i))\n#define all(x) std::begin(x), std::end(x)\nusing namespace std;\n\n\
    int main() {\n    int n; cin >> n;\n    vector<int> s(n);\n    rep (i, n) {\n\
    \        cin >> s[i];;\n    }\n    int q; cin >> q;\n    int cnt = 0;\n    while\
    \ (q --) {\n        int t_i; cin >> t_i;\n        cnt += binary_search(all(s),\
    \ t_i);\n    }\n    cout << cnt << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <bits/stdc++.h>\n#define rep(i, N) for (int i = 0; (i) < (int)(N);\
    \ ++ (i))\n#define all(x) std::begin(x), std::end(x)\nusing namespace std;\n\n\
    int main() {\n    int n; cin >> n;\n    vector<int> s(n);\n    rep (i, n) {\n\
    \        cin >> s[i];;\n    }\n    int q; cin >> q;\n    int cnt = 0;\n    while\
    \ (q --) {\n        int t_i; cin >> t_i;\n        cnt += binary_search(all(s),\
    \ t_i);\n    }\n    cout << cnt << endl;\n    return 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: example.test.cpp
  requiredBy: []
  timestamp: '2025-01-24 00:50:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example.test.cpp
layout: document
redirect_from:
- /verify/example.test.cpp
- /verify/example.test.cpp.html
title: example.test.cpp
---
