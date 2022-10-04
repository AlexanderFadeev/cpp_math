#include "../Vec.hpp"

using namespace cpp_math;

using V = Vec<int, 3>;

constexpr void testVecZeroConstructor() {
    constexpr V vec;
    static_assert(vec[0] == 0);
    static_assert(vec[1] == 0);
    static_assert(vec[2] == 0);
}

constexpr void testVecConstructor() {
    constexpr V vec(1, 2, 3);
    static_assert(vec[0] == 1);
    static_assert(vec[1] == 2);
    static_assert(vec[2] == 3);
}

constexpr void testVecNegate() {
    constexpr V v(1, 2, 3);
    constexpr V n = -v;
    static_assert(n[0] == -1);
    static_assert(n[1] == -2);
    static_assert(n[2] == -3);
}

constexpr void testVecSum() {
    constexpr V v1(1, 2, 3);
    constexpr V v2(10, 20, 30);
    constexpr V sum = v1 + v2;
    static_assert(sum[0] == 11);
    static_assert(sum[1] == 22);
    static_assert(sum[2] == 33);
}