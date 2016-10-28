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
