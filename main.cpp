#include <iostream>
using namespace std;


int multi(int x, int y){
	return x*y;
}

int boner(int x){
	return x*x;
}

int diff(int x, int y){
	return x-y;	
}


int summ(int x, int y){
	return x+y;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << multi(a, b) << endl;
	cout << boner(a) << endl;
	cout << diff(a, b) << endl;
	cout << summ(a, b) << endl;
}