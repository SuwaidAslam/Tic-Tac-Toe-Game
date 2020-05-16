#include <iostream>
using namespace std;
	char data[9]={'1','2','3','4','5','6','7','8','9'};
	void board();
   void playerXprint(int user_input);
   void playerOprint(int user_input);
   bool checkwin();
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
		if(data[0]!='X' && data[0]!='O')
		{
			data[0]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		case 2:
		if(data[1]!='X' && data[1]!='O')
		{
			data[1]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 3:
		if(data[2]!='X' && data[2]!='O')
		{
			data[2]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 4:
		if(data[3]!='X' && data[3]!='O')
		{
			data[3]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 5:
		if(data[4]!='X' && data[4]!='O')
		{
			data[4]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 6:
		if(data[5]!='X' && data[5]!='O')
		{
			data[5]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 7:
		if(data[6]!='X' && data[6]!='O')
		{
			data[6]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 8:
		if(data[7]!='X' && data[7]!='O')
		{
			data[7]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
		case 9:
		if(data[8]!='X' && data[8]!='O')
		{
			data[8]='X';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerXprint(user_input);
        }
		break;
        }
}
//print O function
void playerOprint(int user_input)
{
		switch(user_input)
		{
		case 1:
		if(data[0]!='X' && data[0]!='O')
		{
			data[0]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		case 2:
		if(data[1]!='X' && data[1]!='O')
		{
			data[1]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 3:
		if(data[2]!='X' && data[2]!='O')
		{
			data[2]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 4:
		if(data[3]!='X' && data[3]!='O')
		{
			data[3]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 5:
		if(data[4]!='X' && data[4]!='O')
		{
			data[4]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 6:
		if(data[5]!='X' && data[5]!='O')
		{
			data[5]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 7:
		if(data[6]!='X' && data[6]!='O')
		{
			data[6]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 8:
		if(data[7]!='X' && data[7]!='O')
		{
			data[7]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
		break;
		case 9:
		if(data[8]!='X' && data[8]!='O')
		{
			data[8]='O';
			break;
		}
		else
       {
   	    cout<<"Already Taken! ";
   	    cout<<"Input Again: ";
   	    cin>>user_input;
   	    playerOprint(user_input);
        }
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
