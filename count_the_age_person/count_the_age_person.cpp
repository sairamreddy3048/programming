using namespace std;

#include <iostream>
#include <math>

int main()
{
	int BirthMonth, BirthYear;
	int CurrentMonth, CurrentYear;
	int AgeYear, AgeMonth;
	
	cout<<"\n\n\t\t\tCount the age person\n\n";
	cout<<"Enter Your Birth Year(Eg:1989):";
	cin>>BirthYear;
	
	cout<<"\n\nEnter Your Birth Month(Eg:7):";
	cin>>BirthMonth;
	
	cout<<"\nEnter The Current Month(Eg:7):";
	cin>>CurrentMonth;
	
	cout<<"\nEnter The Current Year(Eg:2010):";
	cin>>CurrentYear;
	
	AgeYear=CurrentYear-BirthYear;
	AgeMonth=CurrentMonth-BirthMonth;//Since Current month might be less than the BirthMonth
	if AgeMonth < 0
	  AgeYear--;
	end
	
	AgeMonth = abs(AgeMonth)
	
	cout<<"\n\n\t\tYour Age is "<<AgeYear<<" Years And "<<AgeMonth<<" Months ";
	
	return 0;
}
