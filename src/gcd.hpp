/*
 * GCD is a template that yields the gcd of two compile time values provided.
 * This is an example of partial template specialization via enable_if. This
 * is also a good example of SFINAE.
 *
 * Usage:
 * Verbose: gcd<A, B>::value
 * Concise: gcd_v<A, B>
 */

#ifndef GCD_HPP
#define GCD_HPP

#include <type_traits>

template<int A, int B, class Enable = void>
struct gcd {
    static constexpr int value = gcd<B, A % B>::value;
};

template<int A, int B>
struct gcd<A, B, std::enable_if_t<A % B == 0>> {
    static constexpr int value = B;
};

template<int A, int B>
static constexpr int gcd_v = gcd<A, B>::value;

#endif
