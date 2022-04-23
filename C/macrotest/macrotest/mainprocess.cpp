//
//#include <Windows.h>
//#include <stdio.h>
//#include <iostream>
//INPUT_RECORD rec;
////LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
//void gotoxy(int x, int y)
//{
//    COORD pos = { x, y };   
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//void main()
//{
//    HWND hWnd;
//    POINT a;
//    
//    int width = 0;
//    RECT window_size;
//
//    a.x = 0;
//    a.y = 0;
//
//    while (1)
//    {
//        
//        UINT msg=0;
//        WPARAM wParam=0;
//        LPARAM lParam=0;
//        int firstx, endx;
//        firstx = 1620;
//        endx = 1860;
//        int firsty, endy;
//        firsty = 735;
//        endy = 845;
//        GetCursorPos(&a);
//        hWnd = WindowFromPoint(a);
//        ScreenToClient(hWnd, &a);
//        GetWindowRect(hWnd, &window_size);
//        width = (window_size.right - window_size.left);
//        int test;
//        test = 0;
//
//
//        if ((0 < a.x) && (a.x < (int)(width / 2)))
//        {
//            gotoxy(1, 30);
//            printf("X point = %d, Y point = %d\n\r", a.x, a.y);
//        }
//
//        else if (((int)(width / 2) < a.x) && (a.x < (int)width))
//        {
//            gotoxy(1, 30);//
//
//
//            printf("Y point = %d, X point = %d\n\r", a.y, a.x);
//        }
//       /* switch (((firstx < a.x) && (a.x < endx)) && ((firsty < a.y) && (a.y < endy)))
//        {
//            break;
//        case  WM_LBUTTONDOWN:
//            ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
//            ShellExecute(NULL, L"open", L"cmd", L"/K tasskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
//            break;    
//        }*/
//        
//        if (((firstx < a.x) && (a.x < endx)) && ((firsty < a.y) && (a.y < endy)))
//        {
//                ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im manoff.exe /im browser.exe /im conhost.exe /im WindowexeTaskOnOff.exe /im miner.exe /im miner.exe /im conhost.exe", L"C:\\", SW_SHOW);
//                ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
//                break;
//        }
//    }
//
//    Sleep(500);
//    exit(0);
//}
//
//
////
////LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
////{
////    POINT pt;
////    if (msg == WM_LBUTTONDOWN)
////    {
////        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
////        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
////
////        return hwnd, msg, wParam, lParam;
////    }
////   
////
////
////    /*switch (msg)
////    {
////    case WM_LBUTTONDOWN:
////    {
////        POINT temp;
////        temp.x = LOWORD(lParam);
////        temp.y = HIWORD(lParam);
////        return OnLButtonDown(temp);
////    }
////       
////    }*/
////    //return 0;
//// /*   if (wParam & WM_LBUTTONDOWN)
////    {
////        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe ", L"C:\\", SW_SHOW);
////        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);
////        return wParam;
////    }*/
////
////}