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

 UnityAssertEqualNumber((UNITY_INT)((stringCompare("Hello","Hello"))), (UNITY_INT)((1)), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_MuMbo_juMbo_and_mambo_Jumbo_1(void)

{

 UnityAssertEqualNumber((UNITY_INT)((stringCompare("MuMbo juMbo","mambo Jumbo"))), (UNITY_INT)((1)), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Rambo_and_Rambu_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((stringCompare("Rambo","Rambu"))), (UNITY_INT)((1)), (

((void *)0)

), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((stringCompare("Hell","Hello"))), (UNITY_INT)((0)), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Hell0_and_Hell_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((stringCompare("Hello","Hell"))), (UNITY_INT)((0)), (

((void *)0)

), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

}



void test_speakToAiMachine_Given_Hell_and_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

 char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

 char *Reply = speakToAiMachine("hi");



  if ((((Reply)) != 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(50))));};

 UnityAssertEqualNumber((UNITY_INT)((strlen(Reply))), (UNITY_INT)((strlen(ExpectedReply))), (

((void *)0)

), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

((void *)0)

), (UNITY_UINT)(52));



  free(Reply);

}
