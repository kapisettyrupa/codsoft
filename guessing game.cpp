#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	cout<<"\n--<<--WELCOME TO GUESSING GAME-->>--\n"<<endl;
	cout<<"YOU WILL HAVE TO GUESS A NUMBER BETWEEN 1 TO 100\n";
	srand(time(0));
	int randNum=(rand()%100)+1;
	cout<<"you have 5 chances to guess the correct number\n";
	int chanceleft=5;
	int playerinput;
	for(int i=1;i<=5;i++)
	{
	cout<<"Enter the number\n";
	cin>>playerinput;
	if(playerinput==randNum)
	{
		cout<<"Congratulations,You have successfully guessed the correct number";
		cout<<"Thanks for playing";
		break;
	}
	else
	{
		if(playerinput>randNum)
		{
			cout<<"Insert a lesser number.Try again"<<endl;
		}
		else
		{
			cout<<"insert a larger number.Try again"<<endl;
		}
	}
	chanceleft--;
	cout<<"Chance left to guess the number:"<<chanceleft<<endl;
	if(chanceleft==0)
	{
		cout<<"sorry your chances are completed to guess the number"<<endl;
		cout<<"The random number was:"<<randNum<<endl;
		cout<<"Thanks for playing have a nice day";
	}
	}
	cout<<"\n";
	return 0;
}
