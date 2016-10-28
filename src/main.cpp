#include "constify.hpp"
#include "square.hpp"
#include "triangular.hpp"
#include "fibonacci.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << "3 squared is " << square<3>::value << endl;
    cout << "4 squared is " << square_v<4> << endl;

    cout << "The 10th triangular number is " << triangular_v<10> << endl;

    cout << "gcd(182, 126) = " << gcd_v<182, 126> << endl;

    static_assert(std::is_same<const int, constify<int>::type>::value,
        "constify<int>::type should produce a const int");
    static_assert(std::is_same<const int, constify_t<int>>::value,
        "constify_t<int> should produce a const int");

    return 0;
}
