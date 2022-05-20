#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

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
    cout << "Введи число, а после нажми Enter:" << endl;

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


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//12" << endl;


    //12
    if(true){
        cout << "Это условие правдиво" << endl;
    }
    //12


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//13" << endl;


    //13
    cout << "h = " << h << endl;
    if(h){
        cout << "Это условие правдиво" << endl;
    }
    else{
        cout << "Это условие ложно" << endl;
    }
    //13


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//14" << endl;


    //14
    int i;
    cout << "Введи число, а после нажми Enter:" << endl;
    cin >> i;
    if(i < 5){
        cout << "i < 5" << endl;
    }
    else if(i > 5){
        cout << "i > 5" << endl;
    }
    else{
        cout << "i = 5" << endl;
    }
    //14


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); getline(cin, enter); cout << "//15" << endl;


    //15
    int j = 0;
    while(j != 5){
        cout << "Введи число, а после нажми Enter:" << endl;
        cin >> j;
    }
    //15


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); getline(cin, enter); cout << "//16" << endl;


    //16
    int k = 0;
    while(k < 5){
        cout << "k = " << k << endl;
        k++;
    }
    //16


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//17" << endl;


    //17
    for (int l = 0; l < 5; l++) {
        cout << "l = " << l << endl;
    }
    //17


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//18" << endl;


    //18
    k = 0;
    do {
        cout << "k = " << k << endl;
        k++;
    } while (k < 5);
    cout << endl;
    do {
        cout << "k = " << k << endl;
        k++;
    } while (k < 5);
    //18
}
