#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void cau1() {
	int a, b, c;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << a;
	if (b > a && b > c)
		cout << b;
	if (c > a && c > b)
		cout << c;

	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout << max;
}
void cau2() {
	float a, b;
	cout << "Nhap a,b: ";
	cin >> a >> b;
	if (a * b > 0)
		cout << "cung dau";
	else
		cout << "khac dau";
}
void cau3() {
	int a, b;
	cout << "Nhap a,b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0)
			cout << "phuong trinh vo so nghiem" << endl;
		else
			cout << "phuong trinh vo nghiem" << endl;
	}
	else {
		cout << "nghiem la: " << (-b * 1.0 / a) << endl;
	}
}
void cau4() {
	int thang;
	cout << "Nhap thang:";
	cin >> thang;
	if (thang <= 3) {
		cout << "Quy 1";
	}
	else if (thang <= 6) {
		cout << "Quy 2";
	}
	else if (thang <= 9) {
		cout << "Quy 3";
	}
	else {
		cout << "Quy 4"; 
	}
}
void cau5() {
	int a, b, c;
	cout << "nhap 3 canh a, b, c:";
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		if (a == b && b == c) {
			cout << "Tam giac deu" << endl;
		}
		else if (a == b || b == c || c == a) {
			cout << "Tam giac can" << endl;
		}
		else if (b * b == a * a + c * c || a * a == b * b + c * c || c * c == a * a + b * b) {
			cout << "tam giac vuong" << endl;
		}
		else {
			cout << "tam giac thuong" << endl;
		}
	}
	else {
		cout << "Khong la tam giac " << endl;
	}
}
void cau6() {
	double a, b, c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				cout << "phuong trinh vo so nghiem" << endl;
			else
				cout << "phuong trinh vo nghiem" << endl;
		}
		else {
			cout << (-c / b) << endl;
		}
	else  {
		double delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << " phuong trinh vo nghiem";
		}
		else if (delta == 0) {
			double x = (-b / (2 * a));
			cout << " phuong trinh co nghiem kep" << x << endl;
		}
		else {
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "phuong trinh co 2 nghiem phan biet";
			cout << " x1 = " << x1 << endl;
			cout << " x2 = " << x2 << endl;
		}
	}
	}
}

		
int main() {
	cau6(); 

}
