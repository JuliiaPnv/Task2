#include<iostream>
using namespace std;

int main()
{
    int N = 1, t, x, y, r, i, n;
    setlocale(LC_ALL, "Rus");
    for (N; N <= 15; N++)
    {
        n = 0;
        cout << "������� ������ = ";
        cin >> r;
        cout << "������� ���������� ����� �� (1 �� 15) t = ";
        cin >> t;
        while (t < 0 || t > 15) 
        {
            cout << "t �� � ��������� :(, ������� ������ ����� �� (1 �� 15) t = ";
            cin >> t;
        }
        for (i = 1; i <= t; i++) 
        {
            cout << i << " �����. ������� ���������� x = ";
            cin >> x; 
            cout << "������� ���������� y = ";
            cin >> y;
            if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
                n++;
        }
        cout << "���������� ����� ������� � ���������� = "<< n << endl;
    }
}