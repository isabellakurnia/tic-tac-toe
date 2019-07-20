#include <iostream>
#include <stdlib.h>
using namespace std;

char player = 'X';
char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void instructions()
{
	cout << "\nPlayer 1 will play as 'X' and Player 2 will play as 'O'" << endl;
	cout << "Pick the number you want to draw in" << endl;
}

void drawGrid()
{
	cout << "\n      Player " << player << "'s turn" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t";
		for (int j = 0; j < 3; j++) {
			cout << grid[i][j];
			if (j == 2)
				cout << endl;
			else
				cout << " | ";
		}
		if (i != 2)
			cout << "\t----------\n";
	}
}

void input()
{
	drawGrid();
	int choice;
	cout << "\nWhich box would you like to choose? ";
	cin >> choice;

	// if box is taken or not
	if (choice == 1)
	{
		if (grid[0][0] == '1')
			grid[0][0] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 2)
	{
		if (grid[0][1] == '2')
			grid[0][1] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 3)
	{
		if (grid[0][2] == '3')
			grid[0][2] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 4)
	{
		if (grid[1][0] == '4')
			grid[1][0] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 5)
	{
		if (grid[1][1] == '5')
			grid[1][1] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 6)
	{
		if (grid[1][2] == '6')
			grid[1][2] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 7)
	{
		if (grid[2][0] == '7')
			grid[2][0] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 8)
	{
		if (grid[2][1] == '8')
			grid[2][1] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}
	else if (choice == 9)
	{
		if (grid[2][2] == '9')
			grid[2][2] = player;
		else
		{
			cout << "This box is already taken :(" << endl;
			cout << "Please try again." << endl;
			input();
		}
	}

	// write on box
	switch (choice) {
	case 1:
		grid[0][0] = player;
		break;
	case 2:
		grid[0][1] = player;
		break;
	case 3:
		grid[0][2] = player;
		break;
	case 4:
		grid[1][0] = player;
		break;
	case 5:
		grid[1][1] = player;
		break;
	case 6:
		grid[1][2] = player;
		break;
	case 7:
		grid[2][0] = player;
		break;
	case 8:
		grid[2][1] = player;
		break;
	case 9:
		grid[2][2] = player;
		break;
	}
}

void changePlayer()
{
	if (player == 'X')
		player = 'O';
	else if (player == 'O')
		player = 'X';
}

char win()
{
	if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2] && grid[0][2] == 'X')					// first row
		return 'X';		
	else if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2] && grid[1][2] == 'X')				// second row
		return 'X';
	else if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2] && grid[2][2] == 'X')				// third row
		return 'X';
	else if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] == 'X')				// diagonal 1
		return 'X';		
	else if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0] && grid[2][0] == 'X')				// first column
		return 'X';
	else if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2] && grid[2][2] == 'X')				// third column
		return 'X';
	else if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1] && grid[2][1] == 'X')				// second column
		return 'X';
	else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[2][0] == 'X')				// diagonal 2
		return 'X';

	else if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2] && grid[0][2] == 'O')
		return 'O';
	else if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2] && grid[1][2] == 'O')
		return 'O';
	else if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2] && grid[2][2] == 'O')
		return 'O';
	else if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] == 'O')
		return 'O';
	else if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0] && grid[2][0] == 'O')
		return 'O';
	else if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2] && grid[2][2] == 'O')
		return 'O';
	else if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1] && grid[2][1] == 'O')
		return 'O';
	else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[2][0] == 'O')
		return 'O';
	else
		return 'D';
}


int main() 
{
	char choice;
	int i = 0;
	bool a = true;
	instructions();
	while (a) {
		i++;
		input();
		if (win() == 'X') {
			system("CLS");
			a = false;
			drawGrid();
			cout << "\nCongrtulations to Player 1! You have won this game!" << endl;
			system("pause");
		}
		else if (win() == 'O') {
			system("CLS");
			a = false;
			drawGrid();
			cout << "\nCongratulations to Player 2! You have won this game!" << endl;
			system("pause");
		}
		else if (win() == 'D' && i == 9) {
			system("CLS");
			a = false;
			drawGrid();
			cout << "\nIt's a draw!" << endl;
			system("pause");
		}
		changePlayer();
		system("CLS");
	}
	return 0;
}
