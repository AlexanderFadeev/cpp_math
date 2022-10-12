#include <array>
#include <cstddef>

namespace cpp_math {

template <typename T, size_t M, size_t N>
class Matrix {
public:
    constexpr Matrix()
        : _data({})
    {}

    constexpr Matrix(std::array<std::array<T, N>, M> const& data)
        : _data(data)
    {}

    constexpr std::array<T, N> const& operator[](size_t rowIdx) const {
        return _data[rowIdx];
    }

    constexpr bool operator==(Matrix const& other) const = default;
    constexpr bool operator!=(Matrix const& other) const = default;

    constexpr Matrix operator-() const {
        Matrix neg;

        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                neg._data[i][j] = -_data[i][j];
            }
        }

        return neg;
    }

    constexpr Matrix operator+(Matrix const& other) const {
        auto sum = *this;

        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                sum._data[i][j] += other._data[i][j];
            }
        }

        return sum;
    }

    constexpr Matrix operator-(Matrix const& other) const {
        return (*this) + (-other);
    }

    template <size_t K>
    constexpr Matrix<T, M, K> operator*(Matrix<T, N, K> const& other) const {
        Matrix<T, M, K> result;

        for (size_t i = 0; i < M; i++) {
            for (size_t j = 0; j < N; j++) {
                for (size_t k = 0; k < K; k++) {
                    result._data[i][k] += _data[i][j] * other._data[j][k];
                }
            }
        }

        return result;
    }

private:
    std::array<std::array<T, N>, M> _data;

    template <typename TT, size_t MM, size_t NN>
    friend class Matrix;
};

}