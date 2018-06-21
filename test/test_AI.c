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

void test_AI_NeedToImplement(void)
{
  TEST_IGNORE_MESSAGE("Need to Implement AI");
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

