//
//#include <windows.h>
//#include <stdio.h>
//
//void gotoxy(int x, int y)      // ��ǥ ������ gotoxy
//{
//    COORD Cur;
//    Cur.X=  x;
//    Cur.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
//}
//void cursor(int n) // Ŀ�� ���̱� & �����
//{
//    HANDLE hConsole;
//    CONSOLE_CURSOR_INFO ConsoleCursor;
//
//    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    ConsoleCursor.bVisible = n;
//    ConsoleCursor.dwSize = 1;
//
//    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
//}
//
//int main(void)
//{
//    POINT pt; // ���콺 ������
//    int x[50000]; // ��ũ�� x��ǥ
//    int y[50000]; // ��ũ�� y��ǥ
//    int sub_x[50000], sub_y[50000]; // ���� xy
//    int check_mouse = 2; // ���콺 ���� ����
//    int i = 0; // ��ũ�� ��ȭ�� �̿�
//    int n = 0; // ��ũ�� ����� �̿�
//
//
//    system("mode con: cols=31 lines=13"); // ȭ�� ����
//    cursor(0); // Ŀ�� �����
//
//    gotoxy(0, 0);
//    for(int i=0; ;i++)
//    {
//        SetCursorPos(1070, 146);
//        mouse_event(MOUSEEVENTF_LEFTDOWN, 1070, 146, 0, 0);
//        Sleep(1);
//        mouse_event(MOUSEEVENTF_LEFTUP, 1071, 146, 0, 0);
//        
//        Sleep(4500);
//        
//        SetCursorPos(1462, 407);
//        mouse_event(MOUSEEVENTF_LEFTDOWN, 1462, 407, 0, 0);
//        Sleep(1);
//        mouse_event(MOUSEEVENTF_LEFTUP, 1463, 407, 0, 0);
//
//        Sleep(1500);
//
//
//        SetCursorPos(1205, 401);
//        mouse_event(MOUSEEVENTF_LEFTDOWN, 1205, 401, 0, 0);
//        Sleep(1);
//        mouse_event(MOUSEEVENTF_LEFTUP, 1206, 401, 0, 0);
//
//        break;
//    }
//
//
//
//}