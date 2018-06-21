#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_AI_NeedToImplement(void)

{

  UnityIgnore( (("Need to Implement AI")), (UNITY_UINT)(18));

}



void test_stringCompare_Given_Hello_and_Hello_expect_1(void)

{

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stringCompare("Hello","Hello"))), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_MuMbo_juMbo_and_mambo_Jumbo_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("MuMbo juMbo","mambo Jumbo"))), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Rambo_and_Rambu_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Rambo","Rambu"))), (

((void *)0)

), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Hell","Hello"))), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Hell0_and_Hell_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Hello","Hell"))), (

((void *)0)

), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

}



void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

 char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

 char *Reply = speakToAiMachine("hi");







 UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

((void *)0)

), (UNITY_UINT)(52));





}



void test_speakToAiMachine_Given_bye_expect_Goodbye_Have_a_nice_day(void)

{

  char *ExpectedReply = "Goodbye. Have a nice day";

 char *Reply = speakToAiMachine("bye");



  UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

 ((void *)0)

 ), (UNITY_UINT)(62));

}
