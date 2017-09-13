#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include "main.h"

using namespace ::std;

	enum Character {SerGiuS, Dima, Vova};
	Character SelectedCharacter;

	int z, v;


	//Убирает курсор
	void Blinking(int off)
	 {
		 void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
		 CONSOLE_CURSOR_INFO structCursorInfo;
		 GetConsoleCursorInfo(handle, &structCursorInfo);
		 structCursorInfo.bVisible = FALSE;
		 SetConsoleCursorInfo(handle, &structCursorInfo);
	 }
	//Позиционирование
	void gotoxy(int xpos, int ypos)
	 {
		 COORD scrn;

		 HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

		 scrn.X = xpos - 1; scrn.Y = ypos - 1;

		 SetConsoleCursorPosition(hOuput, scrn);
	 }
	//Просто настройка и включение русского в консоли
	void podgotovka() {
		 system("mode con cols=101 lines=30");
		 setlocale(LC_ALL, "Russian");
		 Blinking();
		 v = 1;
	 }
	//Загрузка сохранений(В разработке)
	void LoadSave()
	 {
		int ProverkaSave[3];
		 freopen("Save1.txt", "r", stdin);
		 cin << ProverkaSave[1];
		 freopen("Save2.txt", "r", stdin);
		 cin << ProverkaSave[2];
		 freopen("Save2.txt", "r", stdin);
		 cin << ProverkaSave[3];
		 switch (v) {
		 case 1: {

		 }
		 case 2: {

		 }
		 case 3: {

		 }
		}
	 }
	
	// Выбор сохранения сохранения
	void SelectLoad(){

		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(41,7);
		cout << "Выберите сохранение";
		gotoxy(38,9);
		cout << "на которое записывать игру:";
		gotoxy(44,13);
		cout << "1 Cохранение";
		gotoxy(44,15);
		cout << "2 Cохранение";
		gotoxy(44,17);
		cout << "3 Cохранение";
		// Просто бесконечный цикл
		while (z != 111) {

			// Подсветка выбора
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "2 Cохранение";
				gotoxy(44, 17);
				cout << "3 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 13);
				cout << "1 Cохранение";
			}
			else
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 Cохранение";
				gotoxy(44, 17);
				cout << "3 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "2 Cохранение";
			}
			else
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 Cохранение";
				gotoxy(44, 15);
				cout << "2 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 17);
				cout << "3 Cохранение";
			}

			// Это обработчик нажатий
			if (_kbhit()) {
				switch (_getch()) {
				case 'w': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 's': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 'W': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 'S': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 230: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 235: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 150: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 155: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 72: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 80: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 13: {
					if (v == 1)
						v=1;
					else
					if (v == 2)
						v=2;
					else
					if (v == 3)
						v=3;
					break;
				}
				case 8: {
				system("cls");
					Start();
					break;
				}
				case 27: {
				system("cls");
					Start();
					break;
				}
				}
			}
		}		

	}
	// Старт
	void Start() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(41, 7);
		cout << "Выберите персонажа:";
		gotoxy(47, 13);
		cout << " ДИМА ";
		gotoxy(47, 15);
		cout << "СЕРГЕЙ";
		gotoxy(47, 17);
		cout << " ВОВА";
		//Просто бесконечный цикл
		while (z != 111) {
		
			// Подсветка выбора
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

				gotoxy(47, 15);
				cout << "СЕРГЕЙ";
				gotoxy(47, 17);
				cout << " ВОВА";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(47, 13);
				cout << " ДИМА ";
			}
			else
			if (v == 2) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					gotoxy(47, 13);
					cout << " ДИМА ";
	
					gotoxy(47, 17);
					cout << " ВОВА";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					gotoxy(47, 15);
					cout << "СЕРГЕЙ";
				}
			else
			if (v == 3) {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						gotoxy(47, 13);
						cout << " ДИМА ";
						gotoxy(47, 15);
						cout << "СЕРГЕЙ";
	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
						gotoxy(47, 17);
						cout << " ВОВА";
					}

			// Это обработчик нажатий
			if (_kbhit()) {
				switch (_getch()) {
				case 'w': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 's': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 'W': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 'S': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 230: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 235: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 150: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 155: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 72: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 80: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 13: {
				if (v == 1) {
					SelectedCharacter = Dima;
					SelectLoad();
				}
				else
				if (v == 2) {
					SelectedCharacter = SerGiuS;
					SelectLoad();
				}
				else
				if (v == 3) {
					SelectedCharacter = Vova;
					SelectLoad();
				}
				break;
				}
				case 8: {
				system("cls");
				Menu();
				break;
				}
				case 27: {
				system("cls");
					Menu();
					break;
				}
				}


		}

		}
	}
	// Загрузить сохранение
	void Load() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(44,13);
		cout << "1 Cохранение";
		gotoxy(44,15);
		cout << "2 Cохранение";
		gotoxy(44,17);
		cout << "3 Cохранение";
		// Просто бесконечный цикл
		while (z != 111) {

			// Подсветка выбора
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "2 Cохранение";
				gotoxy(44, 17);
				cout << "3 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 13);
				cout << "1 Cохранение";
			}
			else
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 Cохранение";
				gotoxy(44, 17);
				cout << "3 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "2 Cохранение";
			}
			else
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 Cохранение";
				gotoxy(44, 15);
				cout << "2 Cохранение";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 17);
				cout << "3 Cохранение";
			}

			// Это обработчик нажатий
			if (_kbhit()) {
				switch (_getch()) {
				case 'w': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 's': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 'W': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 'S': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 230: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 235: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 150: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 155: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 72: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 80: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 13: {
					if (v == 1)
						LoadSave();
					else
					if (v == 2)
						LoadSave();
					else
					if (v == 3)
						LoadSave();
					break;
				}
				case 8: {

				system("cls");
					Menu();
					break;
				}
				case 27: {
				system("cls");
					Menu();
					break;
				}
				}
			}
		}
	 }
	// Выход из игрылол
	void Quit() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(36, 7);
		cout << "Вы действительно хотите выйти?";
		gotoxy(36, 14);
		cout << "              ДА";
		gotoxy(36, 16);
		cout << "             НЕТ";
		// Просто бесконечный цикл
		while (z != 111) {

			// Подсветка выбора
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(36, 16);
				cout << "             НЕТ    ";

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(36, 14);
				cout << "              ДА    ";
			}
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(36, 14);
				cout << "              ДА    ";

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(36, 16);
				cout << "             НЕТ    ";
			}

			// Это обработчик нажатий
			if (_kbhit()) {
				switch (_getch()) {
				case 'w': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 's': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;

					break;
				}
				case 'W': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 'S': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 230: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 235: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;

					break;
				}
				case 150: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 155: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 72: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 80: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 1;
					break;
				}
				case 13: {
					if (v == 1)
						z = 111;
					else
						if (v == 2)
							system("cls");
					Menu();

					break;
				}
				}
			}

		}

	 }
	// Меню
	void Menu() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		gotoxy(46, 13);
		cout << "  СТАРТ  ";
		gotoxy(46, 15);
		cout << "ПРОДОЛЖИТЬ";
		gotoxy(46, 17);
		cout << "  ВЫХОД  ";
		// Просто бесконечный цикл
		while (z != 111) {

			// Подсветка выбора
			if (v == 1) {

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "  ПРОДОЛЖИТЬ  ";
				gotoxy(46, 17);
				cout << "  ВЫХОД  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(46, 13);
				cout << "  СТАРТ  ";
			}
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(46, 13);
				cout << "  СТАРТ  ";
				gotoxy(44, 15);
				cout << "  ПРОДОЛЖИТЬ  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(46, 17);
				cout << "  ВЫХОД  ";
			}
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(46, 13);
				cout << "  СТАРТ  ";
				gotoxy(46, 17);
				cout << "  ВЫХОД  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "  ПРОДОЛЖИТЬ  ";
			}

			// Это обработчик нажатий
			if (_kbhit()) {

				switch (_getch()) {
				case 'w': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 's': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 'W': {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 'S': {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 230: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 235: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 150: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 155: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 72: {
					if (v == 1)
						v = 3;
					else
						if (v == 2)
							v = 1;
						else
							if (v == 3)
								v = 2;
					break;
				}
				case 80: {
					if (v == 1)
						v = 2;
					else
						if (v == 2)
							v = 3;
						else
							if (v == 3)
								v = 1;
					break;
				}
				case 13: {
					if (v == 1)
						Start();
					else
						if (v == 2)
							Load();
						else
							if (v == 3)
								Quit();
					break;
				}
				}
			}



		}
	}