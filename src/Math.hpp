#pragma once

#include <stdexcept>

namespace cpp_math {

class Math {
public:
    template <typename T>
    static constexpr T pow(T const& x, unsigned n) {
        if (n == 0) {
            throw std::invalid_argument("expected n >= 1");
        }
        if (n == 1) {
            return x;
        }

        T y = pow(x, n / 2);
        if (n % 2 == 0) {
            return y * y;
        } else {
            return x * y * y;
        }
    }
};


}