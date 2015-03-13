#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "Decode.h"
}

TEST_GROUP(Roman)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};



TEST(Roman, Decode_I)
{
	CHECK_EQUAL(1, roman_decode("I"));
}
TEST(Roman, Decode_II)
{
  CHECK_EQUAL(2, roman_decode("II"));
}

TEST(Roman, Decode_V)
{
  CHECK_EQUAL(5, roman_decode("V"));
}

TEST(Roman, Decode_IV)
{
  CHECK_EQUAL(4, roman_decode("IV"));
}
 
TEST(Roman, Decode_VI)
{
	CHECK_EQUAL(6, roman_decode("VI"));
}
TEST(Roman, Decode_LXX)
{
	CHECK_EQUAL(70, roman_decode("LXX"));
}

TEST(Roman,Decode_MDCXVII)
{
	CHECK_EQUAL(1617, roman_decode("MDCXVII"));
}

