#pragma once

#include <vector>

#define BE(X) std::begin(X), std::end(X)

// Usage example: FOR(i, 0, <10)
#define FOR(VAR, FROM, OP_TO) for (auto VAR = (FROM); VAR OP_TO; ++(VAR))

#define UNLESS(COND) if (!(COND))

namespace ul {

// Size operator. Usage example:
//
//     std::vector<int> vs;
//     int size_of_vs = ~vs;
//
template <class T, typename = std::enable_if_t<std::is_invocable_v<decltype(std::size<T>), T>>>
int operator~(const T& v)
{
    return (int)std::size(v);
}

}  // namespace ul
