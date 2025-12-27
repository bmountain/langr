#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

struct Soundex
{
public:
  std::string encode(const std::string& word) const;

  static const std::size_t MaxCodeLength{4};

private:
  std::string head(const std::string& word) const;
  std::string encodedDigits(const std::string& word) const;
  std::string encodedDigit(char letter) const;
  std::string zeroPad(const std::string& word) const;
};

#endif /* SOUNDEX_H */