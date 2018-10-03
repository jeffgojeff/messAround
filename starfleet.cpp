#include <iostream>
using namespace std;

int main ()
{

	string name;
	int age;
	float gpa;
	int sat;
	string race;


	cout << "what is your first name? ";
	cin  >> name;
	cout << "what is your age? ";
	cin >> age;
	cout << "what is your gpa? ";
	cin >> gpa;
	cout << "what is your sat score? ";
	cin >> sat;
	cout << "what is your race? ";
	cin >> race;

	cout << name << endl;
	cout << age << endl;
	cout << gpa << endl;
	cout << sat << endl;
	cout << race << endl;

	if (race == "Romulan" || race == "romulan")
	{
		cout << "sorry you dont meet our requirements";
	}
	
	else if (((race == "vulcan") || (race == "Vulcan")) && 
			( (age >= 16 && gpa >= 3.5) || (age >= 16 && sat >= 1100) || 
			(sat >= 1500 && gpa >= 2.0) || (age >= 16 && gpa >= 2.0 && sat >= 800) ) )
	{
			cout << "youre a vulcan" << endl << "welcome to starfleet" << endl;
	}
	else if ( (age >= 16 && gpa >= 3.5) || (age >= 16 && sat >= 1100) || 
			(sat >= 1500 && gpa >= 2.0) || (age >= 16 && gpa >= 2.0 && sat >= 800) )
	{
		cout << "youre not a vulcan" << endl << "welcome to starfleet" << endl;
	}

	
	else
	{
		cout << "fuk off mate";
	}






	cout << "----prgrm complete----" << endl;



}