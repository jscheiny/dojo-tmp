#ifndef SQUARE_H
#define SQUARE_H

template<int N>
struct square {
    static constexpr int value = N * N;
};

template<int N>
static constexpr int square_v = square<N>::value;

#endif
