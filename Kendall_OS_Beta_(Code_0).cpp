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
	while(time(NULL)==t);
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
	while(h!=0||m!=0||s!=0){
		tick();
		show();
	}
	cout<<endl<<"时间到了！"<<endl;
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
	while(1)
	{
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
	//第一种加载动画
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
	第二种加载动画
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
	第三种加载动画
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
	system("title Kendall OS Beta (Code 0) - 主界面");
	while(1){
		cout<<"感谢参与Kendall OS内测！"<<endl;
		cout<<"1.倒计时    2.正计时"<<endl;
		cout<<"3.数学计算  4.逢七必过"<<endl;
		cout<<"5.关于"<<endl;
		int Choose1;
		cin>>Choose1;
		switch(Choose1){
			case 1:{
				system("title Kendall OS Beta (Code 0) - 倒计时");
				Clock1 c;
				cout<<"请输入倒计时的时长：";
				int h1,m1,s1;
				cin>>h1>>m1>>s1;
				c.set(h1,m1,s1);
				c.run();
				system("title Kendall OS Beta (Code 0) - 主界面");
				break;
			}
			case 2:{	
				system("title Kendall OS Beta (Code 0) - 正计时");
				Clock2 c;
				c.run();
				system("pause");
				system("title Kendall OS Beta (Code 0) - 主界面");
				break;
			}
			case 3:{
				system("title Kendall OS Beta (Code 0) - 数学计算");
				int Choose2;
				cout<<"你要进行什么数学计算？"<<endl;
				cout<<"1.最大公因数    2.最小公倍数    3.圆    4.圆柱"<<endl;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("title Kendall OS Beta (Code 0) - 最大公因数计算器");
						int n0,n1,p,max;
						cout<<"输入(不得超过2147483647的两个整数 空格隔开)：";
						cin>>n0>>n1;
						if(n0<0||n1<0)cout<<"别逝了，我已经考虑到了。"<<endl;
						else if(n0==0||n1==0)cout<<"0？？？你给我搁这逝Bug呢？？？"<<endl;
						else{
							if(n0>n1)max=n0;
							else if(n0<n1)max=n1;
							else if(n0=n1)max=n0;
							cout<<"尝试中……";
							for(int i=max-1;;i--){ 
								if(n0%i==0&&n1%i==0){
									cout<<"成功！"<<endl;
									p=i;
									break;
								}
							}
						}
						if(p==1)cout<<n0<<"与"<<n1<<"是互质的，所以";
						cout<<n0<<"与"<<n1<<"的最大公因数是"<<p<<endl;
						system("pause");
						system("title Kendall OS - 主界面");
						system("cls"); 
						break;
					}
					case 2:{
						system("title Kendall OS Beta (Code 0) - 最小公倍数计算器");
						int n0,n1,p,max;
						cout<<"输入(不得超过2147483647的两个整数 空格隔开)：";
						cin>>n0>>n1;
						if(n0<0||n1<0)cout<<"别逝了，我已经考虑到了。"<<endl;
						else if(n0==0||n1==0)cout<<"0？？？你给我搁这逝Bug呢？？？"<<endl;
						else if(n0==n1)cout<<"这俩一样啊"<<endl;
						else{
							if(n0>n1)max=n0;
							else if(n0<n1)max=n1;
							else if(n0=n1)max=n0;
							cout<<"获取最小公倍数中……";
							for(int i=max-1;;i--){ 
								if(n0%i==0&&n1%i==0){
									cout<<"成功！"<<endl;
									p=i;
									break;
								}
							}
						}
						if(n0==n1||n0<0||n1<0||n0==0||n1==0);
						else cout<<n0<<"与"<<n1<<"的最小公倍数是"<<n0*n1/p<<endl; 
						system("pause");
						system("title Kendall OS - 主界面");
						system("cls");
						break;
					}
					case 3:{
						system("title Kendall OS Beta (Code 0) - 圆");
						cout<<"你要进行哪种计算？"<<endl;
						cout<<"1.给直径/半径，算周长"<<endl;
						cout<<"2.给直径/半径，算面积"<<endl;
						cout<<"3.给周长，算直径/半径"<<endl;
				//		cout<<"4.给面积，算直径/半径"<<endl;
						int Choose3;
						cin>>Choose3;
						switch(Choose3){
							case 1:{
								double d;
								cout<<"输入直径：";
								cin>>d;
								cout<<"这个圆的周长是"<<d*3.14<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 2:{
								double r;
								cout<<"输入半径：";
								cin>>r;
								cout<<"这个圆的面积是"<<r*r*3.14<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 3:{
								double c;
								cout<<"输入周长：";
								cin>>c;
								cout<<"这个圆的直径是"<<c/3.14<<"，半径是"<<c/3.14/2<<endl;
								system("pause");
								system("cls");
								break;
							}
							//case 4:{ 
							case 114514:{
								double s,a;
								cout<<"正在调试的内容！"<<endl;
								system("title 正在调试的内容！");
								system("color a0");
								cout<<"输入面积：";
								cin>>s;
								for(int i=1;i<=128;i++){
									a=i*i;
									if(a==s){
										a=i;
										break;
									}
								}
								cout<<"这个圆的直径是"<<s/3.14/a/a<<"，半径是"<<s/3.14/a/a/2<<endl;
								system("pause");
								system("cls");
								system("color a");
								system("title Kendall OS Beta (Code 0) - 圆");
								break;
							}
							case 1919810:{
								cout<<"正在调试的内容！"<<endl;
								system("title 正在调试的内容！");
								system("color a0");
								cout<<"Beta版暂时不支持该计算，如有已完成的请发送源码或编译后内容至1848791330@qq.com"<<endl;
								system("pause");
								system("cls");
								system("color a");
								system("title Kendall OS Beta (Code 0) - 圆");
								break;
							}
							default:{
								cout<<"请按照提示输入！"<<endl;
								system("pause");
								system("cls");
								break;
							}
						}
						system("title Kendall OS Beta (Code 0) - 主界面");
						break;
					}
					case 4:{
						cout<<"你要进行哪种计算？"<<endl;
						cout<<"1.给底面直径/半径、高，算侧面积"<<endl;
						cout<<"2.给底面直径/半径、高，算表面积"<<endl;
						cout<<"3.给侧面积、高，算底面直径/半径"<<endl;
						cout<<"4.给侧面积、底面直径/半径，算高"<<endl;
						cout<<"5.给底面直径/半径、高，算体积"<<endl;
						int Choose;
						cin>>Choose;
						switch(Choose){
							case 1:{
								double d,h;
								cout<<"输入底面直径：";
								cin>>d;
								cout<<"输入高：";
								cin>>h;
								cout<<"这个圆柱的侧面积是"<<3.14*d*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 2:{
								double d,h;
								cout<<"输入底面直径：";
								cin>>d;
								cout<<"输入高：";
								cin>>h;
								cout<<"这个圆柱的表面积是"<<(3.14*d/2*d/2)*2+3.14*d*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 3:{
								double sc,h;
								cout<<"输入侧面积：";
								cin>>sc;
								cout<<"输入高：";
								cin>>h;
								cout<<"这个圆柱的底面直径是"<<sc/h/3.14<<"，半径是"<<sc/h/3.14/2<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 4:{
								double sc,d;
								cout<<"输入侧面积：";
								cin>>sc;
								cout<<"输入底面直径：";
								cin>>d;
								cout<<"这个圆柱的高是"<<sc/(3.14*d)<<endl;
								system("pause");
								system("cls");
								break;
							}
							case 5:{
								double r,h;
								cout<<"输入底面半径：";
								cin>>r;
								cout<<"输入高：";
								cin>>h;
								cout<<"这个圆柱的体积是"<<r*r*3.14*h<<endl;
								system("pause");
								system("cls");
								break;
							}
							default :{
								cout<<"请按照提示输入！"<<endl;
								system("pause");
								system("cls");
								break;
							}
						}
						system("cls");
						system("title Kendall OS Beta (Code 0) - 主界面");
						break;
					}
					default :cout<<"没有这个选项！"<<endl;system("pause");system("cls");
				}
				break;
			}
			case 4:{
				system("title Kendall OS Beta (Code 0) - 逢七必过");
				int i=1,a;
				cout<<"数字到几？";
				cin>>a;
				while(i<a){
					if(i%10==7||i/10==7||i%7==0){
						cout<<"过"<<endl;
					}
					else{
						cout<<i<<endl;
					}
				i++;
				}
				system("pause");
				system("cls");
				system("title Kendall OS Beta (Code 0) - 主界面");
				break;
			}
			case 5:{
				system("title Kendall OS Beta (Code 0) - 关于");
				cout<<"Kendall OS Beta (Code 0)"<<endl;
				cout<<"Copyright (c) Kendall ZhuXinrong."<<endl;
				cout<<"使用C++制作"<<endl;
				cout<<"已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人许可转载！"<<endl;
				system("pause");
				system("title Kendall OS Beta (Code 0) - 主界面");
				system("cls");
				break;
			}
			default :cout<<"没有这个选项！"<<endl;system("pause");system("cls");
		}
	}

	return 0;
}
