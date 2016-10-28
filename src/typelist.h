#ifndef TYPE_LIST_H
#define TYPE_LIST_H

template<class... Ts>
struct type_list {
    static constexpr auto size = sizeof...(Ts);
};


template<class List>
struct head {};

template<template<class...> class Container,
         class Head,
         class... Tail>
struct head<Container<Head, Tail...>> {
    using type = Head;
};


template<class List>
struct tail {};

template<template<class...> class Container,
         class Head,
         class... Tail>
struct tail<Container<Head, Tail...>> {
    using type = Container<Tail...>;
};


template<class List, class ToPrepend>
struct prepend {};

template<template<class...> class Container,
         class... Elements,
         class ToPrepend>
struct prepend<Container<Elements...>, ToPrepend> {
    using type = Container<ToPrepend, Elements...>;
};


template<class List, class ToAppend>
struct append {};

template<template<class...> class Container,
         class... Elements,
         class ToAppend>
struct append<Container<Elements...>, ToAppend> {
    using type = Container<Elements..., ToAppend>;
};

#endif
