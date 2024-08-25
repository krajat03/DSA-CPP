#include <iostream>

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
