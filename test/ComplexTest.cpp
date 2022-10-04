#include "../Complex.hpp"

using namespace cpp_math;

constexpr void testComplexZeroConstructor() {
    constexpr Complex<int> n;
    static_assert(n.re() == 0);
    static_assert(n.im() == 0);
}

constexpr void testComplexOneConstructor() {
    constexpr Complex<int> n(5);
    static_assert(n.re() == 5);
    static_assert(n.im() == 0);
}

constexpr void testComplexTwoConstructor() {
    constexpr Complex<int> n(5, 10);
    static_assert(n.re() == 5);
    static_assert(n.im() == 10);
}
