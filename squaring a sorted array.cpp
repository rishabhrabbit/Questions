#include <iostream>
using namespace std;

void SSA(int a[], int n){
    int x=0,k,l,i=0,temp[n];
    for(x=0;x<n;x++){if(a[x]>0)break;}
    k=x-1;
    l=x;
    while(k>=0 && l<n){
        if(a[k]*a[k]<a[l]*a[l]){
                temp[i]=a[k]*a[k];
                i++;
                k--;
        }
        else
        {
            temp[i]=a[l]*a[l];
                i++;
                l++;
        }
    }
    while(k>=0){
        temp[i]=a[k]*a[k];
                i++;
                k--;
    }
    while(l<n){
        temp[i]=a[l]*a[l];
                i++;
                l++;
    }
    for(int p=0;p<n;p++)a[p]=temp[p];
}

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++)cin>>a[i];
    SSA(a,n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    delete [] a;

}
