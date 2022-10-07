#include <array>
#include <cstddef>

template <typename T, size_t M, size_t N>
class Matrix {
public:
    constexpr Matrix() = default;

    constexpr Matrix(std::array<std::array<T, N>, M> const& data)
        : _data(data)
    {}

    constexpr std::array<T, N> const& operator[](size_t rowIdx) const {
        return _data[rowIdx];
    }

private:
    std::array<std::array<T, N>, M> _data;
};