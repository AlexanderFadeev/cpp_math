#include "../Complex.hpp"

using namespace cpp_math;

using Z = Complex<int>;

constexpr void testComplexZeroConstructor() {
    constexpr Z z;
    static_assert(z.re() == 0);
    static_assert(z.im() == 0);
}

constexpr void testComplexOneConstructor() {
    constexpr Z z(5);
    static_assert(z.re() == 5);
    static_assert(z.im() == 0);
}

constexpr void testComplexTwoConstructor() {
    constexpr Z z(5, 10);
    static_assert(z.re() == 5);
    static_assert(z.im() == 10);
}

constexpr void testComplexNegate() {
    constexpr Z z(5, 10);
    constexpr Z negated = -z;
    static_assert(negated.re() == -5);
    static_assert(negated.im() == -10);
}

constexpr void testComplexAdd() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z sum = z1 + z2;
    static_assert(sum.re() == 8);
    static_assert(sum.im() == 14);
}

constexpr void testComplexAddScalar() {
    constexpr Z z(5, 10);
    constexpr Z sum = z + 3;
    static_assert(sum.re() == 8);
    static_assert(sum.im() == 10);
}

constexpr void testComplexSub() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z sum = z1 - z2;
    static_assert(sum.re() == 2);
    static_assert(sum.im() == 6);
}

constexpr void testComplexSubScalar() {
    constexpr Z z(5, 10);
    constexpr Z sum = z - 3;
    static_assert(sum.re() == 2);
    static_assert(sum.im() == 10);
}

constexpr void testComplexMul() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z product = z1 * z2;
    static_assert(product.re() == -25);
    static_assert(product.im() == 50);
}

constexpr void testComplexMulScalar() {
    constexpr Z z(5, 10);
    constexpr Z product = z * 3;
    static_assert(product.re() == 15);
    static_assert(product.im() == 30);
}

constexpr void testComplexDivScalar() {
    constexpr Z z(15, 30);
    constexpr Z product = z / 3;
    static_assert(product.re() == 5);
    static_assert(product.im() == 10);
}

constexpr void testComplexDiv() {
    constexpr Z z1(2, 4);
    constexpr Z z2(1, 1);
    constexpr Z quo = z1 / z2;
    static_assert(quo.re() == 3);
    static_assert(quo.im() == 1);
}
