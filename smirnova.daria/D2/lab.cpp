#include "lab.hpp"

#include <cstring>

namespace smirnova {

bool parseArgs(int argc, char const * const * argv, ParseResult & result)
{
  result.reverse = false;
  if (argc == 1) {
    return true;
  }
  if (argc == 2 && std::strcmp(argv[1], "reverse") == 0) {
    result.reverse = true;
    return true;
  }
  return false;
}

void processInput(bool reverse)
{
  (void)reverse;
}

}
