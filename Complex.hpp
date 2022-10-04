#pragma once

namespace cpp_math {

template <typename T>
class Complex {
public:
    constexpr Complex()
        : _re()
        , _im()
    {}

    constexpr T re() const {
        return _re;
    }

    constexpr T im() const {
        return _im;
    }

private:
    T _re;
    T _im;

};

}
