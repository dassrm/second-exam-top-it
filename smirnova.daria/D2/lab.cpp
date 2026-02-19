#include "lab.hpp"

namespace smirnova {

bool parseArgs(int argc, char const * const * argv, ParseResult & result)
{
  result.reverse = false;
  (void)argc;
  (void)argv;
  return true;
}

void processInput(bool reverse)
{
  (void)reverse;
}

}
