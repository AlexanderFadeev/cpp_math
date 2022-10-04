#include "../Vec.hpp"

using namespace cpp_math;

using V = Vec<int, 3>;

constexpr void testVecZeroConstructor() {
    constexpr V vec;
    static_assert(vec[0] == 0);
    static_assert(vec[1] == 0);
    static_assert(vec[2] == 0);
}
