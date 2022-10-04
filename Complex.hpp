#pragma once

namespace cpp_math {

template <typename T>
class Complex {
public:
    constexpr Complex()
        : _re()
        , _im()
    {}

    constexpr Complex(T const& re)
        : _re(re)
        , _im()
    {}

    constexpr Complex(T const& re, T const& im)
        : _re(re)
        , _im(im)
    {}

    constexpr T re() const {
        return _re;
    }

    constexpr T im() const {
        return _im;
    }

    constexpr Complex operator-() const {
        return Complex(-_re, -_im);
    }

    constexpr Complex operator+(Complex const& other) const {
        return Complex(_re + other._re, _im + other._im);
    }

    constexpr Complex operator-(Complex const& other) const {
        return *this + (-other);
    }

private:
    T _re;
    T _im;

};

}
