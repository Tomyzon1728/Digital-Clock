//Digitalclock
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int h,m,s;
	cout<<"Enter the hour:";
	cin>>h;
	cout<<"Enter the minute:";
	cin>>m;
	cout<<"Enter the second:";
	cin>>s;
	
	while(true){
		system("cls");
		
	cout<<h<<":"<<m<<":"<<s;
	Sleep(1000);
	s++;
	if(s>59){
		s=1;
		m++;//m+1
	}
	if (m>59){
		m=1;
		h++;
	}
	if(h>12){
		h=1;
	}
}


	
	
	
	
	
	
	
}
