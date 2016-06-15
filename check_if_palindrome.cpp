// check if a string is a palindrome

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_if_permutation(string s);

int main()
{
    cout << check_if_permutation("hello") << endl;
    return 0;
}

bool check_if_permutation(string s)
{
    if (s.size() == 0)
    {
        return false;
    }

    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
