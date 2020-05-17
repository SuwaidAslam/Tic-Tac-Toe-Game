#include <iostream>
using namespace std;
   char data[9]={'1','2','3','4','5','6','7','8','9'};
   void board();
   void playerXprint(int user_input);
   void playerOprint(int user_input);
   bool checkwin();
   bool switchcase_for_X(int user_input);
   bool switchcase_for_O(int user_input);
    //Main function
int main() {
	board();
	int user_input;
	cout<<"Enter Player X Name: ";
	string name1;
	cin>>name1;
	cout<<"Enter Player O Name: ";
	string name2;
	cin>>name2;
	for(int i=1;i<=10;i++)
	{
	if(i==10)
	{
		cout<<"==>>Match Drawn.";
		break;
	}
	if(i%2!=0)
	{
		cout<<"Player X "<<name1<<"'s turn: ";
		cin>>user_input;
		playerXprint(user_input);
		if(checkwin())
		{
			board();
			cout<<"==>Player X "<<name1<<" won.";
			break;
		}
	}
	else if(i%2==0)
	{
		cout<<"Player O "<<name2<<"'s turn: ";
		cin>>user_input;
		playerOprint(user_input);
		if(checkwin())
		{
			board();
			cout<<"==>Player O "<<name2<<" won.";
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

//Print X function
void playerXprint(int user_input)
{
		switch(user_input)
		{
		case 1:
		if(switchcase_for_X(user_input))
		break;
		case 2:
		if(switchcase_for_X(user_input))
		break;
		case 3:
		if(switchcase_for_X(user_input))
		break;
		case 4:
		if(switchcase_for_X(user_input))
		break;
		case 5:
		if(switchcase_for_X(user_input))
		break;
		case 6:
		if(switchcase_for_X(user_input))
		break;
		case 7:
		if(switchcase_for_X(user_input))
		break;
		case 8:
		if(switchcase_for_X(user_input))
		break;
		case 9:
		if(switchcase_for_X(user_input))
		break;
        }
}
//print O function
void playerOprint(int user_input)
{
		switch(user_input)
		{
		case 1:
		if(switchcase_for_O(user_input))
		break;
		case 2:
		if(switchcase_for_O(user_input))
		break;
		case 3:
		if(switchcase_for_O(user_input))
		break;
		case 4:
		if(switchcase_for_O(user_input))
		break;
		case 5:
		if(switchcase_for_O(user_input))
		break;
		case 6:
		if(switchcase_for_O(user_input))
		break;
		case 7:
		if(switchcase_for_O(user_input))
		break;
		case 8:
		if(switchcase_for_O(user_input))
		break;
		case 9:
		if(switchcase_for_O(user_input))
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
	
//check if the index is already taken or not for X	
bool switchcase_for_X(int user_input)
{
	int index;
	switch(user_input)
	{
		case 1:index=0;
		break;
		case 2:index=1;
		break;
		case 3:index=2;
		break;
		case 4:index=3;
		break;
		case 5:index=4;
		break;
		case 6:index=5;
		break;
		case 7:index=6;
		break;
		case 8:index=7;
		break;
		case 9:index=8;
		break;
	}
		if(data[index]!='X' && data[index]!='O')
		{
			data[index]='X';
			return true;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
}

//check if the index is already taken or not for O	
bool switchcase_for_O(int user_input)
{
	int index;
	switch(user_input)
	{
		case 1:index=0;
		break;
		case 2:index=1;
		break;
		case 3:index=2;
		break;
		case 4:index=3;
		break;
		case 5:index=4;
		break;
		case 6:index=5;
		break;
		case 7:index=6;
		break;
		case 8:index=7;
		break;
		case 9:index=8;
		break;
	}
		if(data[index]!='X' && data[index]!='O')
		{
			data[index]='O';
			return true;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
}
