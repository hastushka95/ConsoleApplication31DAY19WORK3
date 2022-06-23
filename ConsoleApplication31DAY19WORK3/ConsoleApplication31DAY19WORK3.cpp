// ConsoleApplication31DAY19WORK3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include <windows.h>
#include< time.h>

int main()
{
    int level, num1, num2, a, b;
    int choice, userlives,usernumb, compnumb,userpoints, guess;
    userpoints = 0;
    guess = 0;
    srand(time(NULL));
    do {
        cout << "choice level\n";
        cout << " 1-level 1\n";
        cout << " 2-level 2\n";
        cout << "3-quit\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "level 1";
            a = 1;
            b = 10;
            userlives = (b - a + 1) / 2;
            cout << "computer:\n";
            Sleep(1000);
            compnumb = a + rand() % (b - a);
            cout << "computer number\n";
            do {
                cout << userlives << "\n";
                cin >> usernumb;
                if (usernumb == compnumb) {
                    cout << "u right\n";
                    guess = 1;
               }
                else {
                    cout << "u looser\n";
                    userlives--;
                    cout << userlives << "\n";
                    do {
                        cout << "your choice :\n ";
                        cout << "1-yes\n";
                        cout << "2-no\n";
                        cin >> choice;
                        if (choice == 1) {
                            if (usernumb > compnumb) {
                                cout << " less please\n";
                                userlives--;
                            }
                        }
                    } while ((choice != 1) && (choice != 0));
                }
                
            } while ((userlives > 0) && (guess == 0));
            userpoints = userlives * 5;
            if (userpoints == 0) {
                cout << "u loose\n";
            }
            else {
                cout << "score\n" << userpoints;
                cout << "\n";

            }
            break;
            
        }
        case 2: {
            cout << " second level \n";
            a = 10;
            b = 100;
            userlives = (b - a + 1) / 4;
            cout << "computer \n";
            Sleep(1000);
            compnumb = a + rand() % (b - a);
            cout << "prepare...\n";
            do {
                cout << userlives << "\n";
                cout << "put number\n";
                cin >> usernumb;
                if (usernumb == compnumb) {
                    cout << "right!\n";
                    guess = 1;
                }
                else {
                    cout << "lost\n";
                    userlives--;
                    cout<< "\n";
                    cout << userlives << "\n";
                    do {
                        cout << "choice again\n";
                        cout << "1-yes\n";
                        cout << "0-no\n";
                        cin >> choice;
                        if (choice == 1) {
                            if (usernumb > compnumb) {
                                cout << "less please\n";
                                userlives--;
                            }
                            else {
                                cout << "more please\n";

                                userlives--;
                            }
                        }
                    } while ((choice != 1) && (choice != 0));
                }
            } while ((userlives > 0) && (guess == 0));
            userpoints == userlives * 10;
            if (userpoints == 0) {
                cout << "u looser\n";
            }
            else {
                cout << "score\n" << userpoints;
                cout << "\n";
            }
            break;
        }
        case 3: {
            cout << "bye\n";
            break;
        }
        default:
            cout << "wrong\n";
        }

    }while (choice != 3);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
