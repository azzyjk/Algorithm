#include<iostream>

using namespace std;

int main(){
	int x, y, w, h;
	int X, Y;
	cin>>x>>y>>w>>h;
	
	if(x<w-x) X=x;
	else X=w-x;
	
	if(y<h-y) Y=y;
	else Y=h-y;
	
	if(X<Y) cout<<X<<"\n";
	else cout<<Y<<"\n";
	return 0;
}