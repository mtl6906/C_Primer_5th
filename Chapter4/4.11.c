#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        if(a > b && b > c && c > d)
                cout << "yes" << endl;
        else
                cout << "no" << endl;

        return 0;
}
