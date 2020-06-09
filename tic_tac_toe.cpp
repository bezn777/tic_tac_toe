#include <iostream>
using namespace std;
char matrix[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'Y';
int co;

void board(){
    cout<< "Welcome to Tic Tae Toc"<< endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<< endl;
    }
}
void user_input(){
    int n;
    cout<< "It is player "<< player << " turn. "<< " Please enter the number on the board: ";
    cin>> n;

    if (n == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}
	else if (n == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "This field has been filled, try again!" << endl;
			user_input();
		}
	}

}
void switchplayer(){
    if(player == 'Y')
       player = 'O';
    else
       player = 'Y';
}

char win(){
    //player 'X'
    //row & col check
    for(int j =0; j<3; j++){
        if(matrix[0][j]== 'Y' && matrix[1][j] == 'Y' && matrix[2][j] == 'Y' || matrix[j][0]== 'Y' &&  matrix[j][1] == 'Y' && matrix[j][2]== 'Y')
          return 'Y';
    }
    // Diag check
	if (matrix[0][0] == 'Y' && matrix[1][1] == 'Y' && matrix[2][2] == 'Y')
		return 'Y';
	if (matrix[2][0] == 'Y' && matrix[1][1] == 'Y' && matrix[0][2] == 'Y')
		return 'Y';

	//player 'O'
    //row & col check
	 for(int j =0; j<3; j++){
        if(matrix[0][j]== 'O' && matrix[1][j] == 'O' && matrix[2][j] == 'O' || matrix[j][0]== 'O' &&  matrix[j][1] == 'O' && matrix[j][2]== 'O')
          return 'O';
    }
    // Diag check
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}
int main(){
    co = 0;
    board();
    while(1){
        co++;
        user_input();
        board();
        if(win() == 'Y'){
            cout<< "player Y wins"<< endl;
            break;
        }
        else if(win() == 'O'){
            cout<< "player O wins"<<endl;
            break;
        }
        else if(win() == '/' && co == 9){
            cout<< "Draw"<<endl;
            break;
        }
        switchplayer();
    }
    return 0;
}
