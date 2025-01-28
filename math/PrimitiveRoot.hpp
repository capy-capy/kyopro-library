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
using mint = MontgomeryModInt64;
ll PrimitiveRoot(ll N){
    if(N==2)return 1LL;
    auto element = divisor(N-1);
    mint::set_mod(N);
    ll i= 1;
    while(true){
        i = rnd(mt)%(N-2)+2;
        bool ok = true;
        for(auto&v:element){
            auto x = mint(i).pow((N-1)/v);
            if(x==1&&v<N-1){
                ok = false;
                break;
            }
        }   
        if(ok){
            return i;
        }
    }
}