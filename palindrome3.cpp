class Solution {
public:
    bool isPalindrome(int x) {
    int reverse = 0;
    int originalNumber = x;
    while (x != 0)
    {
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    if (originalNumber == reverse)
    {
        return 1;
    
    }
    else if(originalNumber < 0){
        return 0;
    }
    else
    {
    return 0;
    }
    }
};