#include "Soundex.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
using namespace testing;

class SoundexEncoding : public Test
{
public:
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainSoleLetterOfOneLetterWord)
{
  auto encoded = soundex.encode("A");
  ASSERT_THAT(encoded, Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits)
{
  auto encoded = soundex.encode("I");
  ASSERT_THAT(encoded, Eq("I000"));
}

TEST_F(SoundexEncoding, ReplacesConsonantsWithAppropriateDigits)
{
  auto encoded = soundex.encode("Ab");
  ASSERT_THAT(encoded, Eq("A100"));
}