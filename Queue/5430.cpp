#include<iostream>
#include<deque>
using namespace std;

void makeDQ(deque<int>& dq, string number){
	int num;
	for(int i=0; number[i]!=']'; i++){
		if(number[i]>='0'&&number[i]<='9') {
			num=number[i]-'0';
			while(number[i+1]>='0'&&number[i+1]<='9'){
				i+=1;
				num*=10;
				num+=number[i]-'0';
			}	
			dq.push_back(num);
		}
	}
}

void Print(deque<int> dq, bool now){
	cout<<"[";
	while(!dq.empty()){
		if(now==false) {
			cout<<dq.front();	
			dq.pop_front();
		}
		else{
			cout<<dq.back();	
			dq.pop_back();
		}
		if(!dq.empty()) cout<<",";
	}
	cout<<"]\n";
}

void exer(deque<int>& dq, bool& now, string p){
	for(int i=0; p[i]!='\0'; i++){
		switch(p[i]){
			case 'R':
				now=!now;
				break;
				
			case 'D':
				if(dq.empty()) cout<<"error\n";
				else{
					if(now==false) dq.pop_front();
					else dq.pop_back();
				}
				break;
		}
	}
}

int main(){
	int T, n;
	string p, number;
	cin>>T;
	
	for(int i=0; i<T; i++){
		bool now=false;//false : front, true : back;
		deque<int> dq;
		cin>>p>>n>>number;
		makeDQ(dq, number);
		exer(dq, now, p);
		if(!dq.empty()) Print(dq, now);
	}
	
	return 0;
}