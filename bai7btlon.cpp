#include <bits/stdc++.h>
using namespace std;
void Nhapmang(int a[], int &n){
	cout<<"Nhap so phan tu cua mang la: ";
	cin>>n;
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void Hienmang(int a[], int n){
	for(int i = 0; i<n;i++){
		cout<<a[i]<<" ";
	}
}
int TBCphantule(int a[], int n){
	int tong=0;
	double tbc;
	int demle=0;
	for (int i=0; i<n; i++){
		if(a[i]%2!=0){
			tong+=a[i]; 
			demle++;
			
		}
	}
		tbc=tong/demle;
	return tbc;
}
void Sapxep(int a[], int n){
	for(int i=0; i<n-1;i++){
		for(int j=i+1; j<=n;j++){
			if(a[i]>a[j]){
				int temp=a[i]; a[i]=a[j]; a[j]=temp;
			}
		}
	
	}
}
void Xoaptle(int a[], int &n){
	for(int i=0; i<n;i++){
		if(a[i]%2!=0){
			for(int j=i; j<n;j++){
				a[j]=a[j+1];
			}

			n=n-1;
			i=i-1;
			}
	
	
	}
}
int main()
{
	int a[100]; 
	int n;
	Nhapmang(a, n);
	cout<<" Hien mang vua nhap la: ";
	Hienmang(a, n);
	TBCphantule(a, n);
	cout<<"\nTrung binh cong cac phan tu le la: "<<TBCphantule(a, n);
	Sapxep(a, n);
	cout<<"\nDay so sau khi sap xep theo tang dan la: ";
	Hienmang(a, n);
	Xoaptle(a, n);
	cout<<"\nDay so sau khi xoa la: ";
	Hienmang(a, n);
	return 0;
	
}

