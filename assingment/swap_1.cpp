#include<iostream>
using namespace std;
int main(){
	int a ,b;
	cout<<"enter first value :";
	cin>>a;
	cout<<"enter second value :";
	cin>>b;
	b=a+b;
	a=b-a;
	b=b-a;
	cout<<"swap number"<<a<<"  "<<b;
	return 0;
	
	
}
