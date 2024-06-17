#include<iostream>
using namespace std;
void dboard();
void playerturn();
bool gameover();
char turn;
bool draw=false;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int main()
{
	cout<<"Tic Tac Toe \n";
	cout<<"Player 1 [x] : player 2[o]\n";
	turn='x';
	while(!gameover())
	{
		dboard();
		playerturn();
		gameover();
	}
	if(turn=='o' && !draw)
	{
		dboard();
		cout<<endl<<endl<<"Player 1 [x] Wins, Game over\n";
	}
	else if(turn=='x' && !draw)
	{
		dboard();
		cout<<endl<<endl<<"Player 2 [o] Wins,Game over\n";
	}
	else
	{
		dboard();
		cout<<endl<<endl<<"It is a Tie,Game over\n";
	}
}
void dboard()
{
	cout<<"_________________________________"<<endl<<endl;
	cout<<"         |            |          "<<endl;
	cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<endl;
	cout<<"_________|____________|__________"<<endl;
	cout<<"         |            |          "<<endl;
	cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
	cout<<"_________|____________|__________"<<endl;
	cout<<"         |            |          "<<endl;
	cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<endl;
}
void playerturn()
{
	int choice;
	int row=0,column=0;
	if(turn=='x')
	{
		cout<<"Player 1 turn [x]:";
	}
	else if (turn=='o')
	{
		cout<<"Player 2 turn [o]:";
	}
	cin>> choice;
	switch(choice)
	{
		case 1: row=0;column=0;break;
		case 2: row=0;column=1;break;
	    case 3: row=0;column=2;break;
	    case 4: row=1;column=0;break;
	    case 5: row=1;column=1;break;
	    case 6: row=1;column=2;break;
	    case 7: row=2;column=0;break;
	    case 8: row=2;column=1;break;
	    case 9: row=2;column=2;break;
	    default:
	    	cout<<"You did not correct number,Try again\n";
	    	playerturn();
	    }
	}
	bool gameover()
	int i;
	for(i=0;i<3;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]||(board[0][i]==board[2][i]))
		{
			return true;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(board[i][j] !='x' && board[i][j] !='o')
			{
				return false;
			}
		}
	}
	draw=true;
	return true;
		}
