#include <iostream>

#include <string>
#include "src/find_substring.hpp"

int main() {
    std::cout << "find_substring(\"\", \"\") = "
              << find_substring("", "") << std::endl;

    std::cout << "find_substring(\"0\", \"a\") = "
              << find_substring("0", "a") << std::endl;

    std::cout << "find_substring(\"0\", '0') = "
              << find_substring("0", "0") << std::endl;

    std::cout << "find_substring(\"1\", \"1\") = "
              << find_substring("1", "1") << std::endl;

    std::cout << "find_substring(\"456\", \"4\") = "
              << find_substring("456", "4") << std::endl;

    std::cout << "find_substring(\"456\", '5') = "
              << find_substring("456", "5") << std::endl;

    std::cout << "find_substring(\"456\", \"6\") = "
              << find_substring("456", "6") << std::endl;

    std::cout << "find_substring(\"Caleb Kang is so cool!\", \"Kang\") = "
              << find_substring("Caleb Kang is so cool!", "Kang") << std::endl;

    std::cout << "find_substring(\"The quick brown fox\", 'e') = "
              << find_substring("The quick brown fox", 'e') << std::endl;

    std::cout << "find_substring(\"The quick brown fox\", \"e\") = "
              << find_substring("The quick brown fox", "e") << std::endl;

    std::cout << "find_substring(\"The quick brown fox\", ' ') = "
              << find_substring("The quick brown fox", ' ') << std::endl;

    std::cout << "find_substring(\"The quick brown fox\", \"quick\") = "
              << find_substring("The quick brown fox", "quick") << std::endl;

    std::cout << "find_substring(\"The quick brown fox\", \"quiet\") = "
              << find_substring("The quick brown fox", "quiet") << std::endl;

    std::cout << "find_substring(\"ADjklaASDJFKLajkla\", \"ADjklaASDJFKLajkl0\") = "
              << find_substring("ADjklaASDJFKLajkla", "ADjklaASDJFKLajkl0") << std::endl;

    return 0;
}
