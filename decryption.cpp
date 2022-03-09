#include  <iostream>
#include "caesar.h"

char shiftChar2(char c, int lShift)
{
  if (!(c >= 65 && c <= 90) && !(c >= 97 && c <= 122)) // if not alphabetical character
  {
    return c;
  }
  // take care of bounds
  int newAscii = c - lShift;
  if (newAscii < 65 && (c >= 65 && c <= 90)) // capital underflow
  {
    int underflow = 65 - newAscii - 1;
    return (char)(90 - underflow);
  }
  if (newAscii < 97 && (c >= 97 && c <= 122)) // lowercase underflow
  {
    // std::cout << "lowercase overflow!\n";
    int underflow = 97 - newAscii - 1;
    return (char)(122 - underflow);
  }
  return (char)(newAscii);
}

std::string decryptCaesar(std::string cipherTxt, int lShift)
{
  // to find original, shift left instead
  std::string result = cipherTxt;
  for (int i = 0; i < cipherTxt.length(); i++)
  {
    char currChar = cipherTxt[i];
    char shiftedChar = shiftChar2(currChar, lShift);
    result[i] = shiftedChar;

  }
  return result;
}

std::string decryptVigenere(std::string cipherTxt, std::string keyWord)
{
  std::string result = cipherTxt;
  int keyWordIndx = 0;
  for (int i = 0; i < cipherTxt.length(); i++)
  {
    char currElem = cipherTxt[i];
    if (isAlpha(currElem))
    {
      // get current keyWord character
      char currKeyWordChar = keyWord[keyWordIndx];
      // turn currKeyWordChar into a numerical value on [0,25]
      int rShift = ((int)(currKeyWordChar)) - 97;
      char shiftedCipherTxtChar = shiftChar2(currElem, rShift);
      // replace the original plain text character with the shifted one
      result[i] = shiftedCipherTxtChar;
      keyWordIndx++;
      if (keyWordIndx >= keyWord.length()) // cycle to beginning if exceeds
      {
        keyWordIndx = 0;
      }
    }
  }
  return result;
}
