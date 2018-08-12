#include<iostream>
#include<conio.h>
#include"CHinhVuong.h"
using namespace std;
void main()
{
	//CHinhVuong *hv = new CHinhVuong();
	//cout << "Nhap hinh vuong" << endl;
	//hv->Nhap();

	CHinhVuong* hv = new CHinhVuong(0);

	cout << "\nChu vi: " << hv->tinhChuVi();
	cout << "\nDien tich: " << hv->tinhDienTich();

	delete hv;

	_getch();
}