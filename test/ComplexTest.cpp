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

constexpr void testComplexComparison() {
    constexpr Z z(5, 10);
    static_assert(z == Z(5, 10));
    static_assert(z != Z(100, 10));
    static_assert(z != Z(5, 100));
}

constexpr void testComplexNegate() {
    constexpr Z z(5, 10);
    constexpr Z negated = -z;
    static_assert(negated == Z(-5, -10));
}

constexpr void testComplexAdd() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z sum = z1 + z2;
    static_assert(sum == Z(8, 14));
}

constexpr void testComplexAddScalar() {
    constexpr Z z(5, 10);
    constexpr Z sum = z + 3;
    static_assert(sum == Z(8, 10));
}

constexpr void testComplexSub() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z sum = z1 - z2;
    static_assert(sum == Z(2, 6));
}

constexpr void testComplexSubScalar() {
    constexpr Z z(5, 10);
    constexpr Z sum = z - 3;
    static_assert(sum == Z(2, 10));
}

constexpr void testComplexMul() {
    constexpr Z z1(5, 10);
    constexpr Z z2(3, 4);
    constexpr Z product = z1 * z2;
    static_assert(product == Z(-25, 50));
}

constexpr void testComplexMulScalar() {
    constexpr Z z(5, 10);
    constexpr Z product = z * 3;
    static_assert(product == Z(15, 30));
}

constexpr void testComplexDivScalar() {
    constexpr Z z(15, 30);
    constexpr Z product = z / 3;
    static_assert(product == Z(5, 10));
}

constexpr void testComplexDiv() {
    constexpr Z z1(2, 4);
    constexpr Z z2(1, 1);
    constexpr Z quo = z1 / z2;
    static_assert(quo == Z(3, 1));
}

constexpr void testConjugate() {
    constexpr Z z(15, 30);
    constexpr Z conjugate = !z;
    static_assert(conjugate == Z(15, -30));
}
