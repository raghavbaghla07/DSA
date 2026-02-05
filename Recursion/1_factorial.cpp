// using loops
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}
int factorialRecc(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int ans = n * factorialRecc(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Find factorial of: ";
    cin >> n;
    cout << factorial(n) << endl;
    cout << factorialRecc(n) << endl;
    return 0;
}
