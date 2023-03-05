#include <iostream>
using namespace std;

void nhapMang(int arr[], int &n){
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int tongSoChan(int arr[], int n) {
    if (n == 0) {
        return 0;                       //neu mang 0 phan tu thi ve 0,
    } else if (arr[0] % 2 == 0) {       //neu pt dau la so chan thi = tong pt do cong voi tong cac so chan trong mang
        return arr[0] + tongSoChan(arr + 1, n - 1);
    } else {                            // neu pt do le thi them ham bo phan tu dau tien va tiep tuc 
        return tongSoChan(arr + 1, n - 1);
    }
}

int main(){
    int arr[100];
    int n;
    nhapMang(arr, n);
    cout << "Mang da nhap: ";
    xuatMang(arr, n);
    int sum = tongSoChan(arr, n);
    cout << "Tong cac so chan trong mang: " << sum << endl;
    return 0;
}
