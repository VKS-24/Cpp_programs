/*Problem statement
Given a number N, find its square root. You need to find and print only the integral part of square root of N.

For eg. if number given is 18, answer is 4.

Detailed explanation ( Input/output format, Notes, Images )
Input format :
Integer N
Output Format :
Square root of N (integer part only)*/
#include <iostream>
using namespace std;

int integerSquareRoot(int N)
{
    if (N < 2)
    {
        return N; // The square root of 0 is 0 and the square root of 1 is 1
    }

    int left = 0, right = N, answer = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid <= N / mid)
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return answer;
}

int main()
{
    int N;

    cin >> N;

    int result = integerSquareRoot(N);
    cout << result << endl;

    return 0;
}
