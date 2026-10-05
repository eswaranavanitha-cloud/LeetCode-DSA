#include <stdbool.h>
bool isPalindrome(int x) {
    int original = x;
    long long rev = 0;
    int digit;

    while(x > 0)
    {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    if(original == rev)
        return true;
    else
        return false;

}  
