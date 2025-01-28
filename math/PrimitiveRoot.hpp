#include "MontgomeryModInt.hpp"
vector<ll> divisor(ll num){
    vector<ll>ret;
    if(num%2==0){
        while(num%2==0)num/=2;
        ret={2};
    }
    for(ll i = 3;i*i<=num;i+=2){
        if(num%i==0){
            ret.pb(i);
            while(num%i==0)num/=i;
        }
    }
    if(num>1)ret.pb(num);
    return ret;
}
mt19937 mt(12345); 
uniform_int_distribution<ll> rnd(0, INF);
using Mint = MontgomeryModInt64;
ll PrimitiveRoot(ll N){
    auto element = divisor(N);
    ll i= 1;
    while(true){
        i++;
        bool ok = true;
        for(auto&v:element){
            auto x = Mint(i).pow(N/v);
            if(x==1&&v<N){
                ok = false;
                break;
            }
        }   
        if(ok){
            return i;
        }
    }
}