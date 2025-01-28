---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: common/base.hpp
    title: common/base.hpp
  - icon: ':heavy_check_mark:'
    path: math/MontgomeryModInt.hpp
    title: math/MontgomeryModInt.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/is_Prime.test.cpp
    title: test/is_Prime.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"common/base.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n// #pragma GCC target(\"avx2\")\n// #pragma GCC optimize(\"O3\")\n// #pragma\
    \ GCC optimize(\"unroll-loops\")\n#define ll long long\n#define ld long double\n\
    #define fi first\n#define se second\n#define pi M_PI\n#define pb push_back\n#define\
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
    \ 3 \"math/MontgomeryModInt.hpp\"\nstruct MontgomeryModInt64 {\n    using mint\
    \ = MontgomeryModInt64;\n    using u64 = uint64_t;\n    using u128 = __uint128_t;\n\
    \    // static menber\n    static u64 MOD;\n    static u64 INV_MOD;  // INV_MOD\
    \ * MOD \u2261 1 (mod 2^64)\n    static u64 T128;  // 2^128 (mod MOD)\n    //\
    \ inner value\n    u64 val;\n    // constructor\n    MontgomeryModInt64() : val(0)\
    \ { }\n    MontgomeryModInt64(long long v) : val(reduce((u128(v) + MOD) * T128))\
    \ { }\n    u64 get() const {\n        u64 res = reduce(val);\n        return res\
    \ >= MOD ? res - MOD : res;\n    }\n    // mod getter and setter\n    static u64\
    \ get_mod() { return MOD; }\n    static void set_mod(u64 mod) {\n        assert(mod\
    \ < (1LL << 62));\n        assert((mod & 1));\n        MOD = mod;\n        T128\
    \ = -u128(mod) % mod;\n        INV_MOD = get_inv_mod();\n    }\n    static u64\
    \ get_inv_mod() {\n        u64 res = MOD;\n        for (int i = 0; i < 5; ++i)\
    \ res *= 2 - MOD * res;\n        return res;\n    }\n    static u64 reduce(const\
    \ u128 &v) {\n        return (v + u128(u64(v) * u64(-INV_MOD)) * MOD) >> 64;\n\
    \    }\n    // arithmetic operators\n    mint operator - () const { return mint()\
    \ - mint(*this); }\n    mint operator + (const mint &r) const { return mint(*this)\
    \ += r; }\n    mint operator - (const mint &r) const { return mint(*this) -= r;\
    \ }\n    mint operator * (const mint &r) const { return mint(*this) *= r; }\n\
    \    mint operator / (const mint &r) const { return mint(*this) /= r; }\n    mint&\
    \ operator += (const mint &r) {\n        if ((val += r.val) >= 2 * MOD) val -=\
    \ 2 * MOD;\n        return *this;\n    }\n    mint& operator -= (const mint &r)\
    \ {\n        if ((val += 2 * MOD - r.val) >= 2 * MOD) val -= 2 * MOD;\n      \
    \  return *this;\n    }\n    mint& operator *= (const mint &r) {\n        val\
    \ = reduce(u128(val) * r.val);\n        return *this;\n    }\n    mint& operator\
    \ /= (const mint &r) {\n        *this *= r.inv();\n        return *this;\n   \
    \ }\n    mint inv() const { return pow(MOD - 2); }\n    mint pow(u128 n) const\
    \ {\n        mint res(1), mul(*this);\n        while (n > 0) {\n            if\
    \ (n & 1) res *= mul;\n            mul *= mul;\n            n >>= 1;\n       \
    \ }\n        return res;\n    }\n    // other operators\n    bool operator ==\
    \ (const mint &r) const {\n        return (val >= MOD ? val - MOD : val) == (r.val\
    \ >= MOD ? r.val - MOD : r.val);\n    }\n    bool operator != (const mint &r)\
    \ const {\n        return (val >= MOD ? val - MOD : val) != (r.val >= MOD ? r.val\
    \ - MOD : r.val);\n    }\n    friend istream& operator >> (istream &is, mint &x)\
    \ {\n        long long t;\n        is >> t;\n        x = mint(t);\n        return\
    \ is;\n    }\n    friend ostream& operator << (ostream &os, const mint &x) {\n\
    \        return os << x.get();\n    }\n    friend mint modpow(const mint &r, long\
    \ long n) {\n        return r.pow(n);\n    }\n    friend mint modinv(const mint\
    \ &r) {\n        return r.inv();\n    }\n};\ntypename MontgomeryModInt64::u64\n\
    MontgomeryModInt64::MOD, MontgomeryModInt64::INV_MOD, MontgomeryModInt64::T128;\n\
    #line 2 \"math/is_Prime.hpp\"\n// Miller-Rabin\nbool MillerRabin(long long N,\
    \ vector<long long> A) {\n    using mint = MontgomeryModInt64;\n    mint::set_mod(N);\n\
    \    long long s = 0, d = N - 1;\n    while (d % 2 == 0) {\n        ++s;\n   \
    \     d >>= 1;\n    }\n    for (auto a : A) {\n        if (N <= a) return true;\n\
    \        mint x = mint(a).pow(d);\n        if (x != 1) {\n            long long\
    \ t;\n            for (t = 0; t < s; ++t) {\n                if (x == N - 1) break;\n\
    \                x *= x;\n            }\n            if (t == s) return false;\n\
    \        }\n    }\n    return true;\n}\nbool is_prime(long long N) {\n    if (N\
    \ <= 1) return false;\n    else if (N == 2) return true;\n    else if (N % 2 ==\
    \ 0) return false;\n    else if (N < 4759123141LL) return MillerRabin(N, {2, 7,\
    \ 61});\n    else return MillerRabin(N, {2, 325, 9375, 28178, 450775, 9780504,\
    \ 1795265022});\n}\n"
  code: "#include \"MontgomeryModInt.hpp\"\n// Miller-Rabin\nbool MillerRabin(long\
    \ long N, vector<long long> A) {\n    using mint = MontgomeryModInt64;\n    mint::set_mod(N);\n\
    \    long long s = 0, d = N - 1;\n    while (d % 2 == 0) {\n        ++s;\n   \
    \     d >>= 1;\n    }\n    for (auto a : A) {\n        if (N <= a) return true;\n\
    \        mint x = mint(a).pow(d);\n        if (x != 1) {\n            long long\
    \ t;\n            for (t = 0; t < s; ++t) {\n                if (x == N - 1) break;\n\
    \                x *= x;\n            }\n            if (t == s) return false;\n\
    \        }\n    }\n    return true;\n}\nbool is_prime(long long N) {\n    if (N\
    \ <= 1) return false;\n    else if (N == 2) return true;\n    else if (N % 2 ==\
    \ 0) return false;\n    else if (N < 4759123141LL) return MillerRabin(N, {2, 7,\
    \ 61});\n    else return MillerRabin(N, {2, 325, 9375, 28178, 450775, 9780504,\
    \ 1795265022});\n}"
  dependsOn:
  - math/MontgomeryModInt.hpp
  - common/base.hpp
  isVerificationFile: false
  path: math/is_Prime.hpp
  requiredBy: []
  timestamp: '2025-01-28 20:58:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/is_Prime.test.cpp
documentation_of: math/is_Prime.hpp
layout: document
redirect_from:
- /library/math/is_Prime.hpp
- /library/math/is_Prime.hpp.html
title: math/is_Prime.hpp
---
