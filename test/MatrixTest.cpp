#include "../Matrix.hpp"

constexpr size_t M = 3;
constexpr size_t N = 3;
using Mat = Matrix<int, M, N>;

constexpr bool testMatrixZeroConstructor() {
    constexpr auto mat = Mat();

    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            if (mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}
static_assert(testMatrixZeroConstructor());

constexpr bool testMatrixConstructor() {
    constexpr auto mat = Mat({{
        {{1, 2, 3}},
        {{4, 5, 6}},
        {{7, 8, 9}}
    }});

    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            if (mat[i][j] != (3 * i + j + 1)) {
                return false;
            }
        }
    }
    return true;
}
static_assert(testMatrixConstructor());
