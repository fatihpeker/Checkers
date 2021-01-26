#include<iostream>
#include <fstream>
#include<string>
using namespace std;

void NewGame() {
	ofstream file;
	file.open("checker.txt", ios::out | ios::trunc);
	file << " " << "a" << "-" << "b" << "-" << "c" << "-" << "d" << "-" << "e" << "-" << "f" << "-" << "g" << "-" << "h" << endl;
	file << "1" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << endl;
	file << "2" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << endl;
	file << "3" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << "-" << "w" << endl;
	file << "4" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << endl;
	file << "5" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << endl;
	file << "6" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << endl;
	file << "7" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << "-" << "b" << endl;
	file << "8" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << "-" << endl;
	file << "w" << endl;
	file.close();
}

//Dosyadaki konumu d�nen fonksiyon
int   positionSeek(char colum1, int row1) {
	int a[9] = { 0,19,37,55,73,91,109,127,145 };
	int b[9] = { 0,21,39,57,75,93,111,129,147 };
	int c[9] = { 0,23,41,59,77,95,113,131,149 };
	int d[9] = { 0,25,43,61,79,97,115,133,151 };
	int e[9] = { 0,27,45,63,81,99,117,135,153 };
	int f[9] = { 0,29,47,65,83,101,119,137,155 };
	int g[9] = { 0,31,49,67,85,103,121,139,157 };
	int h[9] = { 0,33,51,69,87,105,123,141,159 };
	int position;
	if (colum1=='a')
	{
		position = a[row1];
	}
	if (colum1 == 'b')
	{
		position = b[row1];
	}
	if (colum1 == 'c')
	{
		position = c[row1];
	}
	if (colum1 == 'd')
	{
		position = d[row1];
	}
	if (colum1 == 'e')
	{
		position = e[row1];
	}
	if (colum1 == 'f')
	{
		position = f[row1];
	}
	if (colum1 == 'g')
	{
		position = g[row1];
	}
	if (colum1 == 'h')
	{
		position = h[row1];
	}
	return position;
}

void PrintBoard()
{
	fstream file;	file.open("checker.txt", ios::out | ios::in);
	char GameBoard[8][8];
	char ch;
	for (int i = 0; i < 8; i++) {
		int indis = 0;
		for (char j = 'a'; j < 'i'; j++) {
			file.seekg(positionSeek(j, i+1));
			file >> ch;
			if (ch=='-')
			{
				GameBoard[i][indis] = ' ';
			}
			else
			{
				GameBoard[i][indis] = ch;
			}
			indis++;
		}
	}
	file.close();
	cout << GameBoard[0][0];
	cout << "=========================================================================================" << endl;
	cout << "     a          b          c          d          e          f          g          h      " << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[0][0] << "    |     " << GameBoard[0][1] << "    |     " << GameBoard[0][2] << "    |     " << GameBoard[0][3] << "    |     " << GameBoard[0][4] << "    |     " << GameBoard[0][5] << "    |     " << GameBoard[0][6] << "    |     " << GameBoard[0][7] << "    |     " << "1" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[1][0] << "    |     " << GameBoard[1][1] << "    |     " << GameBoard[1][2] << "    |     " << GameBoard[1][3] << "    |     " << GameBoard[1][4] << "    |     " << GameBoard[1][5] << "    |     " << GameBoard[1][6] << "    |     " << GameBoard[1][7] << "    |     " << "2" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[2][0] << "    |     " << GameBoard[2][1] << "    |     " << GameBoard[2][2] << "    |     " << GameBoard[2][3] << "    |     " << GameBoard[2][4] << "    |     " << GameBoard[2][5] << "    |     " << GameBoard[2][6] << "    |     " << GameBoard[2][7] << "    |     " << "3" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[3][0] << "    |     " << GameBoard[3][1] << "    |     " << GameBoard[3][2] << "    |     " << GameBoard[3][3] << "    |     " << GameBoard[3][4] << "    |     " << GameBoard[3][5] << "    |     " << GameBoard[3][6] << "    |     " << GameBoard[3][7] << "    |     " << "4" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[4][0] << "    |     " << GameBoard[4][1] << "    |     " << GameBoard[4][2] << "    |     " << GameBoard[4][3] << "    |     " << GameBoard[4][4] << "    |     " << GameBoard[4][5] << "    |     " << GameBoard[4][6] << "    |     " << GameBoard[4][7] << "    |     " << "5" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[5][0] << "    |     " << GameBoard[5][1] << "    |     " << GameBoard[5][2] << "    |     " << GameBoard[5][3] << "    |     " << GameBoard[5][4] << "    |     " << GameBoard[5][5] << "    |     " << GameBoard[5][6] << "    |     " << GameBoard[5][7] << "    |     " << "6" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[6][0] << "    |     " << GameBoard[6][1] << "    |     " << GameBoard[6][2] << "    |     " << GameBoard[6][3] << "    |     " << GameBoard[6][4] << "    |     " << GameBoard[6][5] << "    |     " << GameBoard[6][6] << "    |     " << GameBoard[6][7] << "    |     " << "7" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "|     " << GameBoard[7][0] << "    |     " << GameBoard[7][1] << "    |     " << GameBoard[7][2] << "    |     " << GameBoard[7][3] << "    |     " << GameBoard[7][4] << "    |     " << GameBoard[7][5] << "    |     " << GameBoard[7][6] << "    |     " << GameBoard[7][7] << "    |     " << "8" << endl;
	cout << "|          |          |          |          |          |          |          |          |" << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "     a          b          c          d          e          f          g          h      " << endl;
	cout << "=========================================================================================" << endl;
}

