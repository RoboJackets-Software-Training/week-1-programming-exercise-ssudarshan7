#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    std::string savestr = str;
    int left = 0;
    int right = str.length() - 1;
    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    if(str == savestr) {
        std::cout << savestr << " is a palindrome!\n";
    } else {
        std::cout << savestr << " is not a palindrome!\n";
    }

    return 0;
}
