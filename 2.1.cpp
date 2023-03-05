#include <iostream>

using namespace std;


int Tong(int n){
	if(n == 1){
		return 1;
	}else{
	return n + Tong(n-1); 
	}
}

int main (){
	int n;
	cout << " Nhap so nguyen n: ";
	cin >> n;
	cout << "Tong S(" << n << ")= " << Tong(n) << endl;
	return 0;
}
