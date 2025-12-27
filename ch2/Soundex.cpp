#include "Soundex.h"
#include <unordered_map>

std::string Soundex::encode(const std::string& word) const
{
  auto encoded = word.substr(0, 1);
  if (word.size() > 1)
    encoded += "1";
  return zeroPad(head(word) + encodedDigits(word));
}

std::string Soundex::head(const std::string& word) const
{
  return word.substr(0, 1);
}

std::string Soundex::encodedDigits(const std::string& word) const
{
  if (word.size() > 1)
    return encodedDigit(word[1]);
  return "";
}

std::string Soundex::encodedDigit(char letter) const
{
  static const std::unordered_map<char, std::string> encodings{
      {'b', "1"},
      {'c', "2"},
      {'d', "3"},
  };
  return encodings.at(letter);
}

std::string Soundex::zeroPad(const std::string& word) const
{
  auto zerosNeeded = MaxCodeLength - word.size();
  return word + std::string(zerosNeeded, '0');
}