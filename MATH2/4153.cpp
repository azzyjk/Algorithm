#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b, c;
	while(cin>>a>>b>>c){
		if(a==b&&b==c&&a==0) break;
		else {
			if(c<a) swap(c, a);
			if(c<b) swap(c, b);
			if(c==sqrt(a*a+b*b)) cout<<"right\n";
			else cout<<"wrong\n";
		}
	}
	return 0;
}