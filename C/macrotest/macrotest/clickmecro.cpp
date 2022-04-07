//
//#include <windows.h>
//#include <stdio.h>
//
//void gotoxy(int x, int y)      // 좌표 보내기 gotoxy
//{
//    COORD Cur;
//    Cur.X=  x;
//    Cur.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
//}
//void cursor(int n) // 커서 보이기 & 숨기기
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
//    POINT pt; // 마우스 포인터
//    int x[50000]; // 매크로 x좌표
//    int y[50000]; // 매크로 y좌표
//    int sub_x[50000], sub_y[50000]; // 보조 xy
//    int check_mouse = 2; // 마우스 관련 변수
//    int i = 0; // 매크로 녹화시 이용
//    int n = 0; // 메크로 진행시 이용
//
//
//    system("mode con: cols=31 lines=13"); // 화면 고정
//    cursor(0); // 커서 숨기기
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