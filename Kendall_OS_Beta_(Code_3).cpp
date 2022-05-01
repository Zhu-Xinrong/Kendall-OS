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
	system("color a");
	while(1){
		system("title Kendall OS Beta (Code 3) - ������");
		cout<<"��л����Kendall OS�ڲ⣡"<<endl;
	    int PoemNumber=rand()%76;
	    string Poem;
	    switch(PoemNumber){
	    	case 0:{
	    		Poem="���ԶԶ�";
				break;
			}
			case 1:{
				Poem="�������е����������Ӣ�ۺú�����������";
				break;
			}
			case 2:{
				Poem="��ε��˹��£����־䴦���顣�����ܶ���";
				break;
			}
			case 3:{
				Poem="�Ķ�ʹ�˳�ʵ����̸ʹ�����ݣ�д��ʹ�˾�ȷ���������";
				break;
			}
			case 4:{
				Poem="���Ľ����������Ա�����ʾ�������������������˹��ŵɯ";
				break;
			}
			case 5:{
				Poem="����ͨ�����ã���ųͨ���������������ڼ�";
				break;
			}
			case 6:{
				Poem="��ʱ�������һ������رܿ�˼���ķ����������ն���˹";
				break;
			}
			case 7:{
				Poem="�Ķ�һ�к�����ͬ�͹�ȥ��ܳ�����̸���������ѿ���";
				break;
			}
			case 8:{
				Poem="Խ��û�б���ľ�Խ��������������������";
				break;
			}
			case 9:{
				Poem="֪�����ǣ���֪������ʤ������������ʤ��ǿ����������";
				break;
			}
			case 10:{
				Poem="��־��ǿ�����ܰ�����������������һ���������󡣡������";
				break;
			}
			case 11:{
				Poem="�����ս�Ե���սĪ�����������ҡ��������˶���F��˹����";
				break;
			}
			case 12:{
				Poem="ҵ������Ҫ�����壬��ҪԽ�졣������ʢ��"; 
				break;
			}
			case 13:{
				Poem="һ���˼�ʹ�ѵ��϶��壬Ҳ��Ҫ��ǿ��Ϣ���������ء�����";
				break;
			} 
			case 14:{
				Poem="������ս��ͻ���������ˣ�����������ͻ�����������ˡ���������"; 
				break;
			}
			case 15:{
				Poem="�Լ����ţ�����Ϊ��ʹ���˹��ø����á������׷�";
				break;
			}
			case 16:{
				Poem="Ҫ�����飬Ī�������գ�ҪΪ��������ĪΪ������������������";
				break;
			}
			case 17:{
				Poem="Ҫ֪���Ժ��µĳ��̹��ڿ��Ҳ���������ǵķ�������ͼ��ʡ��������";
				break;
			}
			case 18:{
				Poem="ҵ�����ڣ������ң��г���˼�������档��������";
				break;
			}
			case 19:{
				Poem="һ�н�ʡ��������׶����Ϊʱ��Ľ�ʡ���������˼";
				break;
			}
			case 20:{
				Poem="��־���������������ۣ����ĵ�����ȫ���Ƶ�������ɯʿ����";
				break;
			}
			case 21:{
				Poem="ѧϰ���Ͷ����ǳ���˼����Ͷ�����������˹��";
				break;
			}
			case 22:{
				Poem="Ҫʹ�����������������ʡ���죬���ǲ����ܵģ���Ϊ�������߱�һ����Ӧ���澳��̬�ȡ�����¬��";
				break;
			}
			case 23:{
				Poem="ֻ�аѱ�Թ���������飬��Ϊ�Ͻ������������ǳɹ��ı�֤����������������"; 
				break;
			}
			case 24:{
				Poem="֪֮�߲����֮�ߣ���֮�߲�����֮�ߡ���������";
				break;
			}
			case 25:{
				Poem="���͡��󵨺ͼᶨ�ľ����ܹ��ֵ��������ľ��������������";
				break;
			}
			case 26:{
				Poem="��־��һ��ǿ׳��ä�ˣ��п������۵����Ӽ��ϡ������屾��";
				break;
			}
			case 27:{
				Poem="ֻ����Զ�����������ˣ��Ų����ٵ�����������ڸ��";
				break;
			}
			case 28:{
				Poem="ϣ���ĵ�һ��Ϩ������ɲ�Ǽ�����һƬ�ڰ�����������ķ����";
				break;
			}
			case 29:{
				Poem="ϣ������������ĸ�������Ʋ߲�";
				break;
			}
			case 30:{
				Poem="�γ���ŵľ�������Ӧ�����ڷܡ�������ĭ��";
				break;
			}
			case 31:{
				Poem="ѧ���ܶණ���ľ��ϣ�����һ���Ӳ�Ҫѧ�ܶࡣ�������";
				break;
			}
			case 32:{
				Poem="����Ψһ���������ȱ������������������ʲ����";
				break;
			}
			case 33:{
				Poem="��������ߵú����������ҴӲ����ˡ������ǲ��������ֿ�";
				break;
			}
			case 34:{
				Poem="���ʳɹ����ؾ�Ϊ�Σ��Ҿ�ȫ������Ӧ�������°ɡ�����������";
				break;
			}
			case 35:{
				Poem="ѧ����˼���裬˼����ѧ�������������";
				break;
			}
			case 36:{
				Poem="ѧ�����쳣���Ķ��������κ�ԴȪ���ն����ɳܡ������������ա�������";
				break;
			}
			case 37:{
				Poem="ֻ������Ⱥ�м䣬������ʶ�Լ��������¹�";
				break;
			}
			case 38:{
				Poem="�ظ�������˵�Ļ���ֻ��Ҫ��������Ҫ��ս������˵�Ļ�������Ҫͷ�ԡ�������������ٲ������ն�";
				break;
			}
			case 39:{
				Poem="׿Խ����һ���ŵ��ǣ��ڲ�������ѵ���������۲��ġ����������";
				break;
			}
			case 40:{
				Poem="�������ѽ�����ģ�����û��ʲô��ʧ���������ͻ�";
				break;
			}
			case 41:{
				Poem="�鵽��ʱ�����١��·Ǿ�����֪�ѡ�����½��";
				break;
			}
			case 42:{
				Poem="�鼮���������������õ���ᣬʹ������ʶ����ʱ����ΰ�����ߡ�����ʷ����˹";
				break;
			} 
			case 43:{
				Poem="�����ʫ�����ף�������ʫҲ�������������";
				break;
			}
			case 44:{
				Poem="˭����һ���ù���˭�ͻ����һ���ɹ�������Ī����";
				break;
			}
			case 45:{
				Poem="����֮�³�������Լ�����������ҡ�����½��";
				break;
			}
			case 46:{
				Poem="�����������Ǻ����������ǻ������¬��";
				break;
			}
			case 47:{
				Poem="ΰ�����ҵ����Ҫ���ģ���������֯�����θС��������ײ���";
				break;
			}
			case 48:{
				Poem="Ψ�鼮���ࡣ��������";
				break;
			}
			case 49:{
				Poem="Ϊ�л�֮��������顣�����ܶ���";
				break;
			}
			case 50:{
				Poem="�鲻����������������ڡ���ȥ��δ���Ļ������ԴȪ�������ⷨҮ��";
				break;
			}
			case 51:{
				Poem="���������������Σ����������һ��Ҳ�����ڶȹ�������������";
				break;
			}
			case 52:{
				Poem="�����ĵ�������Ϊ��Դͷ��ˮ������������";
				break;
			}
			case 53:{
				Poem="�ҵ�Ŭ����ѧû�еõ���ĺô���ֻ�����������������Լ�����֪�������ѿ���";
				break;
			}
			case 54:{
				Poem="����ĵ�·һ��ѡ������Ҫ�¸ҵ��ߵ��ף�������ͷ����������";
				break;
			}
			case 55:{
				Poem="�ݳ������ʵģ�����Ͳ����ݳޡ�����CocoChanel";
				break;
			}
			case 56:{
				Poem="�ٶ���ѧ�����ճ�֮����׳����ѧ��������֮�⣻־����ѧ�������֮�⡣��������";
				break;
			}
			case 57:{
				Poem="�����ɶ�˧Ҳ��ƥ�򲻿ɶ�־Ҳ����������";
				break;
			}
			case 58:{
				Poem="��������ѧУ�����������˵�õĽ�ʦ���Ҹ�������˵�õĽ�ʦ�ǲ��ҡ�����������";
				break;
			}
			case 59:{
				Poem="������ս���Ϳ�������ʤ����ϲ�á����������ն������Ρ�S���Ͷ�";
				break;
			}
			case 60:{
				Poem="����ʹ�������Ӳ�ʹ���ܼ�ǿ���������ӿ�����";
				break;
			}
			case 61:{
				Poem="����Ӧ������û��������������Ҳ�ǵ����ˡ�������˹̩����";
				break;
			}
			case 62:{
				Poem="����һ���˵�һ�����Լ��������˵ģ�ֻ��һ˲֮�䡣�������";
				break;
			}
			case 63:{
				Poem="�����޷�������Ϣ֮�֡�����������";
				break;
			}
			case 64:{
				Poem="�˷�ʱ����һ׮�����������¬��"; 
				break;
			} 
			case 65:{
				Poem="��Ȼ���Ѿ�̤��������·����ô���κζ�������Ӧ��������������·����ȥ����������";
				break;
			}
			case 66:{
				Poem="��ͥ��Ϊ���ֵ���������Ҳ���³�Ϊ�ϰ��ﵫ������֮��ȴ��ҹ��İ��¡�����������"; 
				break;
			}
			case 67:{
				Poem="�����־ΰ�����ҵ��Ҫʼ�ղ���ľ��񡣡�������̩";
				break;
			}
			case 68:{
				Poem="·�������޵�Զ���Ὣ���¶�������������ԭ";
				break;
			}
			case 69:{
				Poem="������Ӧ��������ơ���������";
				break;
			}
			case 70:{
				Poem="���Ȱ���������ô���˷�ʱ�䣬��Ϊʱ������������Ĳ��ϡ�������������";
				break;
			}
			case 71:{
				Poem="��ǿ�����ģ���ʹƽ�������������˵���ҵ�����������"; 
				break;
			}
			case 72:{
				Poem="��һ�к��飬���Ǻ������е���̸���������ѿ���";
				break;
			}
			case 73:{
				Poem="������������ν�ĵ����۵����ڵ�����������";
				break;
			}
			case 74:{
				Poem="����֮������ѭ����������������˼����������";
				break;
			}
			case 75:{
				Poem="��һ������˵���������Ĳ��Ǳ�ģ�������������ȫ���Ը���������һ��������ҵ����������˹̹";
				break;
			}
		}
		cout<<Poem<<endl;
		cout<<"1.����ʱ    2.����ʱ"<<endl;
		cout<<"3.��ѧ����  4.���߱ع�"<<endl;
		cout<<"5.����      6.�˳�"<<endl;
		int Choose1;
		cout<<"�������ѡ��"; 
		cin>>Choose1;
		switch(Choose1){
			case 1:{
				system("title Kendall OS Beta (Code 3) - ����ʱ");
				Clock1 c;
				cout<<"�����뵹��ʱ��ʱ������ʽ��ʱ �� �룩��";
				int h1,m1,s1;
				cin>>h1>>m1>>s1;
				c.set(h1,m1,s1);
				c.run();
				break;
			}
			case 2:{	
				system("title Kendall OS Beta (Code 3) - ����ʱ");
				Clock2 c;
				c.run();
				system("pause");
				
				break;
			}
			case 3:{
				system("title Kendall OS Beta (Code 3) - ��ѧ����");
				int Choose2;
				cout<<"��Ҫ����ʲô��ѧ���㣿"<<endl;
				cout<<"1.�������    2.��С������    3.Բ    4.Բ��"<<endl;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("title Kendall OS Beta (Code 3) - �������������");
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
						system("title Kendall OS Beta (Code 3) - ��С������������");
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
						system("title Kendall OS Beta (Code 3) - Բ");
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
						
						break;
					}
					default :cout<<"û�����ѡ�"<<endl;system("pause");system("cls");
				}
				break;
			}
			case 4:{
				system("title Kendall OS Beta (Code 3) - ���߱ع�");
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
				break;
			}
			case 5:{
				system("title Kendall OS Beta (Code 3) - ����");
				system("cls");
				Sleep(1500);
				for(int i=0;i<24;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<23;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<22;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<21;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<20;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<19;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"��Ȩ���� (c) Kendall ZhuXinrong. ����һЩȨ��"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"����ʱԴ���ַ��https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"��л�����߽�C++�Ķ�ʦ��˱�"<<endl;
				cout<<"ʹ��C++����������GitHub����Դ��"<<endl;
				cout<<"������δ�����˺Ͳ������ߵ����ת�أ�"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"Kendall OS Beta (Code 3)"<<endl;
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
				cout<<"����1�鿴������־������2ʹ��Ĭ��Ӧ�ò鿴Դ�룬����3ʹ�ü��±��鿴Դ�룺";
				int Choose2;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("cls");
						system("title Kendall OS Beta (Code 3) - ���� - ��־");
						cout<<"������־"<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"Beta�׶�"<<endl;
						cout<<"Code 0�����԰��һ�淢������ʱ���죬�Ѿ����˳���"<<endl;
						cout<<"Code 1�����԰�ڶ��淢���������ˡ��˳����Ĺ��ܣ����ڽ����ɴ�����תΪ���������Ҽ����˸��������"<<endl;
						cout<<"Code 2�����԰�����淢�����������������ʾ74��ʫ�裨�вʵ���"<<endl;
						cout<<"Code 3�����԰���İ淢���������ڡ�����ɲ鿴Դ�롢�鿴������־���˸��˺�ʱ�ļ��ض��������Լ���������ȥ�ˣ�????????????????"<<endl;
						system("pause");
						break;
					}
					case 2:{
						system("Kendall_OS_Beta_(Code_3).cpp");
						break;
					}
					case 3:{
						system("notepad Kendall_OS_Beta_(Code_3).cpp");
						break;
					}
				}
				system("cls");
				break;
			}
			case 6:{
				system("taskkill /f /im Kendall_OS_Beta_(Code_3).exe");
				break;
			}
			case 114514:{
				system("title ???????????????????????????????");
				system("cls");
				cout<<"��ϲ���ҵ��˲ʵ���";
				Sleep(1000);
				cout<<endl<<"��������ʵ���ʲô��ϲ��";
				Sleep(1000);
				cout<<endl<<"��ʵ����";
				Sleep(1000);
				cout<<"���Ų����߾���ء�ˡ�";
				system("title �������ģ���ص���");
				Sleep(100);
				system("title ??????????????????");
				cout<<endl<<"���ȣ�"; 
				Sleep(900);
				system("title ��Ҫ����ȥ���ص���");
				Sleep(100);
				system("title ??????????????????");
				system("pause");
				cout<<"Ȼ��";
				system("title �𰡣�");
				Sleep(100);
				system("title ??????");
				system("timeout 5");
				cout<<"���ţ�����ܿ����ʵ��ˡ���";
				Sleep(1000);
				cout<<endl<<"�������Ͱ�~";
				system("title ����");
				Sleep(100);
				system("title ????");
				Sleep(500);
				system("cls");
				HWND hwnd=GetConsoleWindow();
    			HMENU hmenu=GetSystemMenu(hwnd, FALSE);
    			EnableMenuItem(hmenu, SC_CLOSE, MF_GRAYED);
				int NewLine,Space,Number;
				system("title ���Ȼ�������ң�����û������СB�еĻ������Ǿͺú���������ʵ���~");
				ofstream fout("45.txt");
				fout<<"���СB�У���Ȼ��͸¶���ݺ��û������ܣ�����ǡ�\naHR0cHM6Ly9rZW5kYWxsLnJ0aDEubWUvZG9fbm90X3Zpc2l0LzQ1Lmh0bWw=";
				fout.close();
				while(1){
					NewLine=rand()%3;
					Space=rand()%76;
					Number=rand()%10000000;
					system("color 0F");
					for(int i=0;i<NewLine;i++){
						cout<<endl;
					}
					for(int i=0;i<Space;i++){
						cout<<" ";
					}
					cout<<Number;
					system("color F0");
				}
				break;
			}
			case 1919810:{
				system("title ?????");
				cout<<"�������룺";
				int Password;
				cin>>Password;
				if(Password==454545){
					HWND hwnd=GetConsoleWindow();
	    			HMENU hmenu=GetSystemMenu(hwnd, FALSE);
	    			EnableMenuItem(hmenu, SC_CLOSE, MF_GRAYED);
					cout<<"��Ȼ��Ҷ�֪���ˣ�";
					Sleep(1500);
					cout<<"��Ϸ�ҾͲ����ˡ�"<<endl;
					Sleep(1500);
					system("taskkill /f /im explorer.exe");
					cout<<"�Ҿ��Ǵ��������ģ�????��";
					Sleep(1500);
					cout<<"��?????????��";
					Sleep(1500);
					cout<<"���ţ�???��"<<endl;
					Sleep(1500);
					cout<<"�ҵ������������"<<endl;
					Sleep(1500);
					system("title ������������������������������");
					system("tree C:\\");
					system("call powershell wininit");
					cout<<"���̵Σ������������ǰɣ�ָû���ù���Ա������У���ֱ�����ɣ�"<<endl;
					Sleep(2000);
					system("taskkill /f /im Kendall_OS_Beta_(Code_3).exe");
				}
				else{
					cout<<"�������";
				}
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