//oyunun bitip bitmedi�ini kontrol eden fonksiyon
bool GameIsFinish(char who_play) {
	fstream file;	file.open("checker.txt", ios::out | ios::in);
	char character;
	int number_of_white=0;
	int number_of_black=0;
	while (file.get(character)) {
		if (character=='w'||character=='W')
		{
			number_of_white += 1;
		}
		if (character=='b'||character=='B')
		{
			number_of_black += 1;
		}
	}
	if (who_play == 'w' || who_play == 'W')
	{
		number_of_white -= 1;
	}
	else
	{
		number_of_black -= 1;
	}
	if (number_of_black==0||number_of_white==0)
	{
		file.close();
		return true;
	}
	file.close();
	return false;
}

//S�ran�n kimde oldu�unu d�n�yor
char whoPlay() {
	fstream file;	file.open("checker.txt", ios::out | ios::in);
	file.seekg(161);
	char turn;
	file >> turn;
	file.close();
	return turn;
}

//Oyun s�ras�n� de�i�tiriyor
void gameTurn() {
	fstream file;	file.open("checker.txt", ios::out | ios::in);
	file.seekg(161);
	char turn;
	file >> turn; 
	if ( turn == 'w' )
	{
		turn = 'b';
	}
	else
	{
		turn = 'w';
	}
	file.seekg(161);
	file << turn << endl;
	file.close();
}

