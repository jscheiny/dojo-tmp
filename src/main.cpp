#include "constify.hpp"
#include "square.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << "3 squared is " << square<3>::value << endl;
    cout << "4 squared is " << square_v<4> << endl;

    static_assert(std::is_same<const int, constify<int>::type>::value,
        "constify<int>::type should produce a const int");
    static_assert(std::is_same<const int, constify_t<int>>::value,
        "constify_t<int> should produce a const int");

    return 0;
}
