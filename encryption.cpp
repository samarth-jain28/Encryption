#include<iostream>
#define ll long long int
using namespace std;
ll ran=9999,sign=1;
inline ll random(ll seed){
	switch(sign){
		case 1:ran-=seed;
		break;
		case 2:ran/=seed;
		break;
		case 3:ran+=seed;
		break;
		case 4:ran*=seed;
		break;
	}sign++;
	sign=(sign>4?1:sign);
	return ran+987654321;}
string dec1(string msg,ll seed){
	for(ll i=0;msg[i]!='\0';i++){
		msg[i]=msg[i]+(random(seed)%10);
	}
	return msg;
}
int main(){
	string msg;
	ll seed;
	cout<<"msg:\n";
	getline(cin,msg);
	cout<<"key:\n";
	cin>>seed;
	cout<<dec1(msg,seed+1234);

return 0;
}