//Girilen inputun oynan�labilirli�ini kontrol eden fonksiyon
bool inputControl(string move) {
	char who_play = whoPlay();
	char colum1 = move[0];
	int row1 = move[1] - '0';
	char colum2 = move[2];
	int row2 = move[3] - '0';
	//yanl�� bir s�tun komutu girerse
	if ((colum1 > 'h' || colum1 < 'a')|| (colum2 > 'h' || colum2 < 'a')) {
		cout << "Wrong move command" << endl;
		return false;	
	}
	//yanl�� bir sat�r komutu girerse
	if ((row1 > 8 || row1 < 1)|| (row2 > 8 || row2 < 1)) {
		cout << "Wrong move command" << endl;
		return false;
	}
	//dosya a�ma
	fstream file;	file.open("checker.txt", ios::out | ios::in);	file.seekg(positionSeek(colum1, row1));	char ch;	file >> ch;// cout << ch;
	file.seekg(positionSeek(colum2, row2));	char ch2;	file >> ch2; //cout << ch2;
	
	//rakibin ta��n� oynanamas� i�in
	if (who_play == 'w' & (ch == 'b' || ch== 'B'))
	{
		cout << "You can not play with black man!" << endl;
		return false;
	}
	//rakibin ta��n� oynanamas� i�in
	if (who_play == 'b' & (ch == 'w' || ch== 'W'))
	{
		cout << "You can not play with white man!" << endl;
		return false;
	}
	//Bo� kutu se�memesi i�in
	if (ch == '-')
	{
		cout << "You can not play without man!" << endl;
		return false;
	}
	//Ta�� ba�ka bir ta��n �zerine koymamas� i�in
	if (ch2 != '-')
	{
		cout << "You can not  play there!" << endl;
		return false;
	}
	//beyaz ta�lar i�in geri oynamay� kontrol ediyor
	if (ch=='w'&row2<row1)
	{
		cout << "You can not play back";
		return false;
	}
	//siyah ta�lar i�in geri oynamay� kontrol ediyor
	if (ch == 'b' & row1 < row2)
	{
		cout << "You can not play back";
		return false;
	}
	//�apraz oynamay� kontrol ediyor
	if (colum1!=colum2&&row1!=row2)
	{
		cout << "You can not play cross" << endl;
		return false;
	}
	//oynana ta� w ise
	if (ch=='w')
	{
		//ayn� s�t�nda farkl� sat�ra oynayacak ise
		if (colum1==colum2)
		{
			//2 den b�y�k oynayamaz
			if ((row2-row1)>2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye e�it oynarsa birini yemi� olmas� gerek
			if ((row2-row1)==2)
			{
				file.seekg(positionSeek(colum1, (row2-1)));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == '-' || destroyed_man == 'w' || destroyed_man == 'W')
				{
					cout << "You can not play here without eating opponent's man" << endl;
					return false;
				}
			}
		}
		//ayn� sat�rda farkl� s�tuna oynayacak ise
		if (row1==row2)
		{
			//2 den b�y�k oynayamaz
			if (fabs(colum1-colum2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye e�it oynarsa birini yemi� olmas� gerek
			if (fabs(colum1 - colum2) == 2)
			{
				char big;//b�y�k olan s�t�nu bulmak i�in
				if (colum1>colum2)
				{
					 big = colum1;
				}
				else
				{
					big = colum2;
				}
				file.seekg(positionSeek((big-1), row2));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == '-' || destroyed_man == 'w'||destroyed_man=='W')
				{
					cout << "You can not play here without eating opponent's man" << endl;
					return false;
				}
			}
		}
	}
	//oynanan ta� black ise
	if (ch == 'b')
	{
		//ayn� s�t�nda farkl� sat�ra oynayacak ise
		if (colum1 == colum2)
		{
			//2 den b�y�k oynayamaz
			if ((row1 - row2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye e�it oynarsa birini yemi� olmas� gerek
			if ((row1 - row2) == 2)
			{
				file.seekg(positionSeek(colum1, (row1 - 1)));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == '-' || destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not play here without eating opponent's man" << endl;
					return false;
				}
			}
		}
		//ayn� sat�rda farkl� s�tuna oynayacak ise
		if (row1 == row2)
		{
			//2 den b�y�k oynayamaz
			if (fabs(colum1 - colum2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye e�it oynarsa birini yemi� olmas� gerek
			if (fabs(colum1 - colum2) == 2)
			{
				char big;//b�y�k olan s�t�nu bulmak i�in
				if (colum1 > colum2)
				{
					big = colum1;
				}
				else
				{
					big = colum2;
				}
				file.seekg(positionSeek((big - 1), row2));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == '-' || destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not play here without eating opponent's man" << endl;
					return false;
				}
			}
		}
	}
	//oynayan ta� beyaz dama ise
	if (ch=='W')
	{
		//ayn� s�tun farkl� sat�rda oynayacak ise
		if (colum1==colum2)
		{
			//b�y�k olan sat�r� bulmak i�in
			int big;
			int small;
			if (row1>row2)
			{
				big = row1;
				small = row2;
			}
			else
			{
				big = row2;
				small = row1;
			}
			//dama ka� ta��n �zerinden ge�ti�ini bulmak i�in
			int wNumber = 0;
			for (int i = small + 1; i < big; i++) {
				file.seekg(positionSeek(colum1,i));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man=='b'||destroyed_man=='B')
				{
					wNumber += 1;
				}
				//e�er dama kendi ta�� �zerinden ge�erse hata d�nmek i�in
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//daman�n ayn� anda 2 ta�� yememesi i�in
			if (wNumber>1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}
		}
		//ayn� sat�r farkl� s�tunda oynayacaksa
		if (row1==row2)
		{
			//b�y�k olan s�t�nu bulmak i�in
			char big;
			char small;
			if (colum1 > colum2)
			{
				big = colum1;
				small = colum2;
			}
			else
			{
				big = colum2;
				small = colum1;
			}
			//dama ka� ta��n �zerinden ge�ti�ini bulmak i�in
			int wNumber = 0;
			for (char i = small + 1; i < big; i++) {
				file.seekg(positionSeek(i, row1));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					wNumber += 1;
				}
				//e�er dama kendi ta�� �zerinden ge�erse hata d�nmek i�in
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//daman�n ayn� anda 2 ta�� yememesi i�in
			if (wNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}

		}
	}
	//oynayan ta� siyah dama ise
	if (ch == 'B')
	{
		//ayn� s�tun farkl� sat�rda oynayacak ise
		if (colum1 == colum2)
		{
			//b�y�k olan sat�r� bulmak i�in
			int big;
			int small;
			if (row1 > row2)
			{
				big = row1;
				small = row2;
			}
			else
			{
				big = row2;
				small = row1;
			}
			//dama ka� ta��n �zerinden ge�ti�ini bulmak i�in
			int bNumber = 0;
			for (int i = small + 1; i < big; i++) {
				file.seekg(positionSeek(colum1, i));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					bNumber += 1;
				}
				//e�er dama kendi ta�� �zerinden ge�erse hata d�nmek i�in
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//daman�n ayn� anda 2 ta�� yememesi i�in
			if (bNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}
		}
		//ayn� sat�r farkl� s�tunda oynayacaksa
		if (row1 == row2)
		{
			//b�y�k olan s�t�nu bulmak i�in
			char big;
			char small;
			if (colum1 > colum2)
			{
				big = colum1;
				small = colum2;
			}
			else
			{
				big = colum2;
				small = colum1;
			}
			//dama ka� ta��n �zerinden ge�ti�ini bulmak i�in
			int wNumber = 0;
			for (char i = small + 1; i < big; i++) {
				file.seekg(positionSeek(i, row1));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					wNumber += 1;
				}
				//e�er dama kendi ta�� �zerinden ge�erse hata d�nmek i�in
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//daman�n ayn� anda 2 ta�� yememesi i�in
			if (wNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}

		}
	}
	//dosya kapama
	file.close();
	//hi� hata ko�uluna girmiyorsa true d�n
	return true;
}

//Oynanan ta��n ilk pozisyonuna '-' koyuyoruz
void setEmpty(int position) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	file.seekg(position);
	file << "-";
}

//Yeni konuma ta�� yaz�yor
void setMan(char ch,char colum2,int row2) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	//Beyazlar i�in ta��n son pozisyonuna ta�� koyuyoruz
	if (ch=='w'||ch=='W')
	{
		if (row2 == 8) {
			file.seekg(positionSeek(colum2, row2));
			file << "W";
		}
		else
		{
			file.seekg(positionSeek(colum2, row2));
			file << ch;
		}
	}
	//Siyahlar i�in ta��n son pozisyonuna ta�� koyuyoruz
	if (ch == 'b' || ch == 'B')
	{
		if (row2 == 1) {
			file.seekg(positionSeek(colum2, row2));
			file << "B";
		}
		else
		{
			file.seekg(positionSeek(colum2, row2));
			file << ch;
		}
	}
}

//e�er bir ta� yemi�se onun yerine '-' koyuyoruz
void setDestroyedMan(char colum1, char colum2, int row1, int row2) {
	fstream file;	file.open("checker.txt", ios::out | ios::in);    //ayn� sat�rda farkl� s�tuna oynayacak ise
	if (row1 == row2)
	{
		//b�y�k olan s�t�nu bulmak i�in
		char big;
		char small;
		if (colum1 > colum2)
		{
			big = colum1;
			small = colum2;
		}
		else
		{
			big = colum2;
			small = colum1;
		}
		//�zerinden ge�ti�i her kareyi kontrol ediyoruz
		for (char i = small + 1; i < big; i++) {
			file.seekg(positionSeek(i, row1));			char destroyed_man;			file >> destroyed_man;
			//e�er bir ta� yemi�se onun yerine '-' koyuyoruz
			if (destroyed_man == 'w' || destroyed_man == 'W' || destroyed_man == 'b' || destroyed_man == 'B')
			{
				file.seekg(positionSeek(i, row1));
				file << "-";
			}
		}
	}	//ayn� s�tun farkl� sat�rda oynayacak ise
	if (colum1 == colum2)
	{
		//b�y�k olan sat�r� bulmak i�in
		int big;
		int small;
		if (row1 > row2)
		{
			big = row1;
			small = row2;
		}
		else
		{
			big = row2;
			small = row1;
		}
		//�zerinden ge�ti�i her kareyi kontrol ediyoruz
		for (int i = small + 1; i < big; i++) {
			file.seekg(positionSeek(colum1, i));			char destroyed_man;			file >> destroyed_man;
			if (destroyed_man == 'w' || destroyed_man == 'W' || destroyed_man == 'b' || destroyed_man == 'B')
			{
				file.seekg(positionSeek(colum1, i));
				file << "-";
			}
		}
	}
}

//ilk ta�� yedikten sonra ba�ka yiyecek ta� var mi diye bak�yor
bool isThereAnother(char ch, char colum2, int row2) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	char environment;
	if (ch=='w')
	{
		//ayn� s�t�n, farkl� sat�r
		//geri yiyemez ve sat�r 7,8 deyken alt�ndakini yiyemez
		if (row2<7)
		{
			file.seekg(positionSeek(colum2, (row2+1)));
			file >> environment;
			if (environment == 'b' || environment == 'B') {
				file.seekg(positionSeek(colum2, (row2 +2)));
				file >> environment;
				if (environment=='-')
				{
					return true;
				}
			}
		}
		//en sa� 2 s�t�nda de�ilse sa�a do�ru yer
		if (colum2<'g')
		{
			file.seekg(positionSeek((colum2+1), row2));
			file >> environment;
			if (environment == 'b' || environment == 'B') {
				file.seekg(positionSeek((colum2+2), row2));
				file >> environment;
				if (environment == '-')
				{
					return true;
				}
			}
		}
		//e�er en sol 2 s�tunda de�ilse sola do�ru yer
		if (colum2 > 'b')
		{
			file.seekg(positionSeek((colum2 - 1), row2));
			file >> environment;
			if (environment == 'b' || environment == 'B') {
				file.seekg(positionSeek((colum2 - 2), row2));
				file >> environment;
				if (environment == '-')
				{
					return true;
				}
			}
		}
	}	
	if (ch == 'b')
	{
		//ayn� s�t�n, farkl� sat�r
		//geri yiyemez ve sat�r 1,2 deyken alt�ndakini yiyemez
		if (row2 > 2)
		{
			file.seekg(positionSeek(colum2, (row2 - 1)));
			file >> environment;
			if (environment == 'w' || environment == 'W') {
				file.seekg(positionSeek(colum2, (row2 - 2)));
				file >> environment;
				if (environment == '-')
				{
					return true;
				}
			}
		}
		//en sa� 2 s�t�nda de�ilse sa�a do�ru yer
		if (colum2 < 'g')
		{
			file.seekg(positionSeek((colum2 + 1), row2));
			file >> environment;
			if (environment == 'w' || environment == 'W') {
				file.seekg(positionSeek((colum2 + 2), row2));
				file >> environment;
				if (environment == '-')
				{
					return true;
				}
			}
		}
		//e�er en sol 2 s�tunda de�ilse sola do�ru yer
		if (colum2 > 'b')
		{
			file.seekg(positionSeek((colum2 - 1), row2));
			file >> environment;
			if (environment == 'w' || environment == 'W') {
				file.seekg(positionSeek((colum2 - 2), row2));
				file >> environment;
				if (environment == '-')
				{
					return true;
				}
			}
		}
	}
	if (ch=='W')
	{
		//row 2 ve7 aras�nda ise hemalt sat�rlar� hem �st sat�rlar� kontrol etmek laz�m
		if (row2>2&row2<7)
		{
			//alt�nda kalan kareleri geziyo(8 e do�ru)
			for (int i = row2 + 1; i < 8; i++) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(colum2, i+1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
			//�st�nde kalan kareleri geziyo(1 e do�ru)
			for (int i = row2 - 1; i>1; i--) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(colum2, i - 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (row2<3)
		{
			//alt�nda kalan kareleri geziyo(8 e do�ru)
			for (int i = row2 + 1; i < 8; i++) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(colum2, i + 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (row2>6)
		{
			//�st�nde kalan kareleri geziyo(1 e do�ru)
			for (int i = row2 - 1; i > 1; i--) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(colum2, i - 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		//colum2 b ve c aras�nda ise hem sa� s�tun hem sol s�tun kontrol etmek laz�m
		if (colum2 > 'b' & colum2 < 'g')
		{
			//sa��nda kalan kareleri geziyo(8 e do�ru)
			for (char i = colum2 + 1; i < 'h'; i++) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(i + 1,row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
			//solda kalan kareleri geziyo(1 e do�ru)
			for (char i = colum2 - 1; i > 'a'; i--) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(i-1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (colum2 < 'c')
		{
			//sa��nda kalan kareleri geziyo(h ye do�ru)
			for (char i = colum2 + 1; i < 'h'; i++) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(i+1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}if (colum2 > 'f')
		{
			//solunda kalan kareleri geziyo(1 e do�ru)
			for (char i = colum2 - 1; i > 'a'; i--) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'b' || environment == 'B') {
					file.seekg(positionSeek(i-1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
	}
	if (ch == 'B')
	{
		//row 2 ve7 aras�nda ise hemalt sat�rlar� hem �st sat�rlar� kontrol etmek laz�m
		if (row2 > 2 & row2 < 7)
		{
			//alt�nda kalan kareleri geziyo(8 e do�ru)
			for (int i = row2 + 1; i < 8; i++) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(colum2, i + 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
			//�st�nde kalan kareleri geziyo(1 e do�ru)
			for (int i = row2 - 1; i > 1; i--) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(colum2, i - 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (row2 < 3)
		{
			//alt�nda kalan kareleri geziyo(8 e do�ru)
			for (int i = row2 + 1; i < 8; i++) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(colum2, i + 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (row2 > 6)
		{
			//�st�nde kalan kareleri geziyo(1 e do�ru)
			for (int i = row2 - 1; i > 1; i--) {
				file.seekg(positionSeek(colum2, i));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(colum2, i - 1));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		//colum2 b ve c aras�nda ise hem sa� s�tun hem sol s�tun kontrol etmek laz�m
		if (colum2 > 'b' & colum2 < 'g')
		{
			//sa��nda kalan kareleri geziyo(8 e do�ru)
			for (char i = colum2 + 1; i < 'h'; i++) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(i + 1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
			//solda kalan kareleri geziyo(1 e do�ru)
			for (char i = colum2 - 1; i > 'a'; i--) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(i - 1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
		if (colum2 < 'c')
		{
			//sa��nda kalan kareleri geziyo(h ye do�ru)
			for (char i = colum2 + 1; i < 'h'; i++) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(i + 1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}if (colum2 > 'f')
		{
			//solunda kalan kareleri geziyo(1 e do�ru)
			for (char i = colum2 - 1; i > 'a'; i--) {
				file.seekg(positionSeek(i, row2));
				file >> environment;
				if (environment == 'w' || environment == 'W') {
					file.seekg(positionSeek(i - 1, row2));
					file >> environment;
					if (environment == '-')
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void play() {
	char who_play = whoPlay();
	if (who_play=='w'||who_play=='W')
	{
		cout << "White's turn, please enter your move!(like a3a4)" << endl;
	}
	else
	{
		cout << "Black's turn, please enter your move!(like a3a4)" << endl;
	}
	//kullan�c�dan bir input al�p onu kontrol ediyor
	string move;
	do
	{
		std::cin >> move;
	} while (!inputControl(move));
	//kullan�c�dan al�nan stringi char ve integer olarak ay�r�yor
	char colum1 = move[0];
	int row1 = move[1] - '0';
	char colum2 = move[2];
	int row2 = move[3] - '0';
	fstream file;	file.open("checker.txt", ios::out | ios::in);	file.seekg(positionSeek(colum1,row1));	char ch;	file >> ch;	setEmpty(positionSeek(colum1, row1));	setMan(ch,colum2, row2); 	setDestroyedMan(colum1, colum2, row1, row2);	bool flag=false;	if (fabs(row2-row1)>1||fabs(colum1-colum2)>1)
	{
		flag = isThereAnother(ch, colum2, row2);
	}	if (!flag)
	{
		gameTurn();
	}	
}


int main() {
	cout << "1.New Game" << endl;
	cout << "2.Continue Game" << endl;
	cout << "Enter 1 or 2 toplay game " << endl;
	int menu_chosing;
	std::cin >> menu_chosing;
	//for true input
	while (menu_chosing!=1&menu_chosing!=2)
	{
		cout << "Please enter a useable number" << endl;
		std::cin >> menu_chosing;
	}
	
	switch (menu_chosing)
	{
	case 1:
		NewGame();
		while (!GameIsFinish(whoPlay()))
		{
			PrintBoard();
			play();
			PrintBoard();
			cout << "Enter 1 to end game or enter other number to continue" << endl;
			int end;
			std::cin >> end;
			if (end==1)
			{
				break;
			}

		}
		break;
	case 2: 
		while (!GameIsFinish(whoPlay()))
		{
			PrintBoard();
			play();
			PrintBoard();
			cout << "Enter 1 to end game" << endl;
			int end;
			std::cin >> end;
			if (end == 1)
			{
				break;
			}
		}
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}
