#include <iostream>
#include <cmath>
using namespace std;

const int n = 8; // kich thuoc ban co

void XuatBanCo(int BanCo[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << BanCo[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool KiemTra(int BanCo[n][n], int row, int col) {
    int i, j;

    // Ki?m tra hàng du?ng chéo chính bên trái
    for (i = 0; i < col; i++) {
        if (BanCo[row][i]) {
            return false;
        }
    }

    // Ki?m tra du?ng chéo ph? bên trái
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (BanCo[i][j]) {
            return false;
        }
    }

    // Ki?m tra du?ng chéo ph? bên ph?i
    for (i = row, j = col; j >= 0 && i < n; i++, j--) {
        if (BanCo[i][j]) {
            return false;
        }
    }

    return true;
}

bool DatHau(int BanCo[n][n], int col) {
    if (col >= n) {
        return true;
    }

    for (int i = 0; i < n; i++) {
        if (KiemTra(BanCo, i, col)) {
            BanCo[i][col] = 1;

            if (DatHau(BanCo, col + 1)) {
                return true;
            }

            BanCo[i][col] = 0;
        }
    }

    return false;
}

int main() {
    int BanCo[n][n] = {0};

    if (DatHau(BanCo, 0) == false) {
        cout << "Khong tim thay giai phap!" << endl;
        return 0;
    }

    XuatBanCo(BanCo);

    return 0;
}

