#include "c-echo.h"
#include "gtest/gtest.h"

//regular
TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

//empty 
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

//single character + white space string
TEST(EchoTest, SingleString) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = " ";
    EXPECT_EQ(" ", echo(2,test_val));
}

//large string 
TEST(EchoTest, LargeString) {
    char* test_val[30]; test_val[0] = "./c-echo"; 
	test_val[1] = "This";
	test_val[2] = "new";
	test_val[3] = "test";
	test_val[4] = "makes"; 
	test_val[5] = "two";
	test_val[6] = "valuable";
	test_val[7] = "additions";
	test_val[8] = "to";
	test_val[9] = "our";
	test_val[10] = "system.";
	test_val[11] = "The";
	test_val[12] = "first";
	test_val[13] = "is";
	test_val[14] = "if";
	test_val[15] = "another";
	test_val[16] = "developer";
	test_val[17] = "modifies";
	test_val[18] = "the";
	test_val[19] = "functionality";
	test_val[20] = "of";
	test_val[21] = "our";
	test_val[22] = "echo";
	test_val[23] = "function";
	test_val[24] = "to";
	test_val[25] = "do";
	test_val[26] = "anything";
	test_val[27] = "on";
	test_val[28] = "a";
	test_val[29] = "blank";
	EXPECT_EQ("This new test makes two valuable additions to our system. The first is if another developer modifies the functionality of our echo function to do anything on a blank", echo(30,test_val));
}

//special characters
TEST(EchoTest, SpecialString) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = " "; test_val[2] = "\n"; test_val[3]  = "\"quotation marks\""; test_val[4] = "\'single\'"; test_val[5] = "\\back slash\\";
EXPECT_EQ("  \n \"quotation marks\" \'single\' \\back slash\\", echo(6,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
