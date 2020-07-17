#include <iostream>
using namespace std;

void TripleSum(int a[], int n){
    bool found=false;
    int i=0,l,k;
    for(i=0;i<n;i++){

        l=i+1;
        k=n-1;
        while(l<k){
            if(a[i]+a[l]+a[k]==0){cout<<a[i]<<" "<<a[l]<<" "<<a[k]<<" \n";l++;k--;found=true;}
            else if(a[i]+a[l]+a[k]<0)l++;
            else k--;
        }
    }
    if(found==false){cout<<"No triplet";}
}

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++)cin>>a[i];
    TripleSum(a,n);
    delete [] a;
}
