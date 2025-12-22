#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

struct Soundex
{
public:
  std::string encode(const std::string& word) const;

private:
  std::string zeroPad(const std::string& word) const;
};

#endif /* SOUNDEX_H */