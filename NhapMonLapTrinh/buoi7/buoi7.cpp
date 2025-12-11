#include <iostream>
using namespace std;
int main() {
	int phut;
	long tien = 25000; // phi thue bao bat buoc
	cout << "nhap so phut goi: ";
	cin >> phut;
	if (phut <= 50) {
		tien += phut * 600;
	}
	else if (phut <= 200) {
		tien += 50 * 600 + (phut - 50) * 400;
	}
	else {
		tien += 50 * 600 + 150 * 400 + (phut - 200) * 200;
	}
	cout << "tong cuoc dien thoai: " << tien << " dong";
	return 0;
}

