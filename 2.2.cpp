#include <iostream>

using namespace std;

int Tich(int n){
	if (n==1 || n==0){
		return 1;
	}else{
		return n* Tich(n-1);
	}
}

int main(){
	int n;
	cout << "Nhap n :";
	cin >> n;
	cout << "T("<< n << ")=" << Tich(n);
	return 0;
}


