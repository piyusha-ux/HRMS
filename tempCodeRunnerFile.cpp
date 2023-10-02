#include <iostream>
#include <string>

bool isVowel(char c) {
    c = std::tolower(c); // Convert to lowercase to handle both cases
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string output;
    int consecutiveVowels = 0;

    for (char c : input) {
        if (isVowel(c)) {
            consecutiveVowels++;
            if (consecutiveVowels >= 2) {
                output += c;
            }
        } else {
            if (consecutiveVowels == 1) {
                consecutiveVowels = 0;
            }
            output += c;
        }
    }

    std::cout << "Output: " << output << std::endl;

    return 0;
}
