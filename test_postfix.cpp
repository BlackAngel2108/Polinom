//#include "postfix.h"
//#include <gtest.h>
//
//TEST(TPostfix, can_parse_negative_number) {
//    string str = "-3+1";
//    ASSERT_NO_THROW(TPostfix expression(str));
//}
//
//TEST(TPostfix, can_calculate_expression_with_numbers_and_variables)
//{
//    TPostfix expression(" abacaba-18*(6*7)-156");
//    istringstream values(" 1");
//    ostream output(nullptr);
//    double result = expression.Calculate(values, output);
//    double expected = 1 - 18 * (6 * 7) - 156;
//
//    EXPECT_EQ(expected, result);
//}