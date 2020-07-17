#include <iostream>
using namespace std;

int maxSum(int a[], int n, int k){

    if(k>n){
        cout<<"Invalid";
        return -1;
    }
    int ans=0;
    for(int i=0;i<k;i++){
        ans+= a[i];
    }
    int curr_ans = ans;
    for(int i=k;i<n;i++){
        curr_ans += a[i] - a[i-k];
        ans = max(curr_ans,ans);
    }
    return ans;
}

int main(){

    int a[100], n, k;
    cin>>n>>k;
    for(int i=0;i<n;i++){cin>>a[i];}
    cout<<maxSum(a,n,k);
    return 0;
}
