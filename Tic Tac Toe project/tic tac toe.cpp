#include <iostream>
using namespace std;
	char data[9]={'1','2','3','4','5','6','7','8','9'};
	int i,j,user_input;
	void board();
   void playerXprint(int user_input);
   void playerOprint(int user_input);
   bool checkwin();
    //Main function
int main() {
	board();
	int user_input;
	for(int i=1;i<=10;i++)
	{
	if(i==10)
	{
		cout<<"==>>Match Drawn.";
		break;
	}
	if(i%2!=0)
	{
		cout<<"Player X turn:";
		cin>>user_input;
		playerXprint(user_input);
		if(checkwin())
		{
			board();
			cout<<"==>Player X won.";
			break;
		}
	}
	else if(i%2==0)
	{
		cout<<"Player O turn:";
		cin>>user_input;
		playerOprint(user_input);
		if(checkwin())
		{
			board();
			cout<<"==>Player O won.";
			break;
		}
	}
	board();
	}
	return 0;
}

	//Board function 
void board()
	{
	system("cls");
	cout<<"\t\t\tTick-Tac-Toe\n\n";
	cout<<"\t\tPlayer 1 [X] ----- Player 2 [O]\n\n";
	cout<<"\t     |     |        "<<endl;
	cout<<"\t  "<<data[0]<<"  |  "<<data[1]<<"  |  "<<data[2]<<endl;
	cout<<"\t_____|_____|_____"<<endl;
	cout<<"\t     |     |        "<<endl;
	cout<<"\t  "<<data[3]<<"  |  "<<data[4]<<"  |  "<<data[5]<<endl;
	cout<<"\t_____|_____|_____"<<endl;
	cout<<"\t     |     |        "<<endl;
	cout<<"\t  "<<data[6]<<"  |  "<<data[7]<<"  |  "<<data[8]<<endl;
	cout<<"\t     |     |        "<<endl;
    }


void playerXprint(int user_input)
{
		switch(user_input)
		{
		case 1:data[0]='X';
		break;
		case 2:data[1]='X';
		break;
		case 3:data[2]='X';
		break;
		case 4:data[3]='X';
		break;
		case 5:data[4]='X';
		break;
		case 6:data[5]='X';
		break;
		case 7:data[6]='X';
		break;
		case 8:data[7]='X';
		break;
		case 9:data[8]='X';
		break;
       }
}
void playerOprint(int user_input)
{
		switch(user_input)
		{
		case 1:data[0]='O';
		break;
		case 2:data[1]='O';
		break;
		case 3:data[2]='O';
		break;
		case 4:data[3]='O';
		break;
		case 5:data[4]='O';
		break;
		case 6:data[5]='O';
		break;
		case 7:data[6]='O';
		break;
		case 8:data[7]='O';
		break;
		case 9:data[8]='O';
		break;
	}
}



//checkwin for both players
bool checkwin()
{
	
			if(data[0]==data[1]&&data[1]==data[2])
			{
			return true;
			}
			else if(data[3]==data[4]&&data[4]==data[5])
			{
			return true;
			}
			else if(data[6]==data[7]&&data[7]==data[8])
			{
			return true;
			}
			else if(data[0]==data[3]&&data[3]==data[6])
			{
			return true;
			}
			else if(data[1]==data[4]&&data[4]==data[7])
			{
			return true;
			}
			else if(data[2]==data[5]&&data[5]==data[8])
			{
			return true;
			}
			else if(data[0]==data[4]&&data[4]==data[8])
			{
			return true;
			}
			else if(data[2]==data[4]&&data[4]==data[6])
			{
			return true;
			}
			else
			return false;
	
	}
