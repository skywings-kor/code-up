//#include <windows.h>
//#include <stdio.h>
//
//void gotoxy(int x, int y)      // ��ǥ ������ gotoxy
//{
//    COORD Cur;
//    Cur.X = x;
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
//int main(void)
//{
//
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
//    puts("������������������������������"); // puts�Լ��� �ڵ����� �ٹٲ� ó���� �Ѵ�.
//    puts("������������������������������");
//    puts("�� ����  Mouse Macro����������");
//    puts("������������������������������");
//    puts("������F5 : ��ũ�� ��ȭ ���� ��");
//    puts("������F6 : ��ũ�� �߰���ȭ����");
//    puts("������F7 : ��ũ�� ������������");
//    puts("������F8 : ��ũ�� ���ۡ�������");
//    puts("���� F10 : �����ϱ�   ��������");
//    puts("���� F11 : �� ���� ���� ��");
//    puts("������������������������������");
//    puts("������������������������������");
//
//    while (1)
//    {
//
//        if (GetKeyState(VK_F10) < 0) // F10Ű ������
//        {
//            return 0; // ���α׷� ����
//        }
//
//        else if (GetKeyState(VK_F11) < 0) // F11Ű ������
//        {
//            gotoxy(0, 0);
//            puts("������������������������������");
//            puts("������F5 : ��ũ�� ��ȭ ���� ��");
//            puts("��  >>ó������ ��ȭ�� ���ۡ���");
//            puts("������F6 : ��ũ�� �߰���ȭ����");
//            puts("����>>��� �̾ ��ȭ    ����");
//            puts("������������������������������");
//            puts("���� ��ȭ �� ��ũ�� ���� �� ��");
//            puts("���� ��ũ�� ������ ������   ��");
//            puts("���� ��ũ�ΰ� ����˴ϴ�. ����");
//            puts("��  (���콺 ��ũ�θ� ����)  ��");
//            puts("��������Esc : ���ư��⡡������");
//            puts("������������������������������");
//
//            while (1)
//            {
//                if (GetKeyState(27) < 0) // EscŰ ������
//                {
//                    gotoxy(0, 0);
//                    puts("������������������������������");
//                    puts("������������������������������");
//                    puts("�� ����  Mouse Macro����������");
//                    puts("������������������������������");
//                    puts("������F5 : ��ũ�� ��ȭ ���� ��");
//                    puts("������F6 : ��ũ�� �߰���ȭ����");
//                    puts("������F7 : ��ũ�� ������������");
//                    puts("������F8 : ��ũ�� ���ۡ�������");
//                    puts("���� F10 : �����ϱ�   ��������");
//                    puts("���� F11 : �� ���� ���� ��");
//                    puts("������������������������������");
//                    puts("������������������������������");
//
//                    break; // while�� Ż��
//                }
//            }
//        }
//
//        else if (GetKeyState(VK_F5) < 0) // ó������ �ٽ� ��ũ�� ����
//        {
//            for (i = 0; i <= 50000; i++)
//            {
//                x[i] = -858993460; y[i] = -858993460; // �ʱ�ȭ ����
//                sub_x[i] = -858993460; sub_y[i] = -858993460;
//                // �̶� ��� ���� ����� �ػ󵵿� ���� ���콺 ��ǥ����
//                // �� �� �־ �����Ⱚ�� -858993460�� �̿��ߴ�.
//                // ��õ�ϴ� ����� �ƴϴ�.
//            }
//            i = 0;
//
//            while (1)
//            {
//                GetCursorPos(&pt); // ���콺 ��ǥ���� �޾ƿ�
//                x[i] = pt.x; // x��ǥ�� ����
//                y[i] = pt.y; // y��ǥ�� ����
//                sub_x[i] = 0, sub_y[i] = 0; // ���ʹ�ư ������ ���� ��� �����ϴ� ��
//                i++; // i�� �������� �ǹ�
//                Sleep(10); //  0.01�� ���� 1������ ����
//
//                if (GetKeyState(VK_LBUTTON) < 0 && check_mouse >= 1)  // ���ʹ�ư ������ ��
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
//                else if (GetKeyState(VK_LBUTTON) >= 0 && check_mouse == 0) // ���ʹ�ư �� ��
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
//        else if (GetKeyState(VK_F6) < 0) // �̾ ��ũ�� ����
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
//                if (GetKeyState(VK_LBUTTON) < 0 && check_mouse >= 1)  // ���ʹ�ư ������ ��
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
//                else if (GetKeyState(VK_LBUTTON) >= 0 && check_mouse == 0) // ���ʹ�ư �� ��
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
//        else if (GetKeyState(VK_F8) < 0) // ��ũ�� ���
//        {
//            n = 0; // ������ ó������ ���ư��� ����ϱ� ���� n
//
//            while (1)
//            {
//                if (x[n] == 5000) // ���ʹ�ư �������� ���� 5000�̶�� ����
//                {
//                    mouse_event(MOUSEEVENTF_LEFTDOWN, sub_x[n], sub_y[n], 0, 0); // ��ǥ�� �°� ���ʹ�ư ������
//                    Sleep(1);
//                }
//                else if (x[n] == 6000) // ���ʹ�ư ������ ���� 6000�̶�� ����
//                {
//                    mouse_event(MOUSEEVENTF_LEFTUP, sub_x[n], sub_y[n], 0, 0);  // ��ǥ�� �°� ���ʹ�ư ����
//                    Sleep(1);
//                }
//
//
//                if (x[n] == -858993460) // �����Ⱚ ������ ó���Ǵ� �۵�
//                {
//                    n = 0; // ��, ��ũ���� ���κ����� ���� �ٽ� n = 0 ���� �Ͽ� �ٽ� ó������ ����
//                }
//
//                SetCursorPos(x[n], y[n]); // ������ ���� ��ǥ�� ���콺 �̵�
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