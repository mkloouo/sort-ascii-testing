#include <cstdio>
#include <gtest/gtest.h>

int main(int ac, char **av) {
    printf("Starting \"%s\"\n", __PRETTY_FUNCTION__);
    testing::InitGoogleTest(&ac, av);
    return RUN_ALL_TESTS();
}