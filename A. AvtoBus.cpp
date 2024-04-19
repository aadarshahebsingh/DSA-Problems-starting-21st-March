#include<iostream>
using namespace std;
long long a,t;
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		if(a<4||a%2==1) puts("-1");
		else{
			cout<<a/6+(a%6>0)<<' '<<a/4<<endl;
		} 
	}
}
