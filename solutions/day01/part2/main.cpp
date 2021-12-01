#include <day01/Utilities.ipp>

#include <iostream>

// File auto-generated by StartNewDay

int main(int argc, char* argv[])
{
  const auto inputFile = util::GetInputFile("day01.txt");
  const auto contents = util::ContainerTo<int>(util::Parse(inputFile));

  std::vector<int> windows;
  size_t currentWindow = 0;
  for(auto i = 0; i <= contents.size() - 3; ++i)
  {
    windows.push_back(0);
    windows[currentWindow] = 0;

    for(auto j = i; j < i + 3 && j < contents.size(); ++j)
    {
      windows[currentWindow] += contents[j];
    }

    ++currentWindow;
  }

  auto increaseCount = 0;
  for(auto i = 1; i < windows.size(); ++i)
  {
    if(windows[i] - windows[i - 1] > 0)
    {
      ++increaseCount;
    }
  }

  std::cout << increaseCount << "\n";

  return EXIT_SUCCESS;
}