#ifndef CONSTIFY_H
#define CONSTIFY_H

template<class T>
struct constify {
    using type = const T;
};

template<class T>
using constify_t = typename constify<T>::type;

#endif