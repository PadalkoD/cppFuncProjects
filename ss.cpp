#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int plWin = 0;
    int pcWin = 0;
    const int coutWins = 3;
    const int coutAttempts = 5;
    const int minRange = 1;
    const int maxRange = 100;
    int pcNum, plNum;

    while (true) {
        system("cls");
        cout << "Компьютер загадал число, попробуй отгадать";
        pcNum = minRange + rand() % (maxRange + 1 - minRange);
        for (int i = 0; i < coutAttempts; i++) {

        
            bool flag = false; // флаг для определения угадано число или нет
            cout << "введите число:  " << endl;
            cin >> plNum;
            if (plNum > pcNum)
            cout << "загаданное число меньше" << endl;
            else if (plNum < pcNum)
                cout << "загаданное число больше" << endl;
            else {
                cout << "Вы угадали число " << endl;
            flag = true;
            break;

            (flag) ? plWin++ : pcWin++;
            if (plWin >= coutWins) {
                cout << "победа игрока со счётом - " << plWin << "";
         
        }
    }
   























}





