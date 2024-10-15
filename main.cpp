#include <algorithm>
#include <iostream>
#include <string>
#include <map>


using namespace std;
int sumLastNums(int x) {

    return abs(x%10 + x / 10 % 10);
}

bool isPositive(int x) {
    if (x > 0) {return 1;}
    else {return 0;}}

bool isUpperCase(char x) {
    return isupper(x);}

bool isDivisor(int a, int b) {
    if ((a % b == 0) or (b % a == 0)){return 1;}
    else{return 0;}}

int lastNumSum(int a, int b) {
    return (a % 10 + b % 10);}

double safeDiv(int x, int y) {
    if (y == 0){return 0;}
    else {return (x / y);}
}

string makeDecision(int x, int y) {
    if (x == y){return to_string(x) + " = " + to_string(y);}
    else if (x > y){return to_string(x) + " > " + to_string(y);}
    else {return to_string(x) + " < " + to_string(y);}}

bool sum3(int x, int y, int z) {
    if ((x+y) == z){return true;}
    else if ((x+z) == y){return true;}
    else if ((y+z) == x){return true;}
    else {return false;}
}

string age(int x) {
    if ( x==11) {
        return to_string(x) + " лет";
    }
    else if(x==12) {
        return to_string(x) + " лет";
    }
    else if(x==13) {
        return to_string(x) + " лет";
    }
    else if(x==14) {
        return to_string(x) + " лет";
    }
    else if (x%10==1) {
        return to_string(x) + " год";
    }
    else if (x%10==2) {
        return to_string(x) + " года";
    }
    else if (x%10==3) {
        return to_string(x) + " года";
    }
    else if (x%10==4) {
        return to_string(x) + " года";
    }
    else {
            return to_string(x) + " лет";
    }
}

void printDays(string xs) {

    const string week[] = {"понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"};

    int ii = -1;

    for (int i = 0; i < 7; ++i) {
        switch (ii) {
            case -1:
                if (xs == week[i]) {
                    ii = i;
                }
            break;
            default:
                break;
        }
    }
    if (ii == -1) {
        cout << "Это не день недели" << endl;
    } else {
        for (int i = ii; i < 7; ++i) {
            cout << week[i] << endl;
        }}}


string reverseListNums (int x) {
    string s;
    s = "";
    for (int i = x; i > -1; --i) {

        s = s + to_string(i)+ " ";
    }
    return s;}

int pow (int x, int y) {
    int p;
    p = 1;
    for (int i = 0; i<y; ++i) {
        p = p * x;
    }
    return p;
}

bool equalNum (int x) {
    if (x<10){return true;}
    int x1;
    x1 = x%10;
    while (x > 10){
        if (x1 != x%10){return false;}
        x = x/10;
    }
    return true;
}

void leftTriangle(int x) {
    for (int i=1; i<(x+1);i++) {
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        cout << endl;


    }
}
void guessGame() {
    int x;
    int r;
    r = rand()%10;
    cout << "Угадайте число от 0 до 10: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    while (x != r) {
        cout << "Не правильно! Подумай лучше!" << endl;
        cout << "Угадайте число от 0 до 10: ";
        cin >> x;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Неверный ввод!!!" << endl;
            break;}
    }
    cout << "Получилось! Это число - " << r << endl;
}

int findLast (int arr[], int x) {
    int ii;
    ii = -1;
    for (int i = 0; i<7; i++) {
        if (arr[i] == x) {
            ii = i;
        }
    }
    return ii;
}

int * add(int arr[], int x, int pos) {
    int arradd[6] = {0,0,0,0,0,0};
    arradd[pos] = x;
    int ii;
    ii = 0;
    int iii;
    iii = 0;
    while (ii < 6) {
        if (arradd[ii] == 0) {
            arradd[ii] = arr[iii];
            iii++;
        }
        ii++;
    }

    for (int i=0; i<6; i++) {
        cout << arradd[i] << " ";
    }
    return 0;
}

void reverse (int arr[]) {
    int r;
    for (int i = 0; i<3; i++) {
        r = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = r;
    }
    for (int i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }
}

int * concat(int arr1[],int arr2[]) {
    int arr3[6];
    for (int i = 0; i<6; i++) {
        if (i<3) {
            arr3[i] = arr1[i];
        }
        else {
            arr3[i] = arr2[i-3];
        }
        cout << arr3[i] << " ";
    }
    return 0;
}

int * deleteNegative (int arr[]) {
    int n;
    n = 0;
    for (int i = 0; i<7; i++) {
        if (arr[i] < 0) {
            n++;
        }
    }
    int arrneg[7-n];
    int ii;
    ii = 0;
    for (int i = 0; i<7; i++) {
        if (arr[i] > 0) {
            arrneg[ii] = arr[i];
            ii++;
        }
    }
    for (int i = 0; i<7-n; i++) {
        cout << arrneg[i] << " ";
    }
    return 0;
}

int main() {
    system("chcp 65001");

    cout << "№2 Сумма знаков" << endl;
    cout << " Дана сигнатура функции: int sumLastNums (int x) Необходимо реализовать функцию таким образом, чтобы она возвращала результат сложения двух последних знаков числах, предполагая, что знаков в числе не менее двух." << endl;
    cout << "Введите число: ";
    int x;
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: "<< sumLastNums(x) << endl;

    cout << "№4 Есть ли позитив" << endl;
    cout << "Дана сигнатура функции: bool isPositive (intx). Необходимо реализовать функцию таким образом, чтобы она принимала число x и возвращала true, если оно положительное" << endl;
    cout << "Введите число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << boolalpha << isPositive(x)  << endl;

    cout << "№6 Большая буква" << endl;
    cout << "Дана сигнатура функции: bool isUpperCase (char x); Необходимо реализовать функцию таким образом, чтобы она принимала символ x и возвращала true, если это большая буква в диапазоне от ‘A’ до ‘Z’. " << endl;
    char xc;
    cin >> xc;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << boolalpha << isUpperCase(xc) << endl;

    cout << "№8 Делитель" << endl;
    cout << "Дана сигнатура функции: bool isDivisor (int a, int b); Необходимо реализовать функцию таким образом, чтобы она возвращала true, если любое из принятых чисел делит другое нацело" << endl;
    int a;
    int b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Результат: " << boolalpha << isDivisor(a, b) << endl;


    cout << "№10  Многократный вызов" << endl;
    cout << "Дана сигнатура функции: int lastNumSum(int a, int b) Необходимо реализовать функцию таким образом, чтобы она считала сумму цифр двух чисел из разряда единиц. Выполните с его помощью последовательное сложение пяти чисел и результат выведите на экран. Постарайтесь выполнить задачу, используя минимально возможное количество вспомогательных переменных." << endl;
    cout << "Введите число: ";
    cin >> a;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    for (int i = 1; i<6; i++) {
        cout << "Введите " << i << " число для суммы: ";
        cin >> b;
        a = lastNumSum(a, b);
        cout << i << ". Сумма равна: " << a << endl;
    }

    cout << "№2 Безопасное деление" << endl;
    cout << "Дана сигнатура функции: double safeDiv (int x, int y); Необходимо реализовать функцию таким образом, чтобы она возвращала деление x на y, и при этом гарантировала, что не будет выкинута ошибка деления на 0. При делении на 0 следует вернуть из функции число 0. Подсказка: смотри ограничения на операции типов данных." << endl;
    int y;
    cout << "Введите делимое: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Введите делитель: ";
    cin >> y;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << safeDiv(x, y) << endl;

    cout << "№4 Строка сравнения" << endl;
    cout << "Дана сигнатура функции: String makeDecision (int x, int y) Необходимо реализовать функцию таким образом, чтобы она возвращала строку,которая включает два принятых функцией числа и корректно выставленный знак операции сравнения (больше, меньше, или равно). " << endl;
    cout << "Введите первое число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Введите второе число: ";
    cin >> y;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << makeDecision(x, y) << endl;

    cout << "№6 Тройная сумма" << endl;
    cout << "Дана сигнатура функции: bool sum3 (int x, int y, int z); Необходимо реализовать функцию таким образом, чтобы она возвращала true, если два любых числа (из трех принятых) можно сложить так, чтобы получить третье" << endl;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    int z;
    cout << "Введите третье число: ";
    cin >> z;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << boolalpha << sum3(x, y, z) << endl;

    cout << "№8 Возраст." << endl;
    cout << "Дана сигнатура функции: String age (int x); Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в которой сначала будет число х, а затем одно из слов: • год • года • лет" << endl;
    cout << "Введите число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << age(x) << endl;

    cout << "№10 Вывод дней недели" << endl;
    cout << "Дана сигнатура функции: void printDays (String x); В качестве параметра функция принимает строку, в которой записано название дня недели. Необходимо реализовать функцию таким образом, чтобы она выводила на экран название переданного в него дня и всех последующих до конца недели дней. Если в качестве строки передан не день, то выводится текст “это не день недели”. Первый день понедельник, последний – воскресенье. Вместо if в данной задаче используйте switch." << endl;
    string xs;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Введите день недели: ";
    cin >> xs;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << endl;
    printDays(xs);



    cout << "№2 Числа наоборот."<< endl;
    cout << "Дана сигнатура функции: String reverseListNums (int x); Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в которой будут записаны все числа от x до 0 (включительно)."<< endl;
    cout << "Введите число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << reverseListNums(x) << endl;


    cout << "Степень числа"<< endl;
    cout << "Дана сигнатура функции: int pow (int x, int y); Необходимо реализовать функцию таким образом, чтобы она возвращала результат возведения x в степень y. "<< endl;

    cout << "Введите число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Введите степень: ";
    cin >> y;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << pow(x, y) << endl;

    cout << "№6 Одинаковость."<< endl;
    cout << "Дана сигнатура функции: bool equalNum (int x) Необходимо реализовать функцию таким образом, чтобы она возвращала true, если все знаки числа одинаковы, и false в ином случае." << endl;

    cout << "Введите число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: " << boolalpha << equalNum(x) << endl;

    cout << "№8 Левый треугольник."<< endl;
    cout << "Дана сигнатура функции: void leftTriangle (int x); Необходимо реализовать функцию таким образом, чтобы она выводила на экран треугольник из символов ‘*’ у которого х символов в высоту, а количество символов в ряду совпадает с номером строки."<< endl;
    cout << "Введите высоту треугольника: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Результат: "<< endl;
    leftTriangle(x);

    cout << "№10 Угадайка. "<< endl;
    cout << "Дана сигнатура функции: void guessGame() Необходимо реализовать функцию таким образом, чтобы она генерировала случайное число от 0 до 9, далее считывала с консоли введенное пользователем число и выводила, угадал ли пользователь то, что было загадано, или нет. Функция запускается до тех пор, пока пользователь не угадает число. После этого выведите на экран количество попыток, которое потребовалось пользователю, чтобы угадать число."<< endl;
    cout << "Результат: " << endl;
    guessGame();

    cout << "№2 Поиск последнего значения. "<< endl;
    cout << "Дана сигнатура функции: int findLast (int arr[], int x); Необходимо реализовать функцию таким образом, чтобы она возвращала индекс последнего вхождения числа x в массив arr. Если число не входит в массив – возвращается -1."<< endl;
    int arr[7] = {1, 2, 3, 4, 2, 2, 5};
    cout << "Дан массив: " << endl;
    for (int i=0; i<7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Введите искомое число: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Индекс искомого числа: "<< findLast(arr, x) << endl;

    cout << "№4 Добавление в массив. "<< endl;
    cout << "Дана сигнатура функции: int * add (int arr[], int x, int pos); Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, который будет содержать все элементы массива arr, однако в позицию pos будет вставлено значение x" << endl;
    int arr2[5] = {1, 2, 3, 4, 5};
    int pos;
    cout << "Исходный массив: " << endl;

    for (int i=0; i<5; i++) {
        cout << arr2[i] << " ";
    }
    cout << "Введите новый элемент массива: ";
    cin >> x;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << endl;
    cout << "Введите позицию нового элемента массива: ";
    cin >> pos;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Неверный ввод!!!" << endl;
        break;}
    cout << "Итоговый массив: " << endl;
    add(arr2, x, pos);
    cout << endl;

    cout << "№6 Реверс."<< endl;
    cout << "Дана сигнатура функции: void reverse (int arr[]); Необходимо реализовать функцию таким образом, чтобы он изменял массив arr. После проведенных изменений массив должен быть записан задом-наперед"<< endl;
    cout << " "<< endl;
    int arr6[5] = {1, 2, 3, 4, 5};
    cout << "Исходный массив: " << endl;

    for (int i=0; i<5; i++) {
        cout << arr6[i] << " ";
    }
    cout << endl;
    cout << "Результат: " << endl;
    reverse(arr6);
    cout << endl;

    cout << "№8 Объединение"<< endl;
    cout << "Дана сигнатура функции: int * concat (int arr1[],int arr2[]); Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, в котором сначала идут элементы первого массива (arr1), а затем второго (arr2)."<< endl;
    cout << "Первый исходный массив: "<< endl;
    int arrr[] = {1,2,3};
    for (int i=0; i<3; i++) {
        cout << arrr[i] << " ";
    }
    cout << endl;
    cout << "Первый исходный массив: "<< endl;
    int arrr2[] = {7,8,9};
    for (int i=0; i<3; i++) {
        cout << arrr2[i] << " ";
    }
    cout << endl;
    cout << "Результат: " << endl;
    concat(arrr, arrr2);
    cout << endl;

    cout << "№10 Удалить негатив. "<< endl;
    cout << "Дана сигнатура функции: int * deleteNegative (int arr[]); Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, в котором записаны все элементы массива arr кроме отрицательных." << endl;
    int arneg[7] = {1, 2, -3, 4, -2, 2, -5};
    cout << "Изначальный массив: "<< endl;
    for (int i=0; i<7; i++) {
        cout << arneg[i] << " ";
    }
    cout << endl;
    cout << "Результат: " << endl;
    deleteNegative(arneg);
    cout << endl;

    cout << "Лабораторную выполнил Братчиков Никита ПМИ-7, Спасибо за внимание!" << endl;

    return 0;
}
