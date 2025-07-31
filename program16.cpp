#include <iostream>
#include <string>
using namespace std;
int main()
 {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool isPalindrome = true;
    int left = 0;
    int right = str.length() - 1;

    while (left < right) 
	{
        if (str[left] != str[right]) 
		{
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
	 {
        cout << "The string is a palindrome.\n";
    } else
	 {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
