#include "lab.hpp"

int main(int argc, char * argv[])
{
  smirnova::ParseResult args;
  smirnova::parseArgs(argc, const_cast<char const * const *>(argv), args);
  smirnova::processInput(args.reverse);
  return 0;
}
