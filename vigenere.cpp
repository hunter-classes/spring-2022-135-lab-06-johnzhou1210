#include <iostream>

// assume the keyword contains only lowercase alphabetical characters a-z

#include "caesar.h"

// cake

std::string encryptVigenere(std::string plainTxt, std::string keyWord)
{
  std::string result = plainTxt;
  int keyWordIndx = 0;
  for (int i = 0; i < plainTxt.length(); i++)
  {
    char currElem = plainTxt[i];
    if (isAlpha(currElem))
    {
      // get current keyWord character
      char currKeyWordChar = keyWord[keyWordIndx];
      // turn currKeyWordChar into a numerical value on [0,25]
      int rShift = ((int)(currKeyWordChar)) - 97;
      char shiftedPlainTxtChar = shiftChar(currElem, rShift);
      // replace the original plain text character with the shifted one
      result[i] = shiftedPlainTxtChar;
      keyWordIndx++;
      if (keyWordIndx >= keyWord.length()) // cycle to beginning if exceeds
      {
        keyWordIndx = 0;
      }
    }
  }
return result;
}
