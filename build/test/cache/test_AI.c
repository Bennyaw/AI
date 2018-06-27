#include "build/temp/_test_AI.c"
#include "AI.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_stringCompare_Given_Hello_and_Hello_expect_1(void)

{

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stringCompare("Hello","Hello"))), (

((void *)0)

), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_MuMbo_juMbo_and_mambo_Jumbo_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("MuMbo juMbo","mambo Jumbo"))), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Rambo_and_Rambu_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Rambo","Rambu"))), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Hell","Hello"))), (

((void *)0)

), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}



void test_stringCompare_Given_Hell0_and_Hell_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringCompare("Hello","Hell"))), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

}



void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void)

{

 char *ExpectedReply = "Hi there! My name is TheMachine. What is yours?";

 char *Reply = speakToAiMachine("hi");







 UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

((void *)0)

), (UNITY_UINT)(47));





}



void test_speakToAiMachine_Given_bye_expect_Goodbye_Have_a_nice_day(void)

{

 char *ExpectedReply = "Goodbye. Have a nice day";

 char *Reply = speakToAiMachine("bye");



  UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

 ((void *)0)

 ), (UNITY_UINT)(57));

}



void test_extractName_Given_My_name_is_Me_expect_Me(void)

{

 char *ExpectedReply = "Me";

 char *Reply = extractName("My name is Me");



 UnityAssertEqualString((const char*)((Reply)), (const char*)((ExpectedReply)), (

((void *)0)

), (UNITY_UINT)(65));

}



void test_stringContain_given_My_name_is_Me_expect_1(void)

{

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stringContain("My name is ","My name is Me"))), (

((void *)0)

), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

}



void test_stringContain_given_My_mom_is_she_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringContain("My name is ","My mom is she"))), (

((void *)0)

), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

}



void test_stringContain_given_My_name_is_Me_without_space_expect_0(void)

{

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stringContain("My name is","My name is Me"))), (

((void *)0)

), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_INT);

}



void test_with_3_function_together(void)

{

 char *ExpectedReply1 = "Hi there! My name is TheMachine. What is yours?";

 char *Reply1 = speakToAiMachine("hey");

 UnityAssertEqualString((const char*)((Reply1)), (const char*)((ExpectedReply1)), (

((void *)0)

), (UNITY_UINT)(87));



 char *ExpectedReply2 = "Nice to meet you, Joker";

 char *Reply2 = speakToAiMachine("My name is Joker");

 UnityAssertEqualString((const char*)((Reply2)), (const char*)((ExpectedReply2)), (

((void *)0)

), (UNITY_UINT)(91));



 char *ExpectedReply3 = "Goodbye. Have a nice day";

 char *Reply3 = speakToAiMachine("bye");

 UnityAssertEqualString((const char*)((Reply3)), (const char*)((ExpectedReply3)), (

((void *)0)

), (UNITY_UINT)(95));

}
