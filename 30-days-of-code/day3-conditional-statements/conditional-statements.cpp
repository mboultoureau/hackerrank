#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (N % 2 == 1)
        cout << "Weird" << endl;
    else if (N >= 2 and N <= 5)
        cout << "Not Weird" << endl;
    else if (N >= 6 and N <= 20)
        cout << "Weird" << endl;
    else if (N > 20)
        cout << "Not Weird" << endl;

    return 0;
}
