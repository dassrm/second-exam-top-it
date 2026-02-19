#ifndef SMIRNOVA_LAB_HPP
#define SMIRNOVA_LAB_HPP

namespace smirnova {

struct ParseResult {
  bool reverse;
};

bool parseArgs(int argc, char const * const * argv, ParseResult & result);

void processInput(bool reverse);

} // namespace smirnova

#endif
