/*
 * Constify is a template that yields a type that is the const version of the
 * input type. This is an example of a basic type transformation. Note that
 * constify is the same as std::add_const.
 *
 * Usage:
 * Verbose: constify<T>::type
 * Concise: constify_t<T>
 */

#ifndef CONSTIFY_HPP
#define CONSTIFY_HPP

template<class T>
struct constify {
    using type = const T;
};

template<class T>
using constify_t = typename constify<T>::type;

#endif