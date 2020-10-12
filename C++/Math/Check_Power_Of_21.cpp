#include <bits/stdc++.h>
using namespace std;
int isPowerOf21(int n){
	return ceil(log(n)/log(21))==floor(log(n)/log(21))?1:0;
}
int main(){
	int n;
    cin>>n;
    cout<<isPowerOf21(n)<<endl;
	return 0;
}
