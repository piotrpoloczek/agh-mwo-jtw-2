// map.hpp
#ifndef MAP_HPP
#define MAP_HPP

#include <map>

namespace collections {

    template<typename K, typename V>
    class Map {
        std::map<K, V> m;
    public:
        void insert(const K& key, const V& value) { m[key] = value; }
        V get(const K& key) const { return m.at(key); }
        bool contains(const K& key) const { return m.count(key) > 0; }
    };

} // namespace collections

#endif