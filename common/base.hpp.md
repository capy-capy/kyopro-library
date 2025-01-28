---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/MontgomeryModInt.hpp
    title: math/MontgomeryModInt.hpp
  - icon: ':warning:'
    path: math/PrimitiveRoot.hpp
    title: math/PrimitiveRoot.hpp
  - icon: ':heavy_check_mark:'
    path: math/is_Prime.hpp
    title: math/is_Prime.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/is_Prime.test.cpp
    title: test/is_Prime.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "common/base.hpp"

    #include <bits/stdc++.h>

    using namespace std;

    // #pragma GCC target("avx2")

    // #pragma GCC optimize("O3")

    // #pragma GCC optimize("unroll-loops")

    #define ll long long

    #define ld long double

    #define fi first

    #define se second

    #define pi M_PI

    #define pb push_back

    #define eb emplace_back

    #define rep(i,N) for(int i=0;i<(ll)N;i++)

    #define rrep(i,N) for(int i=N-1;i>=0;i--)

    #define REP(i,s,e) for(int i=s;i<(ll)e;i++)

    #define RREP(i,s,e) for(int i=e-1;i>=(ll)s;i--)

    #define vecin(N,A) rep(i,N) cin>>A[i]

    #define vvecin(H,W,A) rep(i,H) rep(j,W) cin>>A[i][j]

    #define lb(a,x) (lower_bound(all(a),(x))-a.begin())

    #define ub(a,x) (upper_bound(all(a),(x))-a.begin())

    #define p_que(T) priority_queue<T>

    #define sp_que(T) priority_queue<T,vector<T>,greater<T>>

    #define PP pair<ll,ll>

    #define PPL pair<ll,pair<ll,ll>>

    #define all(x) x.begin(),x.end()

    #define rsort(x) {sort(all(x));reverse(all(x));}

    #define dupli(x) {sort(all(x));x.erase(unique(all(x)),x.end());}

    #define popcnt __builtin_popcountll

    const ll MOD = 998244353;

    const ll INF = LLONG_MAX/4;

    const int inf = INT32_MAX/2;

    const long double EPS = 1e-10;

    template<class T> bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}

    template<class T> bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}

    template<class T> void outp(T a){cout<<''(''<<a.fi<<'',''<<a.se<<'')''<<''\n'';}

    template<class T> void outvp(T v){rep(i,v.size())cout<<''(''<<v[i].fi<<'',''<<v[i].se<<'')'';cout<<''\n'';}

    template<class T> void outvvp(T v){rep(i,v.size())outvp(v[i]);}

    template<class T> void outv(T v){rep(i,v.size()){if(i)cout<<'' '';cout<<v[i];}cout<<''\n'';}

    template<class T> void outvv(T v){rep(i,v.size())outv(v[i]);}

    template<class T> void YesNo(T b){if(b)cout<<"Yes"<<''\n'';else cout<<"No"<<''\n'';}

    ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}

    ll modpow(ll a,ll b,ll z){ll res=1;a%=z;while(b){if(b&1)res=res*a%z;a=a*a%z;b>>=1;}return
    res;}

    '
  code: '#pragma once

    #include <bits/stdc++.h>

    using namespace std;

    // #pragma GCC target("avx2")

    // #pragma GCC optimize("O3")

    // #pragma GCC optimize("unroll-loops")

    #define ll long long

    #define ld long double

    #define fi first

    #define se second

    #define pi M_PI

    #define pb push_back

    #define eb emplace_back

    #define rep(i,N) for(int i=0;i<(ll)N;i++)

    #define rrep(i,N) for(int i=N-1;i>=0;i--)

    #define REP(i,s,e) for(int i=s;i<(ll)e;i++)

    #define RREP(i,s,e) for(int i=e-1;i>=(ll)s;i--)

    #define vecin(N,A) rep(i,N) cin>>A[i]

    #define vvecin(H,W,A) rep(i,H) rep(j,W) cin>>A[i][j]

    #define lb(a,x) (lower_bound(all(a),(x))-a.begin())

    #define ub(a,x) (upper_bound(all(a),(x))-a.begin())

    #define p_que(T) priority_queue<T>

    #define sp_que(T) priority_queue<T,vector<T>,greater<T>>

    #define PP pair<ll,ll>

    #define PPL pair<ll,pair<ll,ll>>

    #define all(x) x.begin(),x.end()

    #define rsort(x) {sort(all(x));reverse(all(x));}

    #define dupli(x) {sort(all(x));x.erase(unique(all(x)),x.end());}

    #define popcnt __builtin_popcountll

    const ll MOD = 998244353;

    const ll INF = LLONG_MAX/4;

    const int inf = INT32_MAX/2;

    const long double EPS = 1e-10;

    template<class T> bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}

    template<class T> bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}

    template<class T> void outp(T a){cout<<''(''<<a.fi<<'',''<<a.se<<'')''<<''\n'';}

    template<class T> void outvp(T v){rep(i,v.size())cout<<''(''<<v[i].fi<<'',''<<v[i].se<<'')'';cout<<''\n'';}

    template<class T> void outvvp(T v){rep(i,v.size())outvp(v[i]);}

    template<class T> void outv(T v){rep(i,v.size()){if(i)cout<<'' '';cout<<v[i];}cout<<''\n'';}

    template<class T> void outvv(T v){rep(i,v.size())outv(v[i]);}

    template<class T> void YesNo(T b){if(b)cout<<"Yes"<<''\n'';else cout<<"No"<<''\n'';}

    ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}

    ll modpow(ll a,ll b,ll z){ll res=1;a%=z;while(b){if(b&1)res=res*a%z;a=a*a%z;b>>=1;}return
    res;}

    '
  dependsOn: []
  isVerificationFile: false
  path: common/base.hpp
  requiredBy:
  - math/PrimitiveRoot.hpp
  - math/is_Prime.hpp
  - math/MontgomeryModInt.hpp
  timestamp: '2025-01-28 20:58:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/is_Prime.test.cpp
documentation_of: common/base.hpp
layout: document
redirect_from:
- /library/common/base.hpp
- /library/common/base.hpp.html
title: common/base.hpp
---
