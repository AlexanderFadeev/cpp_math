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

    constexpr bool operator==(Matrix const& other) const = default;
    constexpr bool operator!=(Matrix const& other) const = default;

    constexpr Matrix operator+(Matrix const& other) const {
        auto sum = *this;

        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                sum._data[i][j] += other._data[i][j];
            }
        }

        return sum;
    }

private:
    std::array<std::array<T, N>, M> _data;
};