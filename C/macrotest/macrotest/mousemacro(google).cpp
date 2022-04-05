//#include <windows.h>
//#include <stdio.h>
//
//void gotoxy(int x, int y)      // 좌표 보내기 gotoxy
//{
//    COORD Cur;
//    Cur.X = x;
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
//int main(void)
//{
//
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
//    puts("┏━━━━━━━━━━━━━┓"); // puts함수는 자동으로 줄바꿈 처리를 한다.
//    puts("┃　　　　　　　　　　　　　┃");
//    puts("┃ 　　  Mouse Macro　　　　┃");
//    puts("┃　　　　　　　　　　　　　┃");
//    puts("┃　　F5 : 매크로 녹화 　　 ┃");
//    puts("┃　　F6 : 매크로 추가녹화　┃");
//    puts("┃　　F7 : 매크로 정지　　　┃");
//    puts("┃　　F8 : 매크로 시작　　　┃");
//    puts("┃　 F10 : 종료하기   　　　┃");
//    puts("┃　 F11 : 상세 도움말 　　 ┃");
//    puts("┃　　　　　　　　　　　　　┃");
//    puts("┗━━━━━━━━━━━━━┛");
//
//    while (1)
//    {
//
//        if (GetKeyState(VK_F10) < 0) // F10키 누르면
//        {
//            return 0; // 프로그램 종료
//        }
//
//        else if (GetKeyState(VK_F11) < 0) // F11키 누르면
//        {
//            gotoxy(0, 0);
//            puts("┏━━━━━━━━━━━━━┓");
//            puts("┃　　F5 : 매크로 녹화 　　 ┃");
//            puts("┃  >>처음부터 녹화를 시작　┃");
//            puts("┃　　F6 : 매크로 추가녹화　┃");
//            puts("┃　>>계속 이어서 녹화    　┃");
//            puts("┃　　　　　　　　　　　　　┃");
//            puts("┃　 녹화 뒤 매크로 정지 후 ┃");
//            puts("┃　 매크로 시작을 누르면   ┃");
//            puts("┃　 매크로가 진행됩니다. 　┃");
//            puts("┃  (마우스 매크로만 가능)  ┃");
//            puts("┃　　　Esc : 돌아가기　　　┃");
//            puts("┗━━━━━━━━━━━━━┛");
//
//            while (1)
//            {
//                if (GetKeyState(27) < 0) // Esc키 누르면
//                {
//                    gotoxy(0, 0);
//                    puts("┏━━━━━━━━━━━━━┓");
//                    puts("┃　　　　　　　　　　　　　┃");
//                    puts("┃ 　　  Mouse Macro　　　　┃");
//                    puts("┃　　　　　　　　　　　　　┃");
//                    puts("┃　　F5 : 매크로 녹화 　　 ┃");
//                    puts("┃　　F6 : 매크로 추가녹화　┃");
//                    puts("┃　　F7 : 매크로 정지　　　┃");
//                    puts("┃　　F8 : 매크로 시작　　　┃");
//                    puts("┃　 F10 : 종료하기   　　　┃");
//                    puts("┃　 F11 : 상세 도움말 　　 ┃");
//                    puts("┃　　　　　　　　　　　　　┃");
//                    puts("┗━━━━━━━━━━━━━┛");
//
//                    break; // while문 탈출
//                }
//            }
//        }
//
//        else if (GetKeyState(VK_F5) < 0) // 처음부터 다시 매크로 설정
//        {
//            for (i = 0; i <= 50000; i++)
//            {
//                x[i] = -858993460; y[i] = -858993460; // 초기화 과정
//                sub_x[i] = -858993460; sub_y[i] = -858993460;
//                // 이때 모든 값은 모니터 해상도에 따라 마우스 좌표값이
//                // 될 수 있어서 쓰레기값인 -858993460을 이용했다.
//                // 추천하는 방법은 아니다.
//            }
//            i = 0;
//
//            while (1)
//            {
//                GetCursorPos(&pt); // 마우스 좌표값들 받아옴
//                x[i] = pt.x; // x좌표값 저장
//                y[i] = pt.y; // y좌표값 저장
//                sub_x[i] = 0, sub_y[i] = 0; // 왼쪽버튼 누르고 떼는 모습 저장하는 곳
//                i++; // i는 프레임을 의미
//                Sleep(10); //  0.01초 마다 1프레임 찍힘
//
//                if (GetKeyState(VK_LBUTTON) < 0 && check_mouse >= 1)  // 왼쪽버튼 눌렀을 때
//                {
//
//                    sub_x[i] = x[i - 1];
//                    sub_y[i] = y[i - 1];
//                    x[i] = 5000;
//                    y[i] = 5000;
//
//                    check_mouse = 0;
//
//                    i++;
//                }
//                else if (GetKeyState(VK_LBUTTON) >= 0 && check_mouse == 0) // 왼쪽버튼 뗄 때
//                {
//
//                    sub_x[i] = x[i - 1];
//                    sub_y[i] = y[i - 1];
//                    x[i] = 6000;
//                    y[i] = 6000;
//
//                    check_mouse = 1;
//
//                    i++;
//                }
//
//
//
//                if (GetKeyState(VK_F7) < 0)
//                {
//                    break;
//                }
//
//                if (GetKeyState(VK_F10) < 0)
//                {
//                    return 0;
//                }
//
//            }
//
//
//        }
//
//        else if (GetKeyState(VK_F6) < 0) // 이어서 매크로 설정
//        {
//
//            while (1)
//            {
//                GetCursorPos(&pt);
//                x[i] = pt.x;
//                y[i] = pt.y;
//                sub_x[i] = 0, sub_y[i] = 0;
//
//                i++;
//                Sleep(10);
//
//                if (GetKeyState(VK_LBUTTON) < 0 && check_mouse >= 1)  // 왼쪽버튼 눌렀을 때
//                {
//
//                    sub_x[i] = x[i - 1];
//                    sub_y[i] = y[i - 1];
//
//                    x[i] = 5000;
//                    y[i] = 5000;
//                    check_mouse = 0;
//
//                    i++;
//                }
//                else if (GetKeyState(VK_LBUTTON) >= 0 && check_mouse == 0) // 왼쪽버튼 뗄 때
//                {
//                    sub_x[i] = x[i - 1];
//                    sub_y[i] = y[i - 1];
//                    x[i] = 6000;
//                    y[i] = 6000;
//                    check_mouse = 1;
//
//                    i++;
//                }
//
//
//                if (GetKeyState(VK_F7) < 0)
//                {
//                    break;
//                }
//
//                if (GetKeyState(VK_F10) < 0)
//                {
//                    return 0;
//                }
//            }
//        }
//        else if (GetKeyState(VK_F8) < 0) // 매크로 재생
//        {
//            n = 0; // 프레임 처음으로 돌아가서 재생하기 위한 n
//
//            while (1)
//            {
//                if (x[n] == 5000) // 왼쪽버튼 눌러지는 것을 5000이라고 가정
//                {
//                    mouse_event(MOUSEEVENTF_LEFTDOWN, sub_x[n], sub_y[n], 0, 0); // 좌표에 맞게 왼쪽버튼 누르기
//                    Sleep(1);
//                }
//                else if (x[n] == 6000) // 왼쪽버튼 떼지는 것을 6000이라고 가정
//                {
//                    mouse_event(MOUSEEVENTF_LEFTUP, sub_x[n], sub_y[n], 0, 0);  // 좌표에 맞게 왼쪽버튼 떼기
//                    Sleep(1);
//                }
//
//
//                if (x[n] == -858993460) // 쓰레기값 만나면 처리되는 작동
//                {
//                    n = 0; // 즉, 매크로의 끝부분으로 가면 다시 n = 0 으로 하여 다시 처음부터 시작
//                }
//
//                SetCursorPos(x[n], y[n]); // 지정한 곳의 좌표로 마우스 이동
//                Sleep(10);
//
//                n++;
//
//                if (GetKeyState(VK_F7) < 0)
//                {
//                    break;
//                }
//                if (GetKeyState(VK_F10) < 0)
//                {
//                    return 0;
//                }
//
//            }
//
//
//        }
//
//
//        Sleep(10);
//
//    }
//    return 0;
//}