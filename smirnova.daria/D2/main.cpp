#include "lab.hpp"

#include <iostream>

int main(int argc, char * argv[])
{
  smirnova::ParseResult args;
  if (!smirnova::parseArgs(argc, const_cast<char const * const *>(argv), args)) {
    std::cerr << "Usage: ./lab [reverse]\n";
    return 1;
  }
  smirnova::processInput(args.reverse);
  return 0;
}
