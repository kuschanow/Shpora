#include <iostream> //подключаем стандартную библиотеку, отвечающую за управление консолью, ввод, вывод, и тп.
#include <string> //это мы позже разберем
#include <windows.h> // и это

using namespace std; //подключаем пространство имен (не стоит пока углубляться в детали, делаем вид, что ничего кроме упрощения написания кода оно не делает)

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string enter;

    cout << "//1" << endl;


    //1
    int a;
    cout << a << endl;
    a = 1;
    cout << a << endl;
    //1


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//2" << endl;


    //2
    int b = 1;
    cout << b << endl;
    //2


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//3" << endl;


    //3
    int c = a + b;
    cout << c << endl;
    //3


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//4" << endl;


    //4
    c = c + 1;
    cout << c << endl;
    c += 1;
    cout << c << endl;
    c++;
    cout << c << endl;
    //4


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//5" << endl;


    //5
    int d = c / 2;
    cout << d << endl;
    //5


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//6" << endl;


    //6
    c++;
    cout << c << endl;
    d = c / 2;
    cout << d << endl;
    //6


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//7" << endl;


    //7
    float e = c / 2;
    cout << e << endl;
    e /= 2;
    cout << e << endl;
    //7


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//8" << endl;


    //8
    float f = 3;
    cout << f << endl;
    f = 3.5;
    cout << f << endl;
    f = 1.;
    cout << f << endl;
    //8


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//9" << endl;


    //9
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    //9


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//10" << endl;


    //10
    int g;
    cout << "Введи число, а после нажми Enter:";

    cin >> g;
    cout << "g = " << g << endl;
    //10


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); getline(cin, enter); cout << "//11" << endl;


    //11
    bool h = true;
    cout << "h = " << h << endl;
    h = 1 == 1;
    cout << "h = " << h << endl;
    h = 1 == 2;
    cout << "h = " << h << endl;
    h = h == false;
    cout << "h = " << h << endl;
    h = !h;
    cout << "h = " << h << endl;
    //11

}
