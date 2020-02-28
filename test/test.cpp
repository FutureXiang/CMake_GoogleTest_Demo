//
// Created by xiangweilai on 2020/2/28.
//

#include <iostream>
#include "gtest/gtest.h"
#include "APlusB.h"

TEST(Demo, failed) {
    std::cout << "Running GoogleTestDemo_failed" << std::endl;
    ASSERT_EQ(1+2, 5);
}

TEST(Demo, passed) {
    std::cout << "Running GoogleTestDemo_passed" << std::endl;
    ASSERT_EQ(1+2, 3.0);
}

TEST(Demo, caller) {
    std::cout << "Running GoogleTestDemo_caller" << std::endl;
    ASSERT_EQ(1+2, add(1, 2));
}

TEST(Demo, caller2) {
    std::cout << "Running GoogleTestDemo_caller2" << std::endl;
    ASSERT_EQ(1.5+2.5, add(1.5, 2.5));
}