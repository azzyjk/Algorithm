#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int R;
	cin>>R;
	
	printf("%.4lf\n", (double)R*R*M_PI);
	printf("%.4lf\n", (double)(2*R*R));
	
	return 0;
}