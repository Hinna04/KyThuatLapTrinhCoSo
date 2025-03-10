#include<bits/stdc++.h>
using namespace std;

void inputArray(int *a,int l,int r)
{
    for(int i=l; i<=r; i++)
    {
        cin>>a[i];
    }
}
void printArray(int a[],int l,int r)
{
    for(int i=l; i<=r; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int countInArray(int a[],int l,int r, int x)
{
    int cnt=0;
    for(int i=l; i<=r; i++)
    {
        cnt+=a[i]==x;
    }
    return cnt;
}
int minElement(int a[],int l,int r)
{
    int mn=INT_MAX;
    for(int i=l; i<=r; i++)
    {
        mn=min(mn,a[i]);
    }
    return mn;
}
int findElement(int a[],int l,int r,int x)
{
    // return -1 if not find, else return the first position.
    for(int i=l; i<=r; i++)
    {
        if(a[i]==x) return i;
    }
    return -1;
}

int negativeSum(int a[],int l,int r){
    int sum=0;
    for(int i=l; i<=r; i++)
    {
        if(a[i]<0) sum+=a[i];
    }
    return sum;
}
int32_t main()
{
    int n,x;
    cout<<"nhap n: " ;
    cin>>n;
    int a[n];
    cout<<"nhap mang: "<<endl;
    inputArray(a,0,n-1);
    cout<<"mang gom "<<n<<" phan tu la: "<<endl ;
    printArray(a,0,n-1);
    cout<<"nhap phan tu muon dem: " ;
    cin>>x;
    cout<<"phan tu xuat hien "<<countInArray(a,0,n-1,x)<<" lan trong mang"<<endl;
    cout<<"phan tu nho nhat trong mang la "<<minElement(a,0,n-1)<<endl;
    cout<<"nhap phan tu muon tim kiem: " ;
    cin>>x;
    int position=findElement(a,0,n-1,x);
    if(position==-1){
        cout<<"phan tu nay khong co trong mang" <<endl;
    }
    else {
        cout<<"phan tu nay nam o vi tri "<< position <<endl;
    }
    cout<<"tong cac phan tu am trong mang la: "<< negativeSum(a,0,n-1) <<endl;
}


