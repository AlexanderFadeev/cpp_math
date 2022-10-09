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

constexpr void testMatrixEquality() {
    constexpr auto mat1 = Mat({{
        {{1, 2, 3}},
        {{4, 5, 6}},
        {{7, 8, 9}}
    }});
    constexpr auto mat2 = Mat({{
        {{9, 8, 7}},
        {{6, 5, 4}},
        {{3, 2, 1}}
    }});

    static_assert(mat1 == mat1);
    static_assert(mat1 != mat2);
}

constexpr void testMatrixNegate() {
    constexpr auto mat = Mat({{
        {{1, 2, 3}},
        {{4, 5, 6}},
        {{7, 8, 9}}
    }});

    constexpr auto neg = -mat;
    static_assert(neg == Mat({{
        {{-1, -2, -3}},
        {{-4, -5, -6}},
        {{-7, -8, -9}},
    }}));
}

constexpr void testMatrixSum() {
    constexpr auto mat1 = Mat({{
        {{1, 2, 3}},
        {{4, 5, 6}},
        {{7, 8, 9}}
    }});
    constexpr auto mat2 = Mat({{
        {{9, 8, 7}},
        {{6, 5, 4}},
        {{3, 2, 1}}
    }});

    constexpr auto sum = mat1 + mat2;
    static_assert(sum == Mat({{
        {{10, 10, 10}},
        {{10, 10, 10}},
        {{10, 10, 10}},
    }}));
}