/* Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example: Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {

        while (num / 10 != 0)
        {
            num = addDigitsHelper(num);
        }
        return num;
    }

    int addDigitsHelper(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num = num / 10;
        }
        return sum;
    }
};


int main()
{
    Solution tester;
    cout << tester.addDigits(19) << endl;
    return 0;
}
