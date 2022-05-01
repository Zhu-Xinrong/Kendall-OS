#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class Clock1{
	int h,m,s;
public:
	void set(int hour,int min,int sec);
	void tick();
	void show();
	void run();
};
void Clock1::set(int hour,int min,int sec)
{
	h=hour;
	m=min;
	s=sec;
}
void Clock1::tick()
{
	time_t t=time(NULL);
	for(;time(NULL)==t;);
	if(--s<0){
		s=59;
		if(--m<0){
			m=59;
			--h<0;
		}
	}
}
void Clock1::show()
{
	cout<<'\r';
	if(h<10)cout<<0;
	cout<<h<<':';
	if(m<10)cout<<0;
	cout<<m<<':';
	if(s<10)cout<<0;
	cout<<s<<flush;
}
void Clock1::run()
{
	for(;h!=0||m!=0||s!=0;){
		tick();
		show();
	}
	cout<<endl<<"ʱ�䵽�ˣ�"<<endl;
	cout<<'\a';
	system("pause");
	system("cls");
}

class Clock2
{
private:
	int hour,minute,second;
public:
	Clock2(int h=0,int m=0,int s=0);
	~Clock2();
	void init(int h,int m,int s);
	void run();
};
Clock2::Clock2(int h,int m,int s)
{
	hour=h;
	minute=m;
	second=s;
}
void Clock2::init(int h,int m,int s)
{
	hour=h;
	minute=m;
	second=s;
}
void Clock2::run()
{
	while(1){
		system("cls");
		cout<<setw(2)<<setfill('0')<<hour<<":";
		cout<<setw(2)<<setfill('0')<<minute<<":";
		cout<<setw(2)<<setfill('0')<<second;
		Sleep(1000);
		if(++second==60)
		{
			second=0;
			minute=minute+1;
			if(minute==60)
			{
				minute=0;
				hour=hour+1;
				if(hour==24)
				{
					hour=0;
				}
			}
		}
	}
}
Clock2::~Clock2()
{
}

