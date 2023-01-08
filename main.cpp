#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double tinhchuvi(double r)
{		double chuvi;
		double pi=3.14;
		chuvi=2*pi*r;
		return chuvi;
}
int main(int argc, char** argv) {
	double r1;
	cout<<"Tinh chu vi hinh tron"<<endl;
	cout<<"Nhap ban kinh:"<<endl;
	cin>>r1;
	double ketqua=tinhchuvi(r1);
	cout<<"Chu vi hinh tron = "<<ketqua;
	return 0;
}
