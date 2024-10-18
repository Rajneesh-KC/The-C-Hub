# include <iostream>

using namespace std;

int main()
{
    int num, i = 0;
    cout << "Enter any number: \n";
    cin >> num;

    // If num is 0, it has 1 digit
    if (num == 0)
    {
        i = 1;
    }
    else
    {
        // Count digits by dividing by 10 until num becomes 0
        while (num != 0)
        {
            num /= 10;
            i++;
        }
    }

    cout << "The number of digits is: " << i << endl;

    return 0;
}