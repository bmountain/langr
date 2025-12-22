#include "Soundex.h"

std::string Soundex::encode(const std::string& word) const
{
  auto encoded = word.substr(0, 1);
  if (word.size() > 1)
    encoded += "1";
  return zeroPad(encoded);
}

std::string Soundex::zeroPad(const std::string& word) const
{
  return word + "000";
}