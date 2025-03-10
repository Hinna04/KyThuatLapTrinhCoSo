#include<bits/stdc++.h>
using namespace std;

string chuyenChuThuongSangHoa(string &st)
{
    int i = 0;
    while (st[i] != NULL)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
            st[i] -= 32;
        i++;
    }
    return st;
}
int main()
{
   string st;
   cout<<"Moi nhap chuoi: ";
   getline(cin,st);

   cout<<"Chuoi sau khi chuyen chu thuong thanh chu hoa :" <<chuyenChuThuongSangHoa(st);

}
