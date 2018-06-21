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
	TEST_ASSERT_EQUAL(stringCompare("Hello","Hello"),1);
}

void test_stringCompare_Given_MuMbo_juMbo_and_mambo_Jumbo_1(void)
{
	TEST_ASSERT_EQUAL(stringCompare("MuMbo juMbo","mambo Jumbo"),1);
}

void test_stringCompare_Given_Rambo_and_Rambu_0(void)
{
	TEST_ASSERT_EQUAL(stringCompare("Rambo","Rambu"),1);
}
void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
	TEST_ASSERT_EQUAL(stringCompare("Hell","Hello"),0);
}

void test_stringCompare_Given_Hell0_and_Hell_expect_0(void)
{
	TEST_ASSERT_EQUAL(stringCompare("Hello","Hell"),0);
}

void test_speakToAiMachine_Given_Hell_and_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)
{
	char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";
	char *Reply = speakToAiMachine("hi");

  TEST_ASSERT_NOT_NULL(Reply);
	TEST_ASSERT_EQUAL(strlen(Reply),strlen(ExpectedReply));
	TEST_ASSERT_EQUAL_STRING(Reply,ExpectedReply);

  free(Reply);
}
