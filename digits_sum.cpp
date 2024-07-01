/*Write a program to input an integer 'n' and print the sum of all its even digits
and the sum of all its odd digits separately.



Digits mean numbers, not places! That is, if the given integer is "132456", even digits
are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Constraints
0<= 'n' <=10000


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Input format :
 The first line contains an integer 'n'.
Output format :
In a single line, print two space-separated integers, first the sum of
 even digits and then the sum of odd digits.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int even_sum = 0;
    int odd_sum = 0;

    while (n > 0)
    {
        int digit = n % 10; // Extract the last digit
        if (digit % 2 == 0)
        {
            even_sum += digit; // Add to even_sum if the digit is even
        }
        else
        {
            odd_sum += digit; // Add to odd_sum if the digit is odd
        }
        n /= 10; // Remove the last digit
    }

    // Print the results
    cout << even_sum << " " << odd_sum << endl;

    return 0;
}
