
#include <Windows.h>
#include <stdio.h>
#include <iostream>
INPUT_RECORD rec;
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
void gotoxy(int x, int y)
{
    COORD pos = { x, y };   
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void main()
{
    HWND hWnd;
    POINT a;
    
    int width = 0;
    RECT window_size;

    a.x = 0;
    a.y = 0;

    while (1)
    {
        

        int firstx, endx;
        firstx = 1620;
        endx = 1860;
        int firsty, endy;
        firsty = 735;
        endy = 845;
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


       /* switch (((firstx < a.x) && (a.x < endx)) && ((firsty < a.y) && (a.y < endy)))
        {
            break;
        case  WM_LBUTTONDOWN:
            ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
            ShellExecute(NULL, L"open", L"cmd", L"/K tasskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
            break;
        }*/
        
        if (((firstx < a.x) && (a.x < endx)) && ((firsty < a.y) && (a.y < endy)))
        {
            if (WPARAM)
            {

            }
           

            //if ((wparam&MK_LBUTTON))
            //{
            //    ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
            //    ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
            //    /*ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im notepad.exe", L"C:\\", SW_SHOW);*/
            //    break;
            //}

            //else
            //{
            //    
            //}
        }
    }

    Sleep(500);
    exit(0);
}




////
////
////
////
// 
//void ClickMouse(int parm_x, int parm_y, bool left_flag);
//int main()
//{
//    Sleep(1000);
//
//    POINT MousePos;
//
//    ::GetCursorPos(&MousePos);
//
//    // 0,0, 으로 이동 후 왼쪽 버튼을 클립합니다.
//    ClickMouse(0, 0, 1);
//
//    // 0,0, 기존 마우스 포인트로 복귀 하여 왼쪽을 클릭 합니다.
//    ClickMouse(MousePos.x, MousePos.y, 1);
//    return 0;
//}
//void ClickMouse(int parm_x, int parm_y, bool left_flag)
//{
//    int x_pos = parm_x * 65535 / GetSystemMetrics(SM_CXSCREEN);
//    int y_pos = parm_y * 65535 / GetSystemMetrics(SM_CYSCREEN);
//
//    ::mouse_event(MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE, x_pos, y_pos,
//        0, ::GetMessageExtraInfo());
//
//    if (left_flag) {
//        ::mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_ABSOLUTE,
//            x_pos, y_pos, 0, ::GetMessageExtraInfo());
//        ::mouse_event(MOUSEEVENTF_LEFTUP | MOUSEEVENTF_ABSOLUTE,
//            x_pos, y_pos, 0, ::GetMessageExtraInfo());
//    }
//    else
//    {
//        ::mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_ABSOLUTE,
//            x_pos, y_pos, 0, ::GetMessageExtraInfo());
//        ::mouse_event(MOUSEEVENTF_RIGHTUP | MOUSEEVENTF_ABSOLUTE,
//            x_pos, y_pos, 0, ::GetMessageExtraInfo());
//    }
//}
//
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    POINT pt;
    if (msg == WM_LBUTTONDOWN)
    {
        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);

        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
   


    /*switch (msg)
    {
    case WM_LBUTTONDOWN:
    {
        POINT temp;
        temp.x = LOWORD(lParam);
        temp.y = HIWORD(lParam);
        return OnLButtonDown(temp);
    }
       
    }*/
    //return 0;
 /*   if (wParam & WM_LBUTTONDOWN)
    {
        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
        return wParam;
    }*/

}