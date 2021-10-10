#include<iostream>
using namespace std;

int main()
{
    int N = 1, t, x, y, r, i, n;
    setlocale(LC_ALL, "Rus");
    for (N; N <= 15; N++)
    {
        n = 0;
        cout << "radius = ";
        cin >> r;
        cout << "number of points (from 1 to 15) t = ";
        cin >> t;
        while (t < 0 || t > 15) 
        {
            cout << "t is not in range :(, enter another number (from 1 to 15) t = ";
            cin >> t;
        }
        for (i = 1; i <= t; i++) 
        {
            cout << i << " point. coordinate x = ";
            cin >> x; 
            cout << "coordinate y = ";
            cin >> y;
            if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
                n++;
        }
        cout << "number of points in a circle = "<< n << endl;
    }
}