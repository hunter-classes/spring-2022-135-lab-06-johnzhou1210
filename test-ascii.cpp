#include <iostream>

void ascii(std::string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    char character = str[i];
    std::cout << character << " " << (int)character << "\n";
  }
}

int main()
{


  std::cout << "===============START test-ascii.cpp TESTS=====================\n";
  std::cout << "ascii(\"Cat :3 Dog\") prints:\n"; ascii("Cat :3 Dog"); std::cout << "\n";
  std::cout << "ascii(\"Duck duck goose\") prints:\n"; ascii("Duck duck goose"); std::cout << "\n";
  std::cout << "ascii(\"21WsAQ3e7j8iK(O)p\") prints:\n"; ascii("21WsAQ3e7j8iK(O)p");
  std::cout << "===============END test-ascii.cpp TESTS=====================\n";

  return 0;
}
