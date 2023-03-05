#include <iostream>

using namespace std;

void nhapMang(float arr[], int &n){
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Nhap phan tu thu " << i + 1 << ":";
		cin >> arr[i];
	}
}

void xuatMang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int demSoDuong(float arr[], int n){
	if(n==0){
		return 0;
	}else if(arr[0] > 0){
		return 1 + demSoDuong(arr + 1, n - 1);
	}else{
		return demSoDuong(arr + 1, n - 1);
	}
}

int main(){
	float arr[100];
	int n;
	nhapMang(arr, n);
	xuatMang(arr, n);
	cout << "So luong gia tri duong trong mang: " << demSoDuong(arr, n) << endl;
	return 0;
}
