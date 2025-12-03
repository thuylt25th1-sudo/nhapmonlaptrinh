#include <iostream>
using namespace std;
void cau1() {
	const float PI = 3.14;
	//Viet chuong trinh dien tich va chu vi hinh tron voi ban kinh r
	int r;
	cout << "nhap ban kinh r:";
	cin >> r;
	cout << "dien tich:" << PI * r * r << endl;
	cout << "chu vi: " << 2 * PI * r << endl;
}
void cau2() {
	int luong, phucap;
	cout << "nhap luong:";
	cin >> luong;
	cout << "nhap phu cap:";
	cin >> phucap;
	cout << "thuc lanh : " << (luong + phucap) * 0.9 << endl;
}
int main()
{
	cau2();
}