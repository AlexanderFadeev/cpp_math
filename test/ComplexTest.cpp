#include "../Complex.hpp"

using namespace cpp_math;

constexpr void testComplexZeroConstructor() {
    constexpr Complex<int> n;
    static_assert(n.re() == 0);
    static_assert(n.im() == 0);
}
