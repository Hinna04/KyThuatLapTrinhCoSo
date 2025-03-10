#include<bits/stdc++.h>
#define NAME "sp."
using namespace std;
struct SanPham{
    char MaSanPham[100], TenSanPham[100];
    int DonGia, SoLuong;
};
void ghifile(ofstream &f, SanPham a)
{
    f.write( (char*)&a, sizeof(a) );
}
void docfile(SanPham a[], int &n)
{
    ifstream f;
    f.open (NAME"dat", ios::binary);
    n = 0;
    while (f.read((char*)&a[n], sizeof(a[n])))
    n++;
}
void nhap(SanPham ds[],int &n){
    ofstream outfile;
    outfile.open(NAME"dat", ios::binary);
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("\nNhap ma san pham: ");
        gets(ds[i].MaSanPham);
        fflush(stdin);
        printf("Nhap ten san pham: ");
        gets(ds[i].TenSanPham);
        fflush(stdin);
        printf("Nhap don gia san pham: ");
        scanf("%d",&ds[i].DonGia);
        fflush(stdin);
        printf("Nhap so luong san pham: ");
        scanf("%d", &ds[i].SoLuong);
        ghifile(outfile, ds[i]);
    }
    printf("Ghi thanh cong vao file sp.dat! \n");
    outfile.close();
}
void xuat(SanPham ds[], int &n){
    docfile(ds, n);
    printf("\n");
    printf("\n%-15s%-25s%-20s%-15s\n","Ma san pham","Ten san pham","don gia","so luong");
    for(int i=0; i<n; i++)
    {
        printf("\n%-15s", ds[i].MaSanPham);
        printf("%-25s",ds[i].TenSanPham);
        printf("%-20d",ds[i].DonGia);
        printf("%-15d",ds[i].SoLuong);
    }
}
void sapxep(SanPham ds[], int &n)
{
    docfile(ds, n);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(ds[i].TenSanPham, ds[j].TenSanPham) > 0)
            {
                  swap(ds[i], ds[j]);
            }
        }
    }
    printf("\n");
    printf("\n%-15s%-25s%-20s%-15s\n","Ma san pham","Ten san pham","don gia","so luong");
    for(int i=0; i<n; i++)
    {
        printf("\n%-15s", ds[i].MaSanPham);
        printf("%-25s",ds[i].TenSanPham);
        printf("%-20d",ds[i].DonGia);
        printf("%-15d",ds[i].SoLuong);
    }
}
void thongke(SanPham ds[], int &n){
    docfile(ds, n);
    bool check = false;
    printf("\n");
    printf("\n%-15s%-25s%-20s%-15s\n","Ma san pham","Ten san pham","don gia","so luong");
    for(int i=0; i<n; i++)
    {
        printf("\n%-15s", ds[i].MaSanPham);
        printf("%-25s",ds[i].TenSanPham);
        printf("%-20d",ds[i].DonGia);
        printf("%-15d",ds[i].SoLuong);
        check = true;
    }
    if(check == false){
        printf("Khong co san pham nao co so luong <= 5! \n");
    }
}
void tinhtbc(SanPham ds[], int &n){
    docfile(ds, n);
    float tong =0;
    int countt =0;
    for(int i=0; i<n; i++){
        tong += ds[i].SoLuong;
        countt++;
    }
    printf("Trung binh cong so luong san pham da nhap la: %f ", float(tong/countt));
}
int main(){
   SanPham ds[200];
   int chon;
   do
   {
        printf("\n--------------MENU-----------------\n");
        printf(" \n1.Nhap danh sach cac san pham!");
        printf(" \n2.Hien danh sach cac san pham tu tep <sp.dat>!");
        printf(" \n3.Sap xep theo thu tu alphabe!");
        printf(" \n4.Thong ke cac san pham co so luong nho hon bang 5!");
        printf(" \n5.Tinh trung binh cong so luong san pham da nhap!");
        printf(" \n0.Thoat!\n");
        printf(" \n ");
        printf("Lua chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                int n;
                printf("\nNhap so luong san pham: ");
                scanf("%d", &n);
                nhap(ds, n); break;
            case 2:
                printf("\nDanh sach san pham!");
                xuat(ds, n); break;
            case 3:
                printf("\nDanh sach san pham sau khi sap xep theo alphabe!");
                sapxep(ds, n); break;
            case 4:
                printf("\nDanh sach san pham co so luong <= 5!");
                thongke(ds, n); break;
            case 5:
                printf("\nTrung binh cong san pham da nhap!");
                tinhtbc(ds, n); break;
            case 0: exit(1); break;
            default: printf(" \n Ban chon sai, moi chon lai! ");
        }
    }
    while(chon!=0);
}
