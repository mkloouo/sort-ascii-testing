//
// Created by modnosumov on 5/2/18.
//

#include "sort_ascii.h"
#include <algorithm>

std::string sort_ascii(std::string str) {
    std::sort(str.begin(), str.end(), [](const char c1, const char c2)
    { return c1 < c2; });
    return str;
}

std::string sort_ascii(const char *str) {
    if (!str)
        return "";
    return sort_ascii(std::string {str});
}
