#define PROBLEM "https://judge.yosupo.jp/problem/primitive_root"

#include "../common/base.hpp"

#include "../math/PrimitiveRoot.hpp"

int main() {
    int Q;
    cin >> Q;
    while(Q--) {
        ll N;
        cin >> N;
        cout<<PrimitiveRoot(N)<<endl;
    }
}