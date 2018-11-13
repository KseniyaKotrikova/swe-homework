#include <iostream>
using namespace std;

char board[3][3]={'1','2','3','4','5','6','7','8','9'};

char player='X';

void Draw()
{
	for(int  i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<< endl;
	}


}
void Input()
{
	int a;
	cout<< "Press the number of the field: "<<player<<" ";
	cin>>a;
	switch(a)
	{
	case 1:
		board[0][0]=player;
		break;
	case 2:
		board[0][1]=player;
		break;
	case 3:
		board[0][2]=player;
		break;
	case 4:
		board[1][0]=player;
		break;
	case 5:
		board[1][1]=player;
		break;
	case 6:
		board[1][2]=player;
		break;
	case 7:
		board[2][0]=player;
		break;
	case 8:	
		board[2][1]=player;
		break;
	case 9:
		board[2][2]=player;
		break;
	default :
		cout<< "Try again!";
	}
}
char TogglePlayer()
{
	if(player=='X')
		player='0';
	else
		player='X';
	
return  player;
}

char logic()
{
	if(board[0][0]==player && board[0][1]==player && board[0][2]==player)
		return 'X';
	else if(board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
		return 'X';
	else if(board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
		return 'X';
	else if(board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
		return 'X';
	else if(board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
		return 'X';
	else if(board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
		return 'X';
	else if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
		return 'X';
	else if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
		return 'X';

	else if(board[0][0]=='0' && board[0][1]=='0' && board[0][2]=='0')
		return '0';
	else if(board[1][0]=='0' && board[1][1]=='0' && board[1][2]=='0')
		return '0';
	else if(board[2][0]=='0' && board[2][1]=='0' && board[2][2]=='0')
		return '0';
	else if(board[0][0]=='0' && board[1][0]=='0' && board[2][0]=='0')
		return '0';
	else if(board[0][1]=='0' && board[1][1]=='0' && board[2][1]=='0')
		return 'X';
	else if(board[0][2]=='0' && board[1][2]=='0' && board[2][2]=='0')
		return '0';
	else if(board[0][0]=='0' && board[1][1]=='0' && board[2][2]=='0')
		return '0';
	else if(board[0][2]=='0' && board[1][1]=='0' && board[2][0]=='0')
		return '0';
	
	
return '/'; 
}
int main()
{
	Draw();
	while(1)
	{	Input();
		Draw();
		if(logic() =='X')
		{
			cout<< "X wins"<<endl;
			break;
		}
		else if(logic()=='0')
		{
			cout<<" 0 wins"<<endl;
			break;
		}
		//else 
		//{
 		//	cout<< "Nobody wins"<<endl;
		//	break;
		//}
		TogglePlayer();
		
	}

return 0;

}



