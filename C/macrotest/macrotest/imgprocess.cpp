//#include <Windows.h>
//#include <stdio.h>
//#include <iostream>
//
//int main(void)
//{
//    if(//해당 좌표가 클릭되면 이어서 실행되게 하는것!)
//    ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe", L"C:\\", SW_SHOW);
//
//    ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
//}
//
#include <Windows.h>
#include <stdio.h>
#include <iostream>
INPUT_RECORD rec;

void gotoxy(int x, int y)
{
    COORD pos = { x, y };   
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void main()
{
    POINT a;
    HWND hWnd;
    int width = 0;
    RECT window_size;

    a.x = 0;
    a.y = 0;


    while (1)
    {
        int firstx, endx;
        firstx = 1750;
        endx = 1860;
        int firsty, endy;
        firsty = 743;
        endy = 848;
        GetCursorPos(&a);
        hWnd = WindowFromPoint(a);
        ScreenToClient(hWnd, &a);
        GetWindowRect(hWnd, &window_size);
        width = (window_size.right - window_size.left);

        if ((0 < a.x) && (a.x < (int)(width / 2)))
        {
            gotoxy(1, 30);
            printf("X point = %d, Y point = %d\n\r", a.x, a.y);
        }

        else if (((int)(width / 2) < a.x) && (a.x < (int)width))
        {
            gotoxy(1, 30);
            printf("Y point = %d, X point = %d\n\r", a.y, a.x);
        }

        if (((firstx < a.x) && (a.x < endx)) && ((firsty < a.y) && (a.y < endy)))
        {
            if (rec.Event.MouseEvent.dwButtonState & RIGHTMOST_BUTTON_PRESSED)
            {
                printf("성공!");
                break;
            }

            else
            {

            }
        }
    }

    Sleep(500);
}




