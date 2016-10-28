#ifndef TRIANGULAR_HPP
#define TRIANGULAR_HPP

template<int N>
struct triangular {
    static_assert(N > 0, "Cannot compute negative triangular numbers");

    static constexpr int value = N + triangular<N - 1>::value;
};

template<>
struct triangular<0> {
    static constexpr int value = 0;
};

template<int N>
static constexpr int triangular_v = triangular<N>::value;

#endif