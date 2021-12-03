#include <day03/Utilities.ipp>

// File auto-generated by StartNewDay

int main(int argc, char* argv[])
{
  const auto contents = util::Parse(util::GetInputFile("day03.txt"));
  const auto [gamma, epsilon] = util::day03::getGammaEpsilon(contents);

  std::cout << gamma * epsilon << "\n";

  return EXIT_SUCCESS;
}
