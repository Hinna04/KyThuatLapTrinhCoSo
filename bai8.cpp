#include<bits/stdc++.h>
using namespace std;
void inputMatrix(int **a,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
void printMatrix(int **a,int n,int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" \n"[j==m-1];
        }
    }
}
void minInRow(int **a,int n,int m){
    for(int i=0;i<n;i++)
    {
        int mn=a[i][0];
        for(int j=1;j<m;j++){
            mn=min(mn,a[i][j]);
        }
        cout<<"phan tu be nhat cua dong "<<i+1<<" la: "<<mn<<endl;
    }
}
void sumInRow(int **a,int n,int m){
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[j][i];
        }
        cout<<"tong cua cot "<<i+1<<" la: "<<sum<<endl;
    }
}
void printPositive(int **a,int n,int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(a[i][j]>0){
                cout<<a[i][j]<<" ";
            }
        }
    }
}
int countNegative(int **a,int n,int m){
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
                cnt+=a[i][j]<0;
        }

    }
    return cnt;
}
int main(){
    int n,m;
    cout<<"nhap so hang va so cot: "<<endl;
    cin>>n>>m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++ )
    {
        a[i] = new int[m];
    }
    cout<<"xin moi nhap ma tran: "<<endl;
    inputMatrix(a,n,m);
    cout<<"ma tran la: "<<endl;
    printMatrix(a,n,m);
    cout<<endl;
    minInRow(a,n,m);
    sumInRow(a,n,m);
    cout<<"cac phan tu duong trong ma tran la: ";
    printPositive(a,n,m);
    cout<<endl;
    cout<<"so phan tu am trong ma tran la: "<<countNegative(a,n,m);

}
