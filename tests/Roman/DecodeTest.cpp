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

