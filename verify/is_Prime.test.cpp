#define PROBLEM "https://judge.yosupo.jp/problem/primality_test"

#include "../Cpp/common/base.hpp"

#include "../Cpp/math/is_Prime.hpp"

int main() {
    int Q;
    cin >> Q;
    while(Q--) {
        ll N;
        cin >> N;
        YesNo(is_prime(N));
    }
}