#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "unity.h"
#include "AI.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_stringCompare_Given_Hello_and_Hello_expect_1(void)
{
	TEST_ASSERT_EQUAL(1,stringCompare("Hello","Hello"));
}

void test_stringCompare_Given_MuMbo_juMbo_and_mambo_Jumbo_0(void)
{
	TEST_ASSERT_EQUAL(0,stringCompare("MuMbo juMbo","mambo Jumbo"));
}

void test_stringCompare_Given_Rambo_and_Rambu_0(void)
{
	TEST_ASSERT_EQUAL(0,stringCompare("Rambo","Rambu"));
}
void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
	TEST_ASSERT_EQUAL(0,stringCompare("Hell","Hello"));
}

void test_stringCompare_Given_Hell0_and_Hell_expect_0(void)
{
	TEST_ASSERT_EQUAL(0,stringCompare("Hello","Hell"));
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
	char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";
	char *Reply = speakToAiMachine("hi");

//  TEST_ASSERT_NOT_NULL(Reply);
//	TEST_ASSERT_EQUAL(strlen(Reply),strlen(ExpectedReply));
	TEST_ASSERT_EQUAL_STRING(Reply,ExpectedReply);

//  free(Reply);
}

void test_speakToAiMachine_Given_bye_expect_Goodbye_Have_a_nice_day(void)
{
	char *ExpectedReply = "Goodbye. Have a nice day";
	char *Reply = speakToAiMachine("bye");
  
  TEST_ASSERT_EQUAL_STRING(Reply,ExpectedReply);
}

void test_extractName_Given_My_name_is_Me_expect_Me(void)
{
	char *ExpectedReply = "Me";
	char *Reply = extractName("My name is Me");
	
	TEST_ASSERT_EQUAL_STRING(Reply,ExpectedReply);
}

void test_stringContain_given_My_name_is_Me_expect_1(void)
{
	TEST_ASSERT_EQUAL(1,stringContain("My name is ","My name is Me"));
}

void test_stringContain_given_My_mom_is_she_expect_0(void)
{
	TEST_ASSERT_EQUAL(0,stringContain("My name is ","My mom is she"));
}

void test_stringContain_given_My_name_is_Me_without_space_expect_0(void)
{
	TEST_ASSERT_EQUAL(0,stringContain("My name is","My name is Me"));
}

void test_with_3_function_together(void)
{
	char  *ExpectedReply1  = "Hi there! My name is TheMachine. What is yours?";
	char  *Reply1          = speakToAiMachine("hey");
	TEST_ASSERT_EQUAL_STRING(Reply1,ExpectedReply1);
	
	char  *ExpectedReply2 = "Nice to meet you, Joker";
	char  *Reply2 	  = speakToAiMachine("My name is Joker");
	TEST_ASSERT_EQUAL_STRING(Reply2,ExpectedReply2);
	
	char *ExpectedReply3 = "Goodbye. Have a nice day";
	char *Reply3 = speakToAiMachine("bye");
	TEST_ASSERT_EQUAL_STRING(Reply3,ExpectedReply3);
}