#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

TEST_CASE("Test shiftChar function")
{
  CHECK(shiftChar('A', 25) == 'Z');
  CHECK(shiftChar('Y', 4) == 'C');
  CHECK(shiftChar('f', 11) == 'q');
  CHECK(shiftChar('i', 16) == 'y');
  CHECK(shiftChar('Q', 19) == 'J');
}

TEST_CASE("Test encryptCaesar function")
{
  CHECK(encryptCaesar("doge", 8) == "lwom");
  CHECK(encryptCaesar("Caesar", 10) == "Mkockb");
  CHECK(encryptCaesar("BARK", 0) == "BARK");
  CHECK(encryptCaesar("5H1B4 1NU!", 17) == "5Y1S4 1EL!");
}

TEST_CASE("Test encryptVigenere function")
{
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("Dogs will be dogs. Q.E.D.", "doge") == "Gcmw zwrp es jsjg. W.I.G.");
  CHECK(encryptVigenere("You're making a lot of sense here!", "smart") == "Qau'ix emkzgy m lfm gr svgkq hvkw!");
}

TEST_CASE("Test decryptCaesar function")
{
  CHECK(decryptCaesar("lwom", 8) == "doge");
  CHECK(decryptCaesar("Mkockb", 10) == "Caesar");
  CHECK(decryptCaesar("BARK", 0) == "BARK");
  CHECK(decryptCaesar("5Y1S4 1EL!", 17) == "5H1B4 1NU!");
}

TEST_CASE("Test decryptVigenere function")
{
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  CHECK(decryptVigenere("Gcmw zwrp es jsjg. W.I.G.", "doge") == "Dogs will be dogs. Q.E.D.");
  CHECK(decryptVigenere("Qau'ix emkzgy m lfm gr svgkq hvkw!", "smart") == "You're making a lot of sense here!");
}
