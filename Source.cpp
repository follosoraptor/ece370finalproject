#include <iostream>
using namespace std;

int menuOption = 0;

void welcome()
{
	cout << "=======================================" << endl;
	cout << "Welcome to the weekly schedule planner!" << endl;
	cout << "Please type in the corresponding number" << endl << "of the action you want to perform." << endl;
	cout << "=======================================" << endl;
	cout << "1 - Display current upcoming events" << endl;
	cout << "2 - Search for free days" << endl;
	cout << "3 - Add an event" << endl;
	cout << "4 - Delete an event" << endl;
	cout << "=======================================" << endl;

	cout << ">> ";
	cin >> menuOption;
}

void displayWeek()
{

}

void findFreeDays()
{

}

void addEvent()
{

}

void deleteEvent()
{

}

void optionSelect()
{
	if (menuOption == 0) // main menu
	{
		welcome();
	}
	if (menuOption == 1) // display current events
	{
		cout << "You have opted to display the current events this week." << endl;
	}
	if (menuOption == 2) // search for free days
	{
		cout << "You have opted to view available free days." << endl;
	}
	if (menuOption == 3) // add an event
	{
		cout << "You have opted to add an event." << endl;
	}
	if (menuOption == 4) // delete an event
	{
		cout << "You have opted to delete an event." << endl;
	}
	if (menuOption > 4) // idk how to produce an error message if user inputs a 0
	{
		cout << "Please enter a valid option from 1 to 4!" << endl;
		menuOption = 0;
	}
}

int main()
{
	optionSelect();

	return 0;
}