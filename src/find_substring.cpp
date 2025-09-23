#include <string>
#include "find_substring.hpp"
#include <iostream>

int find_substring(std::string input, char c) {
   for (int i = 0; i < input.length(); i++) {
      if (input[i] == c) {
         return i;
      }
   }
   return -1;
}

int find_substring(std::string input, std::string str) {

   // input = "abcdef" length = 6
   // str   = "abc"    length = 3

   for (int i = 0; i < input.length() - str.length() + 1; i++) {
      std::string substr;
      for (int j = i; j < str.length() + i; j++) {
         substr += input[j];
      }
      std::cout << substr << std::endl;
      if (substr == str) {
         return i;
      }
   }

   return -1;
}
