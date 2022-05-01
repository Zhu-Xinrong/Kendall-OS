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
		system("title Kendall OS Beta (Code 3) - 主界面");
		cout<<"感谢参与Kendall OS内测！"<<endl;
	    int PoemNumber=rand()%76;
	    string Poem;
	    switch(PoemNumber){
	    	case 0:{
	    		Poem="啊对对对";
				break;
			}
			case 1:{
				Poem="有勇气承担命运这才是英雄好汉。——黑塞";
				break;
			}
			case 2:{
				Poem="与肝胆人共事，无字句处读书。——周恩来";
				break;
			}
			case 3:{
				Poem="阅读使人充实，会谈使人敏捷，写作使人精确。——培根";
				break;
			}
			case 4:{
				Poem="最大的骄傲与最大的自卑都表示心灵的软弱无力。——斯宾诺莎";
				break;
			}
			case 5:{
				Poem="勇气通往天堂，怯懦通往地狱。——塞内加";
				break;
			}
			case 6:{
				Poem="有时候读书是一种巧妙地避开思考的方法。——赫尔普斯";
				break;
			}
			case 7:{
				Poem="阅读一切好书如同和过去最杰出的人谈话。——笛卡儿";
				break;
			}
			case 8:{
				Poem="越是没有本领的就越加自命不凡。——邓拓";
				break;
			}
			case 9:{
				Poem="知人者智，自知者明。胜人者有力，自胜者强。——老子";
				break;
			}
			case 10:{
				Poem="意志坚强的人能把世界放在手中像泥块一样任意揉捏。——歌德";
				break;
			}
			case 11:{
				Poem="最具挑战性的挑战莫过于提升自我。——迈克尔·F·斯特利";
				break;
			}
			case 12:{
				Poem="业余生活要有意义，不要越轨。——华盛顿"; 
				break;
			}
			case 13:{
				Poem="一个人即使已登上顶峰，也仍要自强不息。——罗素·贝克";
				break;
			} 
			case 14:{
				Poem="最大的挑战和突破在于用人，而用人最大的突破在于信任人。——马云"; 
				break;
			}
			case 15:{
				Poem="自己活着，就是为了使别人过得更美好。——雷锋";
				break;
			}
			case 16:{
				Poem="要掌握书，莫被书掌握；要为生而读，莫为读而生。——布尔沃";
				break;
			}
			case 17:{
				Poem="要知道对好事的称颂过于夸大，也会招来人们的反感轻蔑和嫉妒。——培根";
				break;
			}
			case 18:{
				Poem="业精于勤，荒于嬉；行成于思，毁于随。——韩愈";
				break;
			}
			case 19:{
				Poem="一切节省，归根到底都归结为时间的节省。——马克思";
				break;
			}
			case 20:{
				Poem="意志命运往往背道而驰，决心到最后会全部推倒。——莎士比亚";
				break;
			}
			case 21:{
				Poem="学习是劳动，是充满思想的劳动。——乌申斯基";
				break;
			}
			case 22:{
				Poem="要使整个人生都过得舒适、愉快，这是不可能的，因为人类必须具备一种能应付逆境的态度。——卢梭";
				break;
			}
			case 23:{
				Poem="只有把抱怨环境的心情，化为上进的力量，才是成功的保证。——罗曼·罗兰"; 
				break;
			}
			case 24:{
				Poem="知之者不如好之者，好之者不如乐之者。——孔子";
				break;
			}
			case 25:{
				Poem="勇猛、大胆和坚定的决心能够抵得上武器的精良。——达·芬奇";
				break;
			}
			case 26:{
				Poem="意志是一个强壮的盲人，倚靠在明眼的跛子肩上。——叔本华";
				break;
			}
			case 27:{
				Poem="只有永远躺在泥坑里的人，才不会再掉进坑里。——黑格尔";
				break;
			}
			case 28:{
				Poem="希望的灯一旦熄灭，生活刹那间变成了一片黑暗。——普列姆昌德";
				break;
			}
			case 29:{
				Poem="希望是人生的乳母。——科策布";
				break;
			}
			case 30:{
				Poem="形成天才的决定因素应该是勤奋。——郭沫若";
				break;
			}
			case 31:{
				Poem="学到很多东西的诀窍，就是一下子不要学很多。——洛克";
				break;
			}
			case 32:{
				Poem="我们唯一不会改正的缺点是软弱。——拉罗什福科";
				break;
			}
			case 33:{
				Poem="我这个人走得很慢，但是我从不后退。——亚伯拉罕·林肯";
				break;
			}
			case 34:{
				Poem="勿问成功的秘诀为何，且尽全力做你应该做的事吧。——美华纳";
				break;
			}
			case 35:{
				Poem="学而不思则罔，思而不学则殆。——孔子";
				break;
			}
			case 36:{
				Poem="学问是异常珍贵的东西，从任何源泉吸收都不可耻。——阿卜·日·法拉兹";
				break;
			}
			case 37:{
				Poem="只有在人群中间，才能认识自己。——德国";
				break;
			}
			case 38:{
				Poem="重复别人所说的话，只需要教育；而要挑战别人所说的话，则需要头脑。——玛丽·佩蒂博恩·普尔";
				break;
			}
			case 39:{
				Poem="卓越的人一大优点是：在不利与艰难的遭遇里百折不饶。——贝多芬";
				break;
			}
			case 40:{
				Poem="我们若已接受最坏的，就再没有什么损失。——卡耐基";
				break;
			}
			case 41:{
				Poem="书到用时方恨少、事非经过不知难。——陆游";
				break;
			}
			case 42:{
				Poem="书籍把我们引入最美好的社会，使我们认识各个时代的伟大智者。——史美尔斯";
				break;
			} 
			case 43:{
				Poem="熟读唐诗三百首，不会作诗也会吟。——孙洙";
				break;
			}
			case 44:{
				Poem="谁和我一样用功，谁就会和我一样成功。——莫扎特";
				break;
			}
			case 45:{
				Poem="天下之事常成于困约，而败于奢靡。——陆游";
				break;
			}
			case 46:{
				Poem="生命不等于是呼吸，生命是活动。——卢梭";
				break;
			}
			case 47:{
				Poem="伟大的事业，需要决心，能力，组织和责任感。　——易卜生";
				break;
			}
			case 48:{
				Poem="唯书籍不朽。——乔特";
				break;
			}
			case 49:{
				Poem="为中华之崛起而读书。——周恩来";
				break;
			}
			case 50:{
				Poem="书不仅是生活，而且是现在、过去和未来文化生活的源泉。——库法耶夫";
				break;
			}
			case 51:{
				Poem="生命不可能有两次，但许多人连一次也不善于度过。——吕凯特";
				break;
			}
			case 52:{
				Poem="问渠哪得清如许，为有源头活水来。——朱熹";
				break;
			}
			case 53:{
				Poem="我的努力求学没有得到别的好处，只不过是愈来愈发觉自己的无知。——笛卡儿";
				break;
			}
			case 54:{
				Poem="生活的道路一旦选定，就要勇敢地走到底，决不回头。——左拉";
				break;
			}
			case 55:{
				Poem="奢侈是舒适的，否则就不是奢侈。——CocoChanel";
				break;
			}
			case 56:{
				Poem="少而好学，如日出之阳；壮而好学，如日中之光；志而好学，如炳烛之光。——刘向";
				break;
			}
			case 57:{
				Poem="三军可夺帅也，匹夫不可夺志也。——孔丘";
				break;
			}
			case 58:{
				Poem="人生就是学校。在那里，与其说好的教师是幸福，不如说好的教师是不幸。——海贝尔";
				break;
			}
			case 59:{
				Poem="接受挑战，就可以享受胜利的喜悦。——杰纳勒尔·乔治·S·巴顿";
				break;
			}
			case 60:{
				Poem="节制使快乐增加并使享受加强。——德谟克利特";
				break;
			}
			case 61:{
				Poem="今天应做的事没有做，明天再早也是耽误了。——裴斯泰洛齐";
				break;
			}
			case 62:{
				Poem="决定一个人的一生，以及整个命运的，只是一瞬之间。——歌德";
				break;
			}
			case 63:{
				Poem="懒人无法享受休息之乐。——拉布克";
				break;
			}
			case 64:{
				Poem="浪费时间是一桩大罪过。——卢梭"; 
				break;
			} 
			case 65:{
				Poem="既然我已经踏上这条道路，那么，任何东西都不应妨碍我沿着这条路走下去。——康德";
				break;
			}
			case 66:{
				Poem="家庭成为快乐的种子在外也不致成为障碍物但在旅行之际却是夜间的伴侣。——西塞罗"; 
				break;
			}
			case 67:{
				Poem="坚持意志伟大的事业需要始终不渝的精神。——伏尔泰";
				break;
			}
			case 68:{
				Poem="路漫漫其修道远，吾将上下而求索。——屈原";
				break;
			}
			case 69:{
				Poem="内外相应，言行相称。——韩非";
				break;
			}
			case 70:{
				Poem="你热爱生命吗？那么别浪费时间，因为时间是组成生命的材料。——富兰克林";
				break;
			}
			case 71:{
				Poem="坚强的信心，能使平凡的人做出惊人的事业。——马尔顿"; 
				break;
			}
			case 72:{
				Poem="读一切好书，就是和许多高尚的人谈话。——笛卡儿";
				break;
			}
			case 73:{
				Poem="读书有三到，谓心到，眼到，口到。——朱熹";
				break;
			}
			case 74:{
				Poem="读书之法，在循序而渐进，熟读而精思。——朱熹";
				break;
			}
			case 75:{
				Poem="对一个人来说，所期望的不是别的，而仅仅是他能全力以赴和献身于一种美好事业。——爱因斯坦";
				break;
			}
		}
		cout<<Poem<<endl;
		cout<<"1.倒计时    2.正计时"<<endl;
		cout<<"3.数学计算  4.逢七必过"<<endl;
		cout<<"5.关于      6.退出"<<endl;
		int Choose1;
		cout<<"输入你的选择："; 
		cin>>Choose1;
		switch(Choose1){
			case 1:{
				system("title Kendall OS Beta (Code 3) - 倒计时");
				Clock1 c;
				cout<<"请输入倒计时的时长（格式：时 分 秒）：";
				int h1,m1,s1;
				cin>>h1>>m1>>s1;
				c.set(h1,m1,s1);
				c.run();
				break;
			}
			case 2:{	
				system("title Kendall OS Beta (Code 3) - 正计时");
				Clock2 c;
				c.run();
				system("pause");
				
				break;
			}
			case 3:{
				system("title Kendall OS Beta (Code 3) - 数学计算");
				int Choose2;
				cout<<"你要进行什么数学计算？"<<endl;
				cout<<"1.最大公因数    2.最小公倍数    3.圆    4.圆柱"<<endl;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("title Kendall OS Beta (Code 3) - 最大公因数计算器");
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
						system("title Kendall OS Beta (Code 3) - 最小公倍数计算器");
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
						system("title Kendall OS Beta (Code 3) - 圆");
						cout<<"你要进行哪种计算？"<<endl;
						cout<<"1.给直径/半径，算周长"<<endl;
						cout<<"2.给直径/半径，算面积"<<endl;
						cout<<"3.给周长，算直径/半径"<<endl;
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
							default:{
								cout<<"请按照提示输入！"<<endl;
								system("pause");
								system("cls");
								break;
							}
						}
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
						
						break;
					}
					default :cout<<"没有这个选项！"<<endl;system("pause");system("cls");
				}
				break;
			}
			case 4:{
				system("title Kendall OS Beta (Code 3) - 逢七必过");
				int a;
				cout<<"数字到几？";
				cin>>a;
				for(int i=1;i<a;){
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
				break;
			}
			case 5:{
				system("title Kendall OS Beta (Code 3) - 关于");
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
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<22;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<21;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<20;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<19;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<18;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<16;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<15;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<14;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<13;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<12;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<11;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<10;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<9;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<8;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<7;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<6;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<5;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<4;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<3;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<2;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				for(int i=0;i<1;i++){
					cout<<endl;
				}
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"Kendall OS Beta (Code 3)"<<endl;
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"版权所有 (c) Kendall ZhuXinrong. 保留一些权利"<<endl;
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"倒计时源码地址：https://blog.csdn.net/u012503639/article/details/45200895"<<endl;
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"正计时源码地址：https://blog.csdn.net/qq_45861939/article/details/105940347"<<endl;
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"感谢带我走进C++的恩师吴克兵"<<endl;
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"使用C++制作，已在GitHub公布源码"<<endl;
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				cout<<"不允许未经本人和博客作者的许可转载！"<<endl;
				Sleep(1500);
				system("cls");
				Sleep(1500);
				cout<<"输入1查看更新日志，输入2使用默认应用查看源码，输入3使用记事本查看源码：";
				int Choose2;
				cin>>Choose2;
				switch(Choose2){
					case 1:{
						system("cls");
						system("title Kendall OS Beta (Code 3) - 关于 - 日志");
						cout<<"更新日志"<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"Beta阶段"<<endl;
						cout<<"Code 0：测试版第一版发布，耗时两天，已经有了雏形"<<endl;
						cout<<"Code 1：测试版第二版发布，增加了“退出”的功能，关于界面由纯文字转为动画，并且加入了更多的内容"<<endl;
						cout<<"Code 2：测试版第三版发布，在主界面随机显示74首诗歌（有彩蛋）"<<endl;
						cout<<"Code 3：测试版第四版发布，“关于”界面可查看源码、查看更新日志，阉割了耗时的加载动画（我自己都看不下去了）????????????????"<<endl;
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
				cout<<"恭喜你找到了彩蛋！";
				Sleep(1000);
				cout<<endl<<"所以这个彩蛋有什么惊喜吗？";
				Sleep(1000);
				cout<<endl<<"其实啊，";
				Sleep(1000);
				cout<<"跟着步骤走就彳亍了。";
				system("title 别听它的！快关掉！");
				Sleep(100);
				system("title ??????????????????");
				cout<<endl<<"首先，"; 
				Sleep(900);
				system("title 不要接下去！关掉！");
				Sleep(100);
				system("title ??????????????????");
				system("pause");
				cout<<"然后，";
				system("title 别啊！");
				Sleep(100);
				system("title ??????");
				system("timeout 5");
				cout<<"接着，你就能看见彩蛋了……";
				Sleep(1000);
				cout<<endl<<"尽情欣赏吧~";
				system("title 不！");
				Sleep(100);
				system("title ????");
				Sleep(500);
				system("cls");
				HWND hwnd=GetConsoleWindow();
    			HMENU hmenu=GetSystemMenu(hwnd, FALSE);
    			EnableMenuItem(hmenu, SC_CLOSE, MF_GRAYED);
				int NewLine,Space,Number;
				system("title 你居然相信了我（还好没看到那小B仔的话），那就好好欣赏这个彩蛋吧~");
				ofstream fout("45.txt");
				fout<<"这个小B仔，居然敢透露我陷害用户的秘密，真的是。\naHR0cHM6Ly9rZW5kYWxsLnJ0aDEubWUvZG9fbm90X3Zpc2l0LzQ1Lmh0bWw=";
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
				cout<<"输入密码：";
				int Password;
				cin>>Password;
				if(Password==454545){
					HWND hwnd=GetConsoleWindow();
	    			HMENU hmenu=GetSystemMenu(hwnd, FALSE);
	    			EnableMenuItem(hmenu, SC_CLOSE, MF_GRAYED);
					cout<<"既然大家都知道了，";
					Sleep(1500);
					cout<<"这戏我就不演了。"<<endl;
					Sleep(1500);
					system("taskkill /f /im explorer.exe");
					cout<<"我就是大名鼎鼎的，????，";
					Sleep(1500);
					cout<<"和?????????，";
					Sleep(1500);
					cout<<"代号，???。"<<endl;
					Sleep(1500);
					cout<<"我的任务完成啦！"<<endl;
					Sleep(1500);
					system("title 啊哈哈哈哈哈哈，哈哈哈哈哈哈哈");
					system("tree C:\\");
					system("call powershell wininit");
					cout<<"奶奶滴，给我玩阴的是吧（指没有用管理员身份运行）？直接来吧！"<<endl;
					Sleep(2000);
					system("taskkill /f /im Kendall_OS_Beta_(Code_3).exe");
				}
				else{
					cout<<"密码错误！";
				}
				break;
			} 
			default:{
				cout<<"没有这个选项！"<<endl;
				system("pause");
				system("cls");
			}
		}
	}
	
}
