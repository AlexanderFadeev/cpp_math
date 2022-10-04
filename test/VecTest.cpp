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