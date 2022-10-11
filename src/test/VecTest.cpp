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

constexpr void testVecEqual() {
    constexpr V vec(1, 2, 3);
    static_assert(vec == V(1, 2, 3));
    static_assert(vec != V(5, 2, 3));
    static_assert(vec != V(1, 5, 3));
    static_assert(vec != V(1, 2, 5));
}

constexpr void testVecNegate() {
    constexpr V v(1, 2, 3);
    constexpr V n = -v;
    static_assert(n == V(-1, -2, -3));
}

constexpr void testVecSum() {
    constexpr V v1(1, 2, 3);
    constexpr V v2(10, 20, 30);
    constexpr V sum = v1 + v2;
    static_assert(sum == V(11, 22, 33));
}

constexpr void testVecSub() {
    constexpr V v1(10, 20, 30);
    constexpr V v2(1, 2, 3);
    constexpr V dif = v1 - v2;
    static_assert(dif == V(9, 18, 27));
}

constexpr void testVecMulScalar() {
    constexpr V v(1, 2, 3);
    constexpr V product = v * 10;
    static_assert(product == V(10, 20, 30));
}