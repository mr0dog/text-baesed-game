#include<iostream>
using namespace std;

int main() {
	cout << "you wake up on the floor in a big dark house" << endl;
	cout << "you can't remember how you got there or what your doing there at all" << endl;
	cout << "you stand up and some drywall falls of your clothes" << endl;
	cout << "you look up and see a big hole in the ceiling" << endl;
	int room = 0;
	char input;
	while (1) {
		switch (room) {
		case 0:
			cout << "you are in room 0 you can go (n)orth or (s)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 1;
			else if (input == 's' || input == 'S')
				room = 2;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 1:
			cout << "you are in room 1 you can go (e)ast or (s)outh" << endl;
			cin >> input;
			if (input == 's' || input == 'S')
				room = 0;
			else if (input == 'e' || input == 'E')
				room = 3;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 2:
			cout << "you are in room 2 you can go (n)orth or (e)ast" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 0;
			else if (input == 'e' || input == 'E')
				room = 4;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 3:
			cout << "you are in room 3 you can go (e)ast or (w)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 5;
			else if (input == 'w' || input == 'W')
				room = 1;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 4:
			cout << "you are in room 4 you can go (n)orth or (w)est" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 6;
			else if (input == 'w' || input == 'W')
				room = 2;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 6:
			cout << "you are in room 6 you can go (e)ast or (s)outh" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 7;
			else if (input == 's' || input == 'S')
				room = 4;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 7:
			cout << "you are in room 7 you can go (e)ast or (w)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 8;
			else if (input == 'w' || input == 'W')
				room = 6;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 5:
			cout << "you are in room 5 you can go (e)ast or (w)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 9;
			else if (input == 'w' || input == 'W')
				room = 3;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 8:
			cout << "you are in room 8 you can go (n)orth or (w)est" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 9;
			else if (input == 'w' || input == 'W')
				room = 7;
			else
				cout << "not an option, sorry" << endl;
			break;
		case 9:
			cout << "you are in room 9 you can go (s)outh or (w)est" << endl;
			cin >> input;
			if (input == 's' || input == 'S')
				room = 8;
			else if (input == 'w' || input == 'W')
				room = 5;
			else
				cout << "not an option, sorry" << endl;
			break;




		}
	}
}
