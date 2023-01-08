#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double hamchuvi(float a,float b,float c)
#VoThanhAn
{
	double chuvi;
	chuvi=a+b+c;
	return chuvi;
}
double hamdientich(float a, float h)
{ 
	double dientich;
	dientich=0.5*a*h;
	return dientich;
}
int main(int argc, char** argv) {
	float a,b,c,h,cv,dt;
	int n;
	cout<<"Tinh chu vi va dien tich hinh tam giac"<< endl;
	while (true)
	{
	
		cout<<"Chu vi: 1"<<endl<<"Dien tich:2"<<endl<<"Ban chon so?"<<endl;
		cin>>n;
		if(n==1)
		{
			cout<<"Moi ban nhap do dai 3 canh hinh tam giac"<<endl;
			cout<<"Canh 1: ";
			cin>>a;
			cout<<"Canh 2: ";
			cin>>b;
			cout<<"Canh 3: ";
			cin>>c;
			cv= hamchuvi(a,b,c);
			cout<<"Chu vi hinh tam giac = "<<cv<<endl; 
		 
		}
		if(n==2)
		{
			cout<<"Moi ban nhap chieu cao va canh day cua tam giac"<<endl;
			cout<<"Chieu cao: ";
			cin>>h;
			cout<<"Canh day: ";
			cin>>a;
			dt=hamdientich(a,h);
			cout<<"Dien tich tam giac = "<<dt<<endl;
		}
		if(n!=1 && n!=2)
		{
			cout<<"Chon lai!!!"<<endl;
		}
	}
		
	return 0;
}
