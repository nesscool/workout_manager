
#include "classtbd.h" // module under test

#include <gtest/gtest.h>

using namespace testing;

class classtbdFixture : public Test
{

};

TEST_F(classtbdFixture, TEST_IS_TRUE)
{
  classtbd tbdobj;

  EXPECT_TRUE(tbdobj.isTrue());
}
