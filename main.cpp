#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h> //suiji 
#include<string.h>
#include<windows.h> //SLEEP����
using namespace std;
struct Player{//��ҽṹ�� 
	char name[20];
	char allname[100]; 
	int hp;
	int attack;
	int protect;
	int money;
	int moneyGet;
	int human;
	int object;
	int objectGet; 
}player={"����","",100,10,10,100,0,0,100,0};
struct Building{
	int s_fac;
	int m_fac;
	int l_fac;
	int s_hou;
	int m_hou;
	int l_hou;
	int s_bak;
	int m_bak;
	int l_bak;
	int n_fac;
	int n_hou;
	int n_bak;
}building{0,0,0,0,0,0,0,0,0,0,0,0};
int suiJi(int a){
    srand((unsigned)time(NULL));
    return rand()%a;
}
void fenge(){
	cout<<endl<<endl<<"------�ָ���------"<<endl<<endl;
}
void build(){
	int a;
	cout<<"��ѡ����"<<endl;
	_sleep(200);
	cout<<endl<<endl<<"1.С����(50) 2.����(100) 3.�߼�����(200) 4.СԺ��(50) 5.��Ԣ(200) 6.����(1000) 7.С��˾��100�� 8.���У�200�� 9.���⣨500��";
	cout<<"10.���׹�����500�� 11.��ҵ�֣�5000�� 12.����Ԫ���⣨2000��"<<endl<<endl;
	cin>>a;
	if(a==1){
		if(player.object<50||player.money<20){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺С����"<<endl<<endl;
			player.object-=50;
			player.money-=20;
			building.s_fac+=1;
			player.moneyGet+=20;
			player.objectGet+=50;
		}
	}else if(a==2){
		if(player.object<100||player.money<50){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺����"<<endl<<endl;
			player.object-=100;
			player.money-=50;
			building.m_fac+=1;
			player.moneyGet+=50;
			player.objectGet+=100;
		}
	}else if(a==3){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺�߼�����"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.l_fac+=1;
			player.moneyGet+=100;
			player.objectGet+=1000;
		}
	}else if(a==4){
		if(player.object<50||player.money<10){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺СԺ��"<<endl<<endl;
			player.object-=50;
			player.money-=10;
			building.s_hou+=1;
			player.human+=5;
			player.moneyGet+=1;
		}
	}else if(a==5){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺��Ԣ"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.m_hou+=1;
			player.human+=100;
			player.moneyGet+=20;
		}
	}else if(a==6){
		if(player.object<1000||player.money<500){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺����"<<endl<<endl;
			player.object-=1000;
			player.money-=500;
			building.l_hou+=1;
			player.human+=2000;
			player.moneyGet+=2000/5;
		}
	}else if(a==7){
		if(player.object<100||player.money<20){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺С��˾"<<endl<<endl;
			player.object-=100;
			player.money-=20;
			building.s_bak+=1;
			player.moneyGet+=200;
		}
	}else if(a==8){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺����"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.m_bak+=1;
			player.moneyGet+=500;
		}
	}else if(a==9){
		if(player.object<500||player.money<300){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺����"<<endl<<endl;
			player.object-=500;
			player.money-=300;
			building.l_bak+=1;
			player.moneyGet+=5000;
		}
	}else if(a==10){
		if(player.object<500||player.money<300){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺���׹���"<<endl<<endl;
			player.object-=500;
			player.money-=300;
			building.n_fac+=1;
			player.objectGet+=1000;
		}
	}else if(a==11){
		if(player.object<2000||player.money<1000){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺��ҵ��"<<endl<<endl;
			player.object-=2000;
			player.money-=1000;
			building.n_hou+=1;
			player.human+=80000;
		}
	}else if(a==12){
		if(player.object<2000||player.money<1000){
			_sleep(200);
			cout<<endl<<"���ܽ��죡����"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"�ѽ��죺����Ԫ����"<<endl<<endl;
			player.object-=2000;
			player.money-=1000;
			building.n_bak+=1;
			player.moneyGet+=5000; 
		}
	}
}
void check(){
	cout<<"Ѫ��"<<player.hp<<endl;
	cout<<"������"<<player.protect<<endl;
	cout<<"������"<<player.attack<<endl;
	cout<<"�˿ڣ�"<<player.human<<endl;
	cout<<"Ǯ��"<<player.money<<endl;
	cout<<"��Դ��"<<player.object<<endl;
	cout<<"׬Ǯ��"<<player.moneyGet<<endl;
	cout<<"��������"<<player.objectGet<<endl;
	cout<<"С������"<<building.s_fac<<endl;
	cout<<"������"<<building.m_fac<<endl;
	cout<<"�߼�������"<<building.l_fac<<endl;
	cout<<"СԺ�ӣ�"<<building.s_hou<<endl;
	cout<<"��Ԣ��"<<building.m_hou<<endl;
	cout<<"���ã�"<<building.l_hou<<endl;
	cout<<"С��˾��"<<building.s_bak<<endl;
	cout<<"���У�"<<building.m_bak<<endl;
	cout<<"���⣺"<<building.l_bak<<endl;
	cout<<"���׹�����"<<building.n_fac<<endl;
	cout<<"��ҵ�֣�"<<building.n_hou<<endl;
	cout<<"����Ԫ���⣺"<<building.n_bak<<endl;
}
void buy(){
	int b; 
	int c;
	cout<<endl<<"����Ҫ��������������Դ����"<<endl<<endl<<"1.���� 2.����"<<endl;
	cin>>b;
	fenge(); 
	if(b==1){
		cout<<"��Ҫ�������Դ"<<endl;
		cin>>c;
		if(c>player.money*2){
			cout<<"Ǯ������"<<endl;
		}else{
			player.money-=c/2;
			player.object+=c;
		}
	}else if(b==2){
		cout<<"��Ҫ��������Դ"<<endl;
		cin>>c;
		if(c>player.object){
			cout<<"����������"<<endl;
		}else{
			player.money+=c/2;
			player.object-=c;
		}
	}
}
int main(){
	cout<<"alpha 1.6.1"<<endl<<endl; 
	printf("��ӭ����������Ϸ�����������Ҫ��չ��Դ������ս������Ϊ����ǿ��������");
	_sleep(100);
	printf("\n\n------�ָ���------\n\n");
	_sleep(100);
	printf("�����ҵ�ȫ��(<=50)��");
	scanf("%s",player.allname); 
	_sleep(200);
	printf("�����ҵļ��(<=10)��");
	scanf("%s",player.name);
	_sleep(200);
	cout<<"�����ҵ�ȫ����"<<player.allname<<"�������"<<player.name<<"��"<<endl<<endl;
	if(player.allname=="�л����񹲺͹�"&&player.name=="�й�"){
		_sleep(1000);
		cout<<endl<<"�����޻��뻪��,"<<endl;
		_sleep(500);
		cout<<endl<<"���������й��ˣ�"<<endl;
		cout<<"�޵а汾����������"<<endl; 
		player.hp=10000;
		player.human=1400000000;
		player.money=1000000000000;
		player.moneyGet=10000000000;
		player.object=1000000000000;
		player.objectGet=100000000000;
		player.attack=10000000;
		player.protect=10000000; 
	}
	if(player.name=="USA"){
		_sleep(1000);
		cout<<endl<<"����û��..."<<endl;
		_sleep(500);
		cout<<"��ɵ�汾����������"<<endl; 
		player.hp=1;
		player.human=0;
		player.money=0;
		player.moneyGet=-10000;
		player.object=0;
		player.objectGet=-10000;
		player.attack=-1000;
		player.protect=-1000; 
	}
	while(1){
		int a;
		cout<<endl<<"�����ʲô������"<<endl<<endl<<"0.�̳� 1.���� 2.�鿴 3.���� 4.����"<<endl;
		cin>>a;
		fenge();
		if(a==0){
			cout<<"�������Ƚ�һЩ����"<<endl<<endl<<endl; 
		}else if(a==1){
			build();
		}else if(a==2){
			check(); 
		}else if(a==3){
			player.money+=player.moneyGet;
			player.money-=player.human*2;
			player.object+=player.objectGet;
			player.object-=player.human/2;
			check();
		}else if(a==4){
			buy();
		}
		if(player.money<0||player.object<0){
			fenge();
			cout<<"���Ʋ���!!"; 
			return 0;
		} 
	}
}
