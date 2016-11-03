#include <gtest/gtest.h>
#include "MyStack.h"

TEST(MyStack, can_create_a_stack) {
    ASSERT_NO_THROW(MyStack s);
}
TEST(MyStack, can_delete_a_stack) {
    MyStack *s = new MyStack;
    ASSERT_NO_THROW(delete s);
}

TEST(MyStack, push_works_correctly) {
    MyStack s;
    EXPECT_TRUE(s.push(5));
}
TEST(MyStack, GetTop_works_correctly) {
    MyStack s;
    s.push(5);
    EXPECT_EQ(5, s.GetTop());
}
TEST(MyStack, GetTop_works_correctly_with_a_number_of_items) {
    MyStack s;
    s.push(5);
    s.push(1);
    s.push(8);
    EXPECT_EQ(8, s.GetTop());
}
TEST(MyStack, throws_when_GetTop_work_with_empty_stack) {
    MyStack s;
    EXPECT_ANY_THROW(s.GetTop());
}
TEST(MyStack, pop_works_correctly) {
    MyStack s;
    s.push(5);
    EXPECT_TRUE(s.pop());
}

TEST(MyStack, pop_works_correctly_witn_empty_stack) {
    MyStack s;
    EXPECT_FALSE(s.pop());
}
TEST(MyStack, throws_when_min_work_with_empty_stack) {
    MyStack s;
    EXPECT_ANY_THROW(s.min());
}
TEST(MyStack, min_works_correctly) {
    MyStack s;
    s.push(5);
    s.push(1);
    s.push(8);
    EXPECT_EQ(1, s.min());
}
