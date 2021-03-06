#include <day03/Utilities.ipp>

// File auto-generated by StartNewDay

int main(int argc, char* argv[])
{
  const auto contents = util::Parse(util::GetInputFile("day03.txt"));
  const auto oxygen = util::day03::getOxygenGeneratorRating(contents);
  const auto c02 = util::day03::getC02ScrubberRating(contents);

  std::cout << oxygen * c02 << "\n";

  return EXIT_SUCCESS;
}
