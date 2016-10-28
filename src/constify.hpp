#ifndef CONSTIFY_HPP
#define CONSTIFY_HPP

template<class T>
struct constify {
    using type = const T;
};

template<class T>
using constify_t = typename constify<T>::type;

#endif