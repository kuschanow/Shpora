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


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//19" << endl;


    //19
    int A[10];
    cout << "A = " << A << endl;
    cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " <<A[4] << " " <<A[5] << " " << A[6] << " " << A[7] << " " << A[8] << " " << A[9] << endl;
    //19


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//20" << endl;


    //20
    for (int l = 0; l < 10; l++) {
        A[l] = l;
    }
    for (int l = 0; l < 10; l++) {
        cout << A[l] << " ";
    }
    cout << endl;
    //20


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//21" << endl;


    //21
    int &ref = a;
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    a++;
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    //21


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//22" << endl;


    //22
    int *ptr = &a;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    //22


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//23" << endl;


    //23
    cout << "&a = " << &a << endl;
    cout << "*&a = " << *&a << endl;
    //23


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//24" << endl;


    //24
    cout << "A = " << A << endl;
    cout << "*A = " << *A << endl;
    cout << "A + 1 = " << A + 1 << endl;
    cout << "*(A + 1) = " << *(A + 1) << endl;
    //24


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//25" << endl;


    //25
    int const m = 6;
    cout << "m = " << m << endl;
    float const pi = 3.14;
    cout << "m + pi = " << m + pi << endl;
    //25


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//26" << endl;


    //26
    int B[m];
    B[0] = 2;
    cout << B[0] << " ";
    for (int l = 1; l < m; l++) {
        B[l] = B[l - 1] * 2;
        cout << B[l] << " ";
    }
    cout << endl;
    //26


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//27" << endl;


    //27
    int *C = new int[i];
    for (int l = 0; l < i; l++) {
        cout << "Введите " << l + 1 << "-ое число" << endl;
        cin >> C[l];
    }
    for (int l = 0; l < i; l++) {
        cout << C[l] << " ";
    }
    cout << endl;
    //27


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); getline(cin, enter); cout << "//28" << endl;


    //28
    int D[5][5];
    cout << "D = " << D << endl;
    cout << "D + 1 = " << D + 1 << endl;
    cout << "*D = " << *D << endl;
    cout << "*D + 1 = " << *D + 1 << endl;
    cout << "**D = " << **D << endl;
    //28


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//29" << endl;


    //29
    for (int l = 0; l < 5; l++) {
        for (int n = 0; n < 5; n++) {
            D[l][n] = (l + 1)*(n + 1);
        }
    }
    for (int l = 0; l < 5; l++) {
        for (int n = 0; n < 5; n++) {
           cout << D[l][n] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //29


    cout << "Для продолжения нажмите Enter"; getline(cin, enter); cout << "//30" << endl;


    //30
    int **E = new int *[i];
    for (int l = 0; l < i; l++){
        E[l] = new int [i];
    }

    for (int l = 0; l < i; l++) {
        for (int n = 0; n < i; n++) {
            cout << E[l][n] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //30

}
