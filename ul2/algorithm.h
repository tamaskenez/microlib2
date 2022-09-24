#pragma once

namespace ul {

template <class Container>
void sort_unique_truncate_inplace(Container& c)
{
    std::sort(BE(c));
    c.erase(std::unique(BE(c)), c.end());
}

template <class Container>
void unique_truncate_inplace(Container& c)
{
    assert(std::is_sorted(BE(c)));
    c.erase(std::unique(BE(c)), c.end());
}

}  // namespace ul