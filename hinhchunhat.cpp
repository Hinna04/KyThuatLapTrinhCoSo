#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Nhap canh hinh vuong: "; cin >> n;
    while(n >= 0)
    {
        for(i = 1; i < 2 * n + 1; i++)
        {
            for(j = 1; j < 2 * n + 1; j++)
            {
                if(i == 1 || j == 1 || i == 2 * n + 1 || j == 2 * n + 1)
                    cout << n << " ";
                else
                    cout << " ";
            }
            cout << endl;
        }
        n--;
    }
    return 0;
}