int main(){
	system("title Loading...");
	system("color a");
	//��һ�ּ��ض���
	cout<<"Loading";
	Sleep(1000);
	system("cls");
	cout<<"Loading.";
	Sleep(1000);
	system("cls");
	cout<<"Loading..";
	Sleep(1000);
	system("cls");
	cout<<"Loading...";
	Sleep(1000);
	system("cls");
	/*
	�ڶ��ּ��ض���
	cout<<"|";
	Sleep(1000);
	system("cls");
	cout<<"/";
	Sleep(1000);
	system("cls");
	cout<<"-";
	Sleep(1000);
	system("cls");
	cout<<"\\";
	Sleep(1000);
	system("cls");
	�����ּ��ض���
	cout<<"0oo";
	Sleep(1000);
	system("cls");
	cout<<"o0o";
	Sleep(1000);
	system("cls");
	cout<<"oo0";
	Sleep(1000);
	system("cls");
	cout<<"o0o";
	Sleep(1000);
	system("cls");
	*/
	system("title Kendall OS Beta (Code 1) - ������");
	while(1){
		cout<<"��л����Kendall OS�ڲ⣡"<<endl;
		cout<<"1.����ʱ    2.����ʱ"<<endl;
		cout<<"3.��ѧ����  4.���߱ع�"<<endl;
		cout<<"5.����      6.�˳�"<<endl;
		int Choose1;
		cout<<"�������ѡ��"; 
		cin>>Choose1;
		switch(Choose1){
			case 1:{
				system("title Kendall OS Beta (Code 1) - ����ʱ");
				Clock1 c;
				cout<<"�����뵹��ʱ��ʱ������ʽ��ʱ �� �룩��";
				int h1,m1,s1;
				cin>>h1>>m1>>s1;
				c.set(h1,m1,s1);
				c.run();
				system("title Kendall OS Beta (Code 1) - ������");
				break;
			}
			case 2:{	
				system("title Kendall OS Beta (Code 1) - ����ʱ");
				Clock2 c;
				c.run();
				system("pause");
				system("title Kendall OS Beta (Code 1) - ������");
				break;
			}
			case 3:{
				system("title Kendall OS Beta (Code 1) - ��ѧ����");
				int Choose2;
				cout<<"��Ҫ����ʲô��ѧ���㣿"<<endl;
				cout<<"1.�������    2.��С������    3.Բ    4.Բ��"<<endl;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("title Kendall OS Beta (Code 1) - �������������");
						int n0,n1,p,max;
						cout<<"����(���ó���2147483647���������� �ո����)��";
						cin>>n0>>n1;
						if(n0<0||n1<0)cout<<"�����ˣ����Ѿ����ǵ��ˡ�"<<endl;
						else if(n0==0||n1==0)cout<<"0����������Ҹ�����Bug�أ�����"<<endl;
						else{
							if(n0>n1)max=n0;
							else if(n0<n1)max=n1;
							else if(n0=n1)max=n0;
							cout<<"�����С���";
							for(int i=max-1;;i--){ 
								if(n0%i==0&&n1%i==0){
									cout<<"�ɹ���"<<endl;
									p=i;
									break;
								}
							}
						}
						if(p==1)cout<<n0<<"��"<<n1<<"�ǻ��ʵģ�����";
						cout<<n0<<"��"<<n1<<"�����������"<<p<<endl;
						system("pause");
						system("title Kendall OS - ������");
						system("cls"); 
						break;
					}
					case 2:{
						system("title Kendall OS Beta (Code 1) - ��С������������");
						int n0,n1,p,max;
						cout<<"����(���ó���2147483647���������� �ո����)��";
						cin>>n0>>n1;
						if(n0<0||n1<0)cout<<"�����ˣ����Ѿ����ǵ��ˡ�"<<endl;
						else if(n0==0||n1==0)cout<<"0����������Ҹ�����Bug�أ�����"<<endl;
						else if(n0==n1)cout<<"����һ����"<<endl;
						else{
							if(n0>n1)max=n0;
							else if(n0<n1)max=n1;
							else if(n0=n1)max=n0;
							cout<<"��ȡ��С�������С���";
							for(int i=max-1;;i--){ 
								if(n0%i==0&&n1%i==0){
									cout<<"�ɹ���"<<endl;
									p=i;
									break;
								}
							}
						}
						if(n0==n1||n0<0||n1<0||n0==0||n1==0);
						else cout<<n0<<"��"<<n1<<"����С��������"<<n0*n1/p<<endl; 
						system("pause");
						system("title Kendall OS - ������");
						system("cls");
						break;
					}
					case 3:{
						system("title Kendall OS Beta (Code 1) - Բ");
						cout<<"��Ҫ�������ּ��㣿"<<endl;
						cout<<"1.��ֱ��/�뾶�����ܳ�"<<endl;
						cout<<"2.��ֱ��/�뾶�������"<<endl;
						cout<<"3.���ܳ�����ֱ��/�뾶"<<endl;
						int Choose3;
						cin>>Choose3;
						switch(Choose3){
							case 1:{
								double d;
								cout<<"����ֱ����";
								cin>>d;
								cout<<"���Բ���ܳ���"<<d*3.14<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 2:{
								double r;
								cout<<"����뾶��";
								cin>>r;
								cout<<"���Բ�������"<<r*r*3.14<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 3:{
								double c;
								cout<<"�����ܳ���";
								cin>>c;
								cout<<"���Բ��ֱ����"<<c/3.14<<"���뾶��"<<c/3.14/2<<endl;
								system("pause");
								system("cls");
								break;
							}
							default:{
								cout<<"�밴����ʾ���룡"<<endl;
								system("pause");
								system("cls");
								break;
							}
						}
						system("title Kendall OS Beta (Code 1) - ������");
						break;
					}
					case 4:{
						cout<<"��Ҫ�������ּ��㣿"<<endl;
						cout<<"1.������ֱ��/�뾶���ߣ�������"<<endl;
						cout<<"2.������ֱ��/�뾶���ߣ�������"<<endl;
						cout<<"3.����������ߣ������ֱ��/�뾶"<<endl;
						cout<<"4.�������������ֱ��/�뾶�����"<<endl;
						cout<<"5.������ֱ��/�뾶���ߣ������"<<endl;
						int Choose;
						cin>>Choose;
						switch(Choose){
							case 1:{
								double d,h;
								cout<<"�������ֱ����";
								cin>>d;
								cout<<"����ߣ�";
								cin>>h;
								cout<<"���Բ���Ĳ������"<<3.14*d*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 2:{
								double d,h;
								cout<<"�������ֱ����";
								cin>>d;
								cout<<"����ߣ�";
								cin>>h;
								cout<<"���Բ���ı������"<<(3.14*d/2*d/2)*2+3.14*d*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 3:{
								double sc,h;
								cout<<"����������";
								cin>>sc;
								cout<<"����ߣ�";
								cin>>h;
								cout<<"���Բ���ĵ���ֱ����"<<sc/h/3.14<<"���뾶��"<<sc/h/3.14/2<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 4:{
								double sc,d;
								cout<<"����������";
								cin>>sc;
								cout<<"�������ֱ����";
								cin>>d;
								cout<<"���Բ���ĸ���"<<sc/(3.14*d)<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 5:{
								double r,h;
								cout<<"�������뾶��";
								cin>>r;
								cout<<"����ߣ�";
								cin>>h;
								cout<<"���Բ���������"<<r*r*3.14*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							default :{
								cout<<"�밴����ʾ���룡"<<endl;
								system("pause");
								system("cls");
								break;
							}
						}
						system("cls");
						system("title Kendall OS Beta (Code 1) - ������");
						break;
					}
					default :cout<<"û�����ѡ�"<<endl;system("pause");system("cls");
				}
				break;
			}
			case 4:{
				system("title Kendall OS Beta (Code 1) - ���߱ع�");
				int a;
				cout<<"���ֵ�����";
				cin>>a;
				for(int i=1;i<a;){
					if(i%10==7||i/10==7||i%7==0){
						cout<<"��"<<endl;
					}
					else{
						cout<<i<<endl;
					}
					i++;
				}
				system("pause");
				system("cls");
				system("title Kendall OS Beta (Code 1) - ������");
				break;
			}
			case 5:{
				system("title Kendall OS Beta (Code 1) - ����");
				system("cls");
				Sleep(1500);
				for(int i=0;i<24;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<23;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<22;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<21;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<20;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<19;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<18;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<16;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<15;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<14;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<13;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<12;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<11;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<10;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<9;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<8;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<7;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<6;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<5;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<4;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<3;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<2;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<1;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"Kendall OS Beta (Code 1)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				Sleep(1500); 
				system("title Kendall OS Beta (Code 1) - ������");
				break;
			}
			case 6:{
				system("taskkill /f /im Kendall_OS_Beta_(Code_1).exe");
				break;
			}
			default:{
				cout<<"û�����ѡ�"<<endl;
				system("pause");
				system("cls");
			}
		}
	}
	
}
