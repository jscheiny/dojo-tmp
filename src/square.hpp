#ifndef SQUARE_HPP
#define SQUARE_HPP

template<int N>
struct square {
    static constexpr int value = N * N;
};

template<int N>
static constexpr int square_v = square<N>::value;

#endif
