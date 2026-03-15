#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:

		//// write your test cases here
		TEST_METHOD(Test_Draw_Rock_Rock)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
		}

		TEST_METHOD(Test_Draw_Paper_Paper)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
		}

		TEST_METHOD(Test_Draw_Sissor_Sissor)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_SISSOR, STR_SISSOR));
		}

		TEST_METHOD(Test_Player1_Rock_Beats_Sissor)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SISSOR));
		}

		TEST_METHOD(Test_Player1_Sissor_Beats_Paper)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_SISSOR, STR_PAPER));
		}

		TEST_METHOD(Test_Player1_Paper_Beats_Rock)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
		}

		TEST_METHOD(Test_Player2_Rock_Beats_Sissor)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_SISSOR, STR_ROCK));
		}

		TEST_METHOD(Test_Player2_Sissor_Beats_Paper)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SISSOR));
		}

		TEST_METHOD(Test_Player2_Paper_Beats_Rock)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
		}

		TEST_METHOD(Test_Invalid_Player1_Input)
		{
			Assert::AreEqual(STR_INVALID, playGame("Banana", STR_ROCK));
		}

		TEST_METHOD(Test_Invalid_Player2_Input)
		{
			Assert::AreEqual(STR_INVALID, playGame(STR_ROCK, "Apple"));
		}
	};
}
