#include<iostream>

using namespace std;

int main(){
	int a,b;
	a = 10;
	int &sum = a;	//Reference
	a++;	//With 'a', 'sum' increments too.
	cout<<""<<sum<<endl;
	return 0;
}
