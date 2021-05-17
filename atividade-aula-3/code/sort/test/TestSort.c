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
  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 5);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 5);
}

TEST(Sort, TestSortB)
{

  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 6);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 6);
}

TEST(Sort, TestSortC)
{

  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 4);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 4);
}

TEST(Sort, TestSortD)
{

  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 4);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 4);
}

TEST(Sort, TestSortE)
{

  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 3);

  TEST_ASSERT_NOT_EQUAL(ref[4], sample[4]);
}

TEST(Sort, TestSortF)
{

  int ref[] = {1, 2, 3, 4, 5};

  char sample[] = {2, 1, 5, 3, 4};

  cj_sort(sample, 5);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 5);
}

TEST(Sort, TestSortG)
{

  int ref[] = {1, 2, 3, 4, 5};

  int sample[] = {1, 2, 3, 4, 5};

  cj_sort(sample, 5);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 5);
}


TEST(Sort, TestSortH)
{

  int ref[] = {1};

  int sample[] = {1};

  cj_sort(sample, 1);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample, 1);
}

TEST(Sort, TestSortI)
{

  int ref[] = {1,2,3,4,5};

  int sample[5];

  cj_sort(sample, 5);

  TEST_ASSERT_EQUAL_INT_ARRAY(ref, sample,5);
}
