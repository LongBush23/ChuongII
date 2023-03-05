#include <iostream>

using namespace std;

// S(n)= 2 + 4 + 6 + .. + n;
int Tong(int n){
	if(n == 0){
		return 0;
	}else{
	return n + Tong(n-2); 
	}
}

int main (){
	int n;
	do{
	cout << " Nhap so nguyen n: ";
	cin >> n;
	if(n%2!=0){
		cout << "Nhap lai n la so chan ";
	}
}while(n % 2 != 0);
	cout << "Tong S(" << n << ")= " << Tong(n) << endl;
	return 0;
}
