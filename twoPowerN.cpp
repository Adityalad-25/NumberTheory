#include<iostream>
using namespace std;

long long powerTwo(int n){
    //base case
    if(n==0) return 1;
    
    int ans = powerTwo(n/2);
    if(n&1)
    return 2*ans*ans;
    else
    return ans*ans;
}



int main()
{
    int n;
    cin>>n;
    cout<<powerTwo(n);
}
