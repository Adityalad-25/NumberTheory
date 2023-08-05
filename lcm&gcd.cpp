#include<iostream>
#define int long long int
using namespace std;

int gcd(int a , int b){
	return b==0?a:gcd(b,a%b);
	//T = O(log min(a,b))
}
int calLcm(int a , int b){
	// lcm = a*b/gcd(a,b);

   return (a*b)/gcd(a,b);       
}

int32_t main()
{
	int a,b;
	cin>>a>>b;
    
    cout<<gcd(a,b)<<endl;
	cout<<calLcm(a,b);
}
