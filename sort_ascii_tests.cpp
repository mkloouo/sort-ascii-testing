//
// Created by modnosumov on 5/2/18.
//

#include "sort_ascii.h"
#include <gtest/gtest.h>

namespace {
    TEST(SortAsciiTest, Sorted) {
        EXPECT_EQ("abc", sort_ascii("abc"));
        EXPECT_EQ("123", sort_ascii("123"));
        EXPECT_EQ("ABC", sort_ascii("ABC"));
    }

    TEST(SortAsciiTest, Simple) {
        EXPECT_EQ("123abc", sort_ascii("abc123"));
        EXPECT_EQ("ADEFJad", sort_ascii("aAdEFJD"));
        EXPECT_EQ(" dehllloorw", sort_ascii("hello world"));
    }

    TEST(SortAsciiTest, Complex) {
        EXPECT_EQ("                      $$$111222334AAAaaaaddddddqqssssww",
                  sort_ascii("123       123      412ad qwdqw sd as dasd asd  A AA $$$"));
    }

    TEST(SortAsciiTest, BadInput) {
        EXPECT_EQ("", sort_ascii(""));
        EXPECT_EQ("", sort_ascii(nullptr));
        EXPECT_EQ("", sort_ascii(NULL));
    }
}
