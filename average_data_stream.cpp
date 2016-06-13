#include <iostream>
#include <vector>

using namespace std;

void getStreamAverage(int arr [], int n);


int main()
{
    int foo [5] = {10, 20, 30, 40, 50};
    getStreamAverage(foo, 5);
    return 0;
}



void getStreamAverage(int arr [], int n)
{

    int runningSum = 0;
    for (int i = 0; i < n; i++)
    {
        runningSum += arr[i];
        cout << "The running average is: " << 1.0*runningSum/(i + 1) << endl;
    }
}
