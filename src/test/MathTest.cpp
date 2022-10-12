#include "../Math.hpp"
#include "../Matrix.hpp"

using namespace cpp_math;

constexpr void testPow() {
    constexpr auto result = Math::pow(2, 7);
    static_assert(result == 128);  
}
