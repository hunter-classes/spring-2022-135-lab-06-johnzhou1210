#include <iostream>

#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
  std::cout << "=======================TASK B======================\n";
  std::cout << "shiftChar('A', 25) returns: " << shiftChar('A', 25) << "\n";
  std::cout << "shiftChar('Y', 4) returns: " << shiftChar('Y', 4) << "\n";
  std::cout << "shiftChar('f', 11) returns: " << shiftChar('f', 11) << "\n";
  std::cout << "shiftChar('i', 16) returns: " << shiftChar('i', 16) << "\n";
  std::cout << "shiftChar('Q', 19) returns: " << shiftChar('Q', 19) << "\n";
  std::cout << "encryptCaesar(\"doge\", 8) returns: " << encryptCaesar("doge", 8) << "\n";
  std::cout << "encryptCaesar(\"Caesar\", 10) returns: " << encryptCaesar("Caesar", 10) << "\n";
  std::cout << "encryptCaesar(\"BARK\", 0) returns: " << encryptCaesar("BARK", 0) << "\n";
  std::cout << "encryptCaesar(\"5H1B4 1NU!\", 17) returns: " << encryptCaesar("5H1B4 1NU!", 17) << "\n";
  std::cout << "=======================TASK C======================\n";
  std::cout << "encryptVigenere(\"Hello, world!\", \"cake\") returns: " << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "encryptVigenere(\"Dogs will be dogs. Q.E.D.\", \"doge\") returns: " << encryptVigenere("Dogs will be dogs. Q.E.D.", "doge") << "\n";
  std::cout << "encryptVigenere(\"You're making a lot of sense here!\", \"smart\") returns: " << encryptVigenere("You're making a lot of sense here!", "smart") << "\n";
  std::cout << "=======================TASK D======================\n";
  std::cout << "decryptCaesar(\"lwom\", 8) returns: " << decryptCaesar("lwom", 8) << "\n";
  std::cout << "decryptCaesar(\"Mkockb\", 10) returns: " << decryptCaesar("Mkockb", 10) << "\n";
  std::cout << "decryptCaesar(\"BARK\", 0) returns: " << decryptCaesar("BARK", 0) << "\n";
  std::cout << "decryptCaesar(\"5Y1S4 1EL!\", 17) returns: " << decryptCaesar("5Y1S4 1EL!", 17) << "\n";
  std::cout << "decryptVigenere(\"Jevpq, Wyvnd!\", \"cake\") returns: " << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";
  std::cout << "decryptVigenere(\"Gcmw zwrp es jsjg. W.I.G.\", \"doge\") returns: " << decryptVigenere("Gcmw zwrp es jsjg. W.I.G.", "doge") << "\n";
  std::cout << "decryptVigenere(\"Qau'ix emkzgy m lfm gr svgkq hvkw!\", \"smart\") returns: " << decryptVigenere("Qau'ix emkzgy m lfm gr svgkq hvkw!", "smart") << "\n";
  std::cout << "===================================================\n";


  return 0;
}
