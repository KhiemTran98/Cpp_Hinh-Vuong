#include<iostream>
#include"CHinhVuong.h"
using namespace std;
CHinhVuong::CHinhVuong()
{
	Canh = 0;
}
CHinhVuong::CHinhVuong(double Canh)
{
	this->Canh = Canh;
}
CHinhVuong::~CHinhVuong() {}
void CHinhVuong::Nhap()
{
	cout << "Nhap do dai canh: ";
	cin >> Canh;
}
double CHinhVuong::tinhChuVi()
{
	return Canh * 4;
}
double CHinhVuong::tinhDienTich()
{
	return Canh * Canh;
}