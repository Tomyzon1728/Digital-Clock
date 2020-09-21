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


	
	
	//Using the class.cpp class header to define and develop digital clock program
	#include <iostream>  // this is needed because of
using namespace std; // the "cout" below.

//The Clock class definition starts here. 
// Again, given here as one unit for clarity where 
// as normally this definition would be divided 
// into two parts: specification and implementation
// and written in separate files.  

class Clock 
{ 
  private:
    //declarations of data members that are private
    int hour;          //an hour in the range 1 - 12
    int minute,        //a minute in the range 0 - 59
    int second;        //a second in the range 0 - 59
    string meridian;   //is the time AM or PM

  public: 
    // publically accessible methods, i.e., the public interface 

    //Set the clock to the specified time 
    void setClock (int h, int m, int s, string mer)
    {
       hour = h;
       minute = m;
       second = s; 
       meridian = mer;
    }

    //Display the time in standard notation
    void displayStandard()
    {
      cout << hour<<':'<<minute<<':'<<second<<' ' << meridian ;
    }

    //Display the time in military notation
    void displayMilitary()
    {
      int militaryHour = hour;

      //if it is pm and it isn't 12:00 noon, then add 
      //12 hours to the time
      if (meridian == "PM" && hour != 12)
          militaryHour += 12;

      //if it is 12:00 midnight, then subtract 12 hours
      if (meridian == "AM" && hour == 12)
          militaryHour -= 12;

      cout << militaryHour << ':' << minute <<  ':' << second;		  
    }

};
//The Clock class definition ends with the closing brace and semicolon.

	
	
	
	
	
	
	
}
