// set.hpp
#ifndef SET_HPP
#define SET_HPP

#include <set>

namespace collections {

    template<typename T>
    class Set {
        std::set<T> s;
    public:
        void insert(const T& val) { s.insert(val); }
        bool contains(const T& val) const { return s.count(val) > 0; }
    };

} // namespace collections

#endif
