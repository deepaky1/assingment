#include<iostream>
using namespace std;
int main(){
	int num,i,mul=1;
	cout<<"Enter number";
	cin>>num;
	for(i=1;i<=num;i++){
		mul=mul*i;
	}
	cout<<"factorial of "<<num<<" is ="<<mul;
	return 0;
}
