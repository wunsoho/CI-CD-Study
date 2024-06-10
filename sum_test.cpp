#include <gtest/gtest.h>
#include "sum.h"

/**
 * @brief 작성된 테스트 코드
 * 
 * 테스트하고자 하는 내용을 작성한다.
 */
TEST(SUM_TEST/*test case name*/, SUM_TEST_1/*test name*/)
{
  // sum(1,1) 함수 실행 결과가 2와 동일한지 확인한다 - 동일할 경우 테스트 통과, 다를 경우 테스트 실패
  EXPECT_EQ(2, sum(1,1)); 
}

/**
 * @brief 테스트 메인 함수. 
 * 
 * 모든 테스트 코드에서 변경없이 아래와 같은 통일된 내용으로 작성한다.
 * RUN_ALL_TESTS() 매크로에 의해, 정의된 모든 테스트함수가 실행된다.
 */
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}