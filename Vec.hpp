#pragma once

#include <array>
#include <cstddef>

namespace cpp_math {

template <typename T, size_t N>
class Vec {
public:
    constexpr Vec()
        : _data()
    {}

    constexpr T operator[](size_t index) const {
        return _data[index];
    }

private:
    std::array<T, N> _data;
};

}
