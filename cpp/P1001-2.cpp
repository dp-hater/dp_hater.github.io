#include<bits/stdc++.h>
using namespace std;
void func(int a,int b){
	switch(a/1000){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: cout<<a+b; break;
		default: cout<<a+b; break;
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	func(a,b);
	cout<<endl;
	return 0;
}


