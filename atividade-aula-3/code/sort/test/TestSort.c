#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSortA)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(-2, foo(1,2));
  TEST_ASSERT_EQUAL(-1, foo(2,2));
}

TEST(Sort, TestSortB)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, foo(1,2));
}
