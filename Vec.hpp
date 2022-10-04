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

    template <typename ...Args>
    constexpr Vec(Args const& ...args)
        : _data({args...})
    {}

    constexpr T operator[](size_t index) const {
        return _data[index];
    }

    constexpr Vec operator+(Vec const& other) const {
        auto sum = *this;
        for (size_t idx = 0; idx < N; idx++) {
            sum._data[idx] += other._data[idx];
        }
        return sum;
    }

private:
    std::array<T, N> _data;
};

}
