---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: common/base.hpp
    title: common/base.hpp
  - icon: ':heavy_check_mark:'
    path: math/MontgomeryModInt.hpp
    title: math/MontgomeryModInt.hpp
  - icon: ':heavy_check_mark:'
    path: math/PrimitiveRoot.hpp
    title: math/PrimitiveRoot.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/primitive_root
    links:
    - https://judge.yosupo.jp/problem/primitive_root
  bundledCode: "#line 1 \"test/PrimitiveRoot.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/primitive_root\"\
    \n\n#line 2 \"common/base.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    // #pragma GCC target(\"avx2\")\n// #pragma GCC optimize(\"O3\")\n// #pragma GCC\
    \ optimize(\"unroll-loops\")\n#define ll long long\n#define ld long double\n#define\
    \ fi first\n#define se second\n#define pi M_PI\n#define pb push_back\n#define\
    \ eb emplace_back\n#define rep(i,N) for(int i=0;i<(ll)N;i++)\n#define rrep(i,N)\
    \ for(int i=N-1;i>=0;i--)\n#define REP(i,s,e) for(int i=s;i<(ll)e;i++)\n#define\
    \ RREP(i,s,e) for(int i=e-1;i>=(ll)s;i--)\n#define vecin(N,A) rep(i,N) cin>>A[i]\n\
    #define vvecin(H,W,A) rep(i,H) rep(j,W) cin>>A[i][j]\n#define lb(a,x) (lower_bound(all(a),(x))-a.begin())\n\
    #define ub(a,x) (upper_bound(all(a),(x))-a.begin())\n#define p_que(T) priority_queue<T>\n\
    #define sp_que(T) priority_queue<T,vector<T>,greater<T>>\n#define PP pair<ll,ll>\n\
    #define PPL pair<ll,pair<ll,ll>>\n#define all(x) x.begin(),x.end()\n#define rsort(x)\
    \ {sort(all(x));reverse(all(x));}\n#define dupli(x) {sort(all(x));x.erase(unique(all(x)),x.end());}\n\
    #define popcnt __builtin_popcountll\nconst ll MOD = 998244353;\nconst ll INF =\
    \ LLONG_MAX/4;\nconst int inf = INT32_MAX/2;\nconst long double EPS = 1e-10;\n\
    template<class T> bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}\n\
    template<class T> bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}\n\
    template<class T> void outp(T a){cout<<'('<<a.fi<<','<<a.se<<')'<<'\\n';}\ntemplate<class\
    \ T> void outvp(T v){rep(i,v.size())cout<<'('<<v[i].fi<<','<<v[i].se<<')';cout<<'\\\
    n';}\ntemplate<class T> void outvvp(T v){rep(i,v.size())outvp(v[i]);}\ntemplate<class\
    \ T> void outv(T v){rep(i,v.size()){if(i)cout<<' ';cout<<v[i];}cout<<'\\n';}\n\
    template<class T> void outvv(T v){rep(i,v.size())outv(v[i]);}\ntemplate<class\
    \ T> void YesNo(T b){if(b)cout<<\"Yes\"<<'\\n';else cout<<\"No\"<<'\\n';}\nll\
    \ gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}\nll modpow(ll a,ll b,ll\
    \ z){ll res=1;a%=z;while(b){if(b&1)res=res*a%z;a=a*a%z;b>>=1;}return res;}\n#line\
    \ 4 \"test/PrimitiveRoot.test.cpp\"\n\n#line 3 \"math/MontgomeryModInt.hpp\"\n\
    struct MontgomeryModInt64 {\n    using mint = MontgomeryModInt64;\n    using u64\
    \ = uint64_t;\n    using u128 = __uint128_t;\n    // static menber\n    static\
    \ u64 MOD;\n    static u64 INV_MOD;  // INV_MOD * MOD \u2261 1 (mod 2^64)\n  \
    \  static u64 T128;  // 2^128 (mod MOD)\n    // inner value\n    u64 val;\n  \
    \  // constructor\n    MontgomeryModInt64() : val(0) { }\n    MontgomeryModInt64(long\
    \ long v) : val(reduce((u128(v) + MOD) * T128)) { }\n    u64 get() const {\n \
    \       u64 res = reduce(val);\n        return res >= MOD ? res - MOD : res;\n\
    \    }\n    // mod getter and setter\n    static u64 get_mod() { return MOD; }\n\
    \    static void set_mod(u64 mod) {\n        assert(mod < (1LL << 62));\n    \
    \    assert((mod & 1));\n        MOD = mod;\n        T128 = -u128(mod) % mod;\n\
    \        INV_MOD = get_inv_mod();\n    }\n    static u64 get_inv_mod() {\n   \
    \     u64 res = MOD;\n        for (int i = 0; i < 5; ++i) res *= 2 - MOD * res;\n\
    \        return res;\n    }\n    static u64 reduce(const u128 &v) {\n        return\
    \ (v + u128(u64(v) * u64(-INV_MOD)) * MOD) >> 64;\n    }\n    // arithmetic operators\n\
    \    mint operator - () const { return mint() - mint(*this); }\n    mint operator\
    \ + (const mint &r) const { return mint(*this) += r; }\n    mint operator - (const\
    \ mint &r) const { return mint(*this) -= r; }\n    mint operator * (const mint\
    \ &r) const { return mint(*this) *= r; }\n    mint operator / (const mint &r)\
    \ const { return mint(*this) /= r; }\n    mint& operator += (const mint &r) {\n\
    \        if ((val += r.val) >= 2 * MOD) val -= 2 * MOD;\n        return *this;\n\
    \    }\n    mint& operator -= (const mint &r) {\n        if ((val += 2 * MOD -\
    \ r.val) >= 2 * MOD) val -= 2 * MOD;\n        return *this;\n    }\n    mint&\
    \ operator *= (const mint &r) {\n        val = reduce(u128(val) * r.val);\n  \
    \      return *this;\n    }\n    mint& operator /= (const mint &r) {\n       \
    \ *this *= r.inv();\n        return *this;\n    }\n    mint inv() const { return\
    \ pow(MOD - 2); }\n    mint pow(u128 n) const {\n        mint res(1), mul(*this);\n\
    \        while (n > 0) {\n            if (n & 1) res *= mul;\n            mul\
    \ *= mul;\n            n >>= 1;\n        }\n        return res;\n    }\n    //\
    \ other operators\n    bool operator == (const mint &r) const {\n        return\
    \ (val >= MOD ? val - MOD : val) == (r.val >= MOD ? r.val - MOD : r.val);\n  \
    \  }\n    bool operator != (const mint &r) const {\n        return (val >= MOD\
    \ ? val - MOD : val) != (r.val >= MOD ? r.val - MOD : r.val);\n    }\n    friend\
    \ istream& operator >> (istream &is, mint &x) {\n        long long t;\n      \
    \  is >> t;\n        x = mint(t);\n        return is;\n    }\n    friend ostream&\
    \ operator << (ostream &os, const mint &x) {\n        return os << x.get();\n\
    \    }\n    friend mint modpow(const mint &r, long long n) {\n        return r.pow(n);\n\
    \    }\n    friend mint modinv(const mint &r) {\n        return r.inv();\n   \
    \ }\n};\ntypename MontgomeryModInt64::u64\nMontgomeryModInt64::MOD, MontgomeryModInt64::INV_MOD,\
    \ MontgomeryModInt64::T128;\n#line 2 \"math/PrimitiveRoot.hpp\"\nvector<ll> divisor(ll\
    \ num){\n    vector<ll>ret;\n    if(num%2==0){\n        while(num%2==0)num/=2;\n\
    \        ret={2};\n    }\n    for(ll i = 3;i*i<=num;i+=2){\n        if(num%i==0){\n\
    \            ret.pb(i);\n            while(num%i==0)num/=i;\n        }\n    }\n\
    \    if(num>1)ret.pb(num);\n    return ret;\n}\nmt19937 mt(12345); \nuniform_int_distribution<ll>\
    \ rnd(0, INF);\nusing mint = MontgomeryModInt64;\nll PrimitiveRoot(ll N){\n  \
    \  \n    if(N==2)return 1LL;\n    auto element = divisor(N-1);\n    mint::set_mod(N);\n\
    \    ll i= 1;\n    while(true){\n        i = rnd(mt)%(N-2)+2;\n        bool ok\
    \ = true;\n        for(auto&v:element){\n            auto x = mint(i).pow((N-1)/v);\n\
    \            if(x==1&&v<N-1){\n                ok = false;\n                break;\n\
    \            }\n        }   \n        if(ok){\n            return i;\n       \
    \ }\n    }\n}\n#line 6 \"test/PrimitiveRoot.test.cpp\"\n\nint main() {\n    int\
    \ Q;\n    cin >> Q;\n    while(Q--) {\n        ll N;\n        cin >> N;\n    \
    \    cout<<PrimitiveRoot(N)<<endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/primitive_root\"\n\n#include\
    \ \"../common/base.hpp\"\n\n#include \"../math/PrimitiveRoot.hpp\"\n\nint main()\
    \ {\n    int Q;\n    cin >> Q;\n    while(Q--) {\n        ll N;\n        cin >>\
    \ N;\n        cout<<PrimitiveRoot(N)<<endl;\n    }\n}"
  dependsOn:
  - common/base.hpp
  - math/PrimitiveRoot.hpp
  - math/MontgomeryModInt.hpp
  isVerificationFile: true
  path: test/PrimitiveRoot.test.cpp
  requiredBy: []
  timestamp: '2025-01-28 22:04:06+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/PrimitiveRoot.test.cpp
layout: document
redirect_from:
- /verify/test/PrimitiveRoot.test.cpp
- /verify/test/PrimitiveRoot.test.cpp.html
title: test/PrimitiveRoot.test.cpp
---
