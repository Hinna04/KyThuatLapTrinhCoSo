#include <bits/stdc++.h>
using namespace std;

void nhapMang(int a[], int &n)
{
    for(int i=0; i<n; i++){
        cout << "a[" << i+1 << "]= ";
        cin >> a[i];
        if(a[i]==0)
        break;
    }
}

void hienMang(int a[],int n)
{
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void sapXep(int a[], int count)
{
    for(int i=0; i<count-1; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if(a[j]>0&&a[i]<0)
            {
                swap(a[i],a[j]);
            }
        }
    }
}

void demPTNhoNhat(int a[], int n)
{
	int x;
	int dem=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>0)
			dem++;
	}
}

void chenPT(int a[], int n)
{
	
}

int main(){
    int n, dem, count=0;
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    int a[n];
    cout << "Nhap mang: " << endl;
    nhapMang(a, n);
    cout << "\nMang gom " << n << " phan tu la: " << endl;
    hienMang(a, n);
    cout << "\nMang sau khi sap xep la: "; 
	sapXep(a, count);
	hienMang(a, n);
    cout << "\nCo " << dem << " phan tu nho nhat trong day" << endl;
    demPTNhoNhat(a, n);
}
