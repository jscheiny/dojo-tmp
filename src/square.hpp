/*
 * Constify is a template that yields a compile time constant value which is the
 * square of the input value. This is a basic example of working with compile
 * time constants.
 *
 * Usage:
 * Verbose: square<N>::value
 * Concise: square_v<N>
 */

#ifndef SQUARE_HPP
#define SQUARE_HPP

template<int N>
struct square {
    static constexpr int value = N * N;
};

template<int N>
static constexpr int square_v = square<N>::value;

#endif
