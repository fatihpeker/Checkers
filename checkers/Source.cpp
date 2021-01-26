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

//Dosyadaki konumu dönen fonksiyon
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

//oyunun bitip bitmediðini kontrol eden fonksiyon
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

//Sýranýn kimde olduðunu dönüyor
char whoPlay() {
	fstream file;	file.open("checker.txt", ios::out | ios::in);
	file.seekg(161);
	char turn;
	file >> turn;
	file.close();
	return turn;
}

//Oyun sýrasýný deðiþtiriyor
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

//Girilen inputun oynanýlabilirliðini kontrol eden fonksiyon
bool inputControl(string move) {
	char who_play = whoPlay();
	char colum1 = move[0];
	int row1 = move[1] - '0';
	char colum2 = move[2];
	int row2 = move[3] - '0';
	//yanlýþ bir sütun komutu girerse
	if ((colum1 > 'h' || colum1 < 'a')|| (colum2 > 'h' || colum2 < 'a')) {
		cout << "Wrong move command" << endl;
		return false;	
	}
	//yanlýþ bir satýr komutu girerse
	if ((row1 > 8 || row1 < 1)|| (row2 > 8 || row2 < 1)) {
		cout << "Wrong move command" << endl;
		return false;
	}
	//dosya açma
	fstream file;	file.open("checker.txt", ios::out | ios::in);	file.seekg(positionSeek(colum1, row1));	char ch;	file >> ch;// cout << ch;
	file.seekg(positionSeek(colum2, row2));	char ch2;	file >> ch2; //cout << ch2;
	
	//rakibin taþýný oynanamasý için
	if (who_play == 'w' & (ch == 'b' || ch== 'B'))
	{
		cout << "You can not play with black man!" << endl;
		return false;
	}
	//rakibin taþýný oynanamasý için
	if (who_play == 'b' & (ch == 'w' || ch== 'W'))
	{
		cout << "You can not play with white man!" << endl;
		return false;
	}
	//Boþ kutu seçmemesi için
	if (ch == '-')
	{
		cout << "You can not play without man!" << endl;
		return false;
	}
	//Taþý baþka bir taþýn üzerine koymamasý için
	if (ch2 != '-')
	{
		cout << "You can not  play there!" << endl;
		return false;
	}
	//beyaz taþlar için geri oynamayý kontrol ediyor
	if (ch=='w'&row2<row1)
	{
		cout << "You can not play back";
		return false;
	}
	//siyah taþlar için geri oynamayý kontrol ediyor
	if (ch == 'b' & row1 < row2)
	{
		cout << "You can not play back";
		return false;
	}
	//çapraz oynamayý kontrol ediyor
	if (colum1!=colum2&&row1!=row2)
	{
		cout << "You can not play cross" << endl;
		return false;
	}
	//oynana taþ w ise
	if (ch=='w')
	{
		//ayný sütünda farklý satýra oynayacak ise
		if (colum1==colum2)
		{
			//2 den büyük oynayamaz
			if ((row2-row1)>2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye eþit oynarsa birini yemiþ olmasý gerek
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
		//ayný satýrda farklý sütuna oynayacak ise
		if (row1==row2)
		{
			//2 den büyük oynayamaz
			if (fabs(colum1-colum2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye eþit oynarsa birini yemiþ olmasý gerek
			if (fabs(colum1 - colum2) == 2)
			{
				char big;//büyük olan sütünu bulmak için
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
	//oynanan taþ black ise
	if (ch == 'b')
	{
		//ayný sütünda farklý satýra oynayacak ise
		if (colum1 == colum2)
		{
			//2 den büyük oynayamaz
			if ((row1 - row2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye eþit oynarsa birini yemiþ olmasý gerek
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
		//ayný satýrda farklý sütuna oynayacak ise
		if (row1 == row2)
		{
			//2 den büyük oynayamaz
			if (fabs(colum1 - colum2) > 2)
			{
				cout << "You can not play more than two squares" << endl;
				return false;
			}
			//2 ye eþit oynarsa birini yemiþ olmasý gerek
			if (fabs(colum1 - colum2) == 2)
			{
				char big;//büyük olan sütünu bulmak için
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
	//oynayan taþ beyaz dama ise
	if (ch=='W')
	{
		//ayný sütun farklý satýrda oynayacak ise
		if (colum1==colum2)
		{
			//büyük olan satýrý bulmak için
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
			//dama kaç taþýn üzerinden geçtiðini bulmak için
			int wNumber = 0;
			for (int i = small + 1; i < big; i++) {
				file.seekg(positionSeek(colum1,i));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man=='b'||destroyed_man=='B')
				{
					wNumber += 1;
				}
				//eðer dama kendi taþý üzerinden geçerse hata dönmek için
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//damanýn ayný anda 2 taþý yememesi için
			if (wNumber>1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}
		}
		//ayný satýr farklý sütunda oynayacaksa
		if (row1==row2)
		{
			//büyük olan sütünu bulmak için
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
			//dama kaç taþýn üzerinden geçtiðini bulmak için
			int wNumber = 0;
			for (char i = small + 1; i < big; i++) {
				file.seekg(positionSeek(i, row1));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					wNumber += 1;
				}
				//eðer dama kendi taþý üzerinden geçerse hata dönmek için
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//damanýn ayný anda 2 taþý yememesi için
			if (wNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}

		}
	}
	//oynayan taþ siyah dama ise
	if (ch == 'B')
	{
		//ayný sütun farklý satýrda oynayacak ise
		if (colum1 == colum2)
		{
			//büyük olan satýrý bulmak için
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
			//dama kaç taþýn üzerinden geçtiðini bulmak için
			int bNumber = 0;
			for (int i = small + 1; i < big; i++) {
				file.seekg(positionSeek(colum1, i));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					bNumber += 1;
				}
				//eðer dama kendi taþý üzerinden geçerse hata dönmek için
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//damanýn ayný anda 2 taþý yememesi için
			if (bNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}
		}
		//ayný satýr farklý sütunda oynayacaksa
		if (row1 == row2)
		{
			//büyük olan sütünu bulmak için
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
			//dama kaç taþýn üzerinden geçtiðini bulmak için
			int wNumber = 0;
			for (char i = small + 1; i < big; i++) {
				file.seekg(positionSeek(i, row1));				char destroyed_man;				file >> destroyed_man;
				if (destroyed_man == 'w' || destroyed_man == 'W')
				{
					wNumber += 1;
				}
				//eðer dama kendi taþý üzerinden geçerse hata dönmek için
				if (destroyed_man == 'b' || destroyed_man == 'B')
				{
					cout << "You can not destroy own man" << endl;
					return false;
				}
			}
			//damanýn ayný anda 2 taþý yememesi için
			if (wNumber > 1)
			{
				cout << "You can not destroy two man same time" << endl;
				return false;
			}

		}
	}
	//dosya kapama
	file.close();
	//hiç hata koþuluna girmiyorsa true dön
	return true;
}

//Oynanan taþýn ilk pozisyonuna '-' koyuyoruz
void setEmpty(int position) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	file.seekg(position);
	file << "-";
}

//Yeni konuma taþý yazýyor
void setMan(char ch,char colum2,int row2) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	//Beyazlar için taþýn son pozisyonuna taþý koyuyoruz
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
	//Siyahlar için taþýn son pozisyonuna taþý koyuyoruz
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

//eðer bir taþ yemiþse onun yerine '-' koyuyoruz
void setDestroyedMan(char colum1, char colum2, int row1, int row2) {
	fstream file;	file.open("checker.txt", ios::out | ios::in);    //ayný satýrda farklý sütuna oynayacak ise
	if (row1 == row2)
	{
		//büyük olan sütünu bulmak için
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
		//üzerinden geçtiði her kareyi kontrol ediyoruz
		for (char i = small + 1; i < big; i++) {
			file.seekg(positionSeek(i, row1));			char destroyed_man;			file >> destroyed_man;
			//eðer bir taþ yemiþse onun yerine '-' koyuyoruz
			if (destroyed_man == 'w' || destroyed_man == 'W' || destroyed_man == 'b' || destroyed_man == 'B')
			{
				file.seekg(positionSeek(i, row1));
				file << "-";
			}
		}
	}	//ayný sütun farklý satýrda oynayacak ise
	if (colum1 == colum2)
	{
		//büyük olan satýrý bulmak için
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
		//üzerinden geçtiði her kareyi kontrol ediyoruz
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

//ilk taþý yedikten sonra baþka yiyecek taþ var mi diye bakýyor
bool isThereAnother(char ch, char colum2, int row2) {
	fstream file;
	file.open("checker.txt", ios::out | ios::in);
	char environment;
	if (ch=='w')
	{
		//ayný sütün, farklý satýr
		//geri yiyemez ve satýr 7,8 deyken altýndakini yiyemez
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
		//en sað 2 sütünda deðilse saða doðru yer
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
		//eðer en sol 2 sütunda deðilse sola doðru yer
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
		//ayný sütün, farklý satýr
		//geri yiyemez ve satýr 1,2 deyken altýndakini yiyemez
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
		//en sað 2 sütünda deðilse saða doðru yer
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
		//eðer en sol 2 sütunda deðilse sola doðru yer
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
		//row 2 ve7 arasýnda ise hemalt satýrlarý hem üst satýrlarý kontrol etmek lazým
		if (row2>2&row2<7)
		{
			//altýnda kalan kareleri geziyo(8 e doðru)
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
			//üstünde kalan kareleri geziyo(1 e doðru)
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
			//altýnda kalan kareleri geziyo(8 e doðru)
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
			//üstünde kalan kareleri geziyo(1 e doðru)
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
		//colum2 b ve c arasýnda ise hem sað sütun hem sol sütun kontrol etmek lazým
		if (colum2 > 'b' & colum2 < 'g')
		{
			//saðýnda kalan kareleri geziyo(8 e doðru)
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
			//solda kalan kareleri geziyo(1 e doðru)
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
			//saðýnda kalan kareleri geziyo(h ye doðru)
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
			//solunda kalan kareleri geziyo(1 e doðru)
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
		//row 2 ve7 arasýnda ise hemalt satýrlarý hem üst satýrlarý kontrol etmek lazým
		if (row2 > 2 & row2 < 7)
		{
			//altýnda kalan kareleri geziyo(8 e doðru)
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
			//üstünde kalan kareleri geziyo(1 e doðru)
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
			//altýnda kalan kareleri geziyo(8 e doðru)
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
			//üstünde kalan kareleri geziyo(1 e doðru)
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
		//colum2 b ve c arasýnda ise hem sað sütun hem sol sütun kontrol etmek lazým
		if (colum2 > 'b' & colum2 < 'g')
		{
			//saðýnda kalan kareleri geziyo(8 e doðru)
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
			//solda kalan kareleri geziyo(1 e doðru)
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
			//saðýnda kalan kareleri geziyo(h ye doðru)
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
			//solunda kalan kareleri geziyo(1 e doðru)
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
	//kullanýcýdan bir input alýp onu kontrol ediyor
	string move;
	do
	{
		std::cin >> move;
	} while (!inputControl(move));
	//kullanýcýdan alýnan stringi char ve integer olarak ayýrýyor
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
