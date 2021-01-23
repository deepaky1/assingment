#include<iostream>
using namespace std;
int main(){
	int a,b=0,c;
	cout<<"enter number : ";
	cin>>a;
	while(a!=0){
		c= a%10;
		b=b*10+c;
		a=a/10;
	}
	cout<<"reverse : "<<a;
	return 0;
}
