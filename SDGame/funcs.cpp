#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include "main.h"

using namespace ::std;

	enum Character {SerGiuS, Dima, Vova};
	Character SelectedCharacter;

	int z, v;


	//������� ������
	void Blinking(int off)
	 {
		 void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
		 CONSOLE_CURSOR_INFO structCursorInfo;
		 GetConsoleCursorInfo(handle, &structCursorInfo);
		 structCursorInfo.bVisible = FALSE;
		 SetConsoleCursorInfo(handle, &structCursorInfo);
	 }
	//����������������
	void gotoxy(int xpos, int ypos)
	 {
		 COORD scrn;

		 HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

		 scrn.X = xpos - 1; scrn.Y = ypos - 1;

		 SetConsoleCursorPosition(hOuput, scrn);
	 }
	//������ ��������� � ��������� �������� � �������
	void podgotovka() {
		 system("mode con cols=101 lines=30");
		 setlocale(LC_ALL, "Russian");
		 Blinking();
		 v = 1;
	 }
	//�������� ����������(� ����������)
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
	
	// ����� ���������� ����������
	void SelectLoad(){

		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(41,7);
		cout << "�������� ����������";
		gotoxy(38,9);
		cout << "�� ������� ���������� ����:";
		gotoxy(44,13);
		cout << "1 C���������";
		gotoxy(44,15);
		cout << "2 C���������";
		gotoxy(44,17);
		cout << "3 C���������";
		// ������ ����������� ����
		while (z != 111) {

			// ��������� ������
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "2 C���������";
				gotoxy(44, 17);
				cout << "3 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 13);
				cout << "1 C���������";
			}
			else
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 C���������";
				gotoxy(44, 17);
				cout << "3 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "2 C���������";
			}
			else
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 C���������";
				gotoxy(44, 15);
				cout << "2 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 17);
				cout << "3 C���������";
			}

			// ��� ���������� �������
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
	// �����
	void Start() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(41, 7);
		cout << "�������� ���������:";
		gotoxy(47, 13);
		cout << " ���� ";
		gotoxy(47, 15);
		cout << "������";
		gotoxy(47, 17);
		cout << " ����";
		//������ ����������� ����
		while (z != 111) {
		
			// ��������� ������
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

				gotoxy(47, 15);
				cout << "������";
				gotoxy(47, 17);
				cout << " ����";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(47, 13);
				cout << " ���� ";
			}
			else
			if (v == 2) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					gotoxy(47, 13);
					cout << " ���� ";
	
					gotoxy(47, 17);
					cout << " ����";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					gotoxy(47, 15);
					cout << "������";
				}
			else
			if (v == 3) {
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						gotoxy(47, 13);
						cout << " ���� ";
						gotoxy(47, 15);
						cout << "������";
	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
						gotoxy(47, 17);
						cout << " ����";
					}

			// ��� ���������� �������
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
	// ��������� ����������
	void Load() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(44,13);
		cout << "1 C���������";
		gotoxy(44,15);
		cout << "2 C���������";
		gotoxy(44,17);
		cout << "3 C���������";
		// ������ ����������� ����
		while (z != 111) {

			// ��������� ������
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "2 C���������";
				gotoxy(44, 17);
				cout << "3 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 13);
				cout << "1 C���������";
			}
			else
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 C���������";
				gotoxy(44, 17);
				cout << "3 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "2 C���������";
			}
			else
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 13);
				cout << "1 C���������";
				gotoxy(44, 15);
				cout << "2 C���������";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 17);
				cout << "3 C���������";
			}

			// ��� ���������� �������
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
	// ����� �� �������
	void Quit() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		system("cls");
		gotoxy(36, 7);
		cout << "�� ������������� ������ �����?";
		gotoxy(36, 14);
		cout << "              ��";
		gotoxy(36, 16);
		cout << "             ���";
		// ������ ����������� ����
		while (z != 111) {

			// ��������� ������
			if (v == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(36, 16);
				cout << "             ���    ";

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(36, 14);
				cout << "              ��    ";
			}
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(36, 14);
				cout << "              ��    ";

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(36, 16);
				cout << "             ���    ";
			}

			// ��� ���������� �������
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
	// ����
	void Menu() {
		v = 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		gotoxy(46, 13);
		cout << "  �����  ";
		gotoxy(46, 15);
		cout << "����������";
		gotoxy(46, 17);
		cout << "  �����  ";
		// ������ ����������� ����
		while (z != 111) {

			// ��������� ������
			if (v == 1) {

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(44, 15);
				cout << "  ����������  ";
				gotoxy(46, 17);
				cout << "  �����  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(46, 13);
				cout << "  �����  ";
			}
			if (v == 3) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(46, 13);
				cout << "  �����  ";
				gotoxy(44, 15);
				cout << "  ����������  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(46, 17);
				cout << "  �����  ";
			}
			if (v == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(46, 13);
				cout << "  �����  ";
				gotoxy(46, 17);
				cout << "  �����  ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				gotoxy(44, 15);
				cout << "  ����������  ";
			}

			// ��� ���������� �������
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