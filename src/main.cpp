#include <iostream>
#include <limits>

using std::cout;
using std::endl;

template<int N> constexpr int square_v = N * N;

int main(int argc, char const *argv[]) {
    cout << square_v<4> << endl;
    return 0;
}