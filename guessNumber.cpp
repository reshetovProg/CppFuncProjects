#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int playerWin = 0;
    int pcWin = 0;
    const int countWins = 3;
    const int coutAttempts = 5;
    const int minRange = 1;
    const int maxRange = 100;
    int pcNum, plNum;

    while (true) {
        system("cls");
        cout << "общий счет: игрок - " << playerWin << " : пк -" << pcWin << endl;
        cout << "Компьютер загадал число в диапазоне от "<< minRange<<" до "<<
            maxRange<<"."<<endl<<"Попробуй отгадать." << endl;
        pcNum = minRange + rand() % (maxRange + 1 - minRange);
        bool flag = false; //флаг для определения угадано число или нет
        for (int i = 0; i < coutAttempts; i++) {
            cout << "введите число: ";
            cin >> plNum;
            if (plNum > pcNum)
                cout << "загаданное число меньше" << endl;
            else if (plNum < pcNum)
                cout << "загаданное число больше" << endl;
            else {
                cout << "вы угадали число" << endl;
                flag = true;
                break;
            }
        }
        if (flag) {
            playerWin++;
            cout << "вы выиграли в этом раунде." << endl;
            cout << "общий счет: игрок - " << playerWin << " : пк -" << pcWin << endl;
        }
        else {
            pcWin++;
            cout << "вы проиграли в этом раунде." << endl;
            cout << "общий счет: игрок - " << playerWin << " : пк -" << pcWin << endl;
        }
        if (playerWin >= countWins) {
            cout << "победил игрок со счетом - " << playerWin << " : " << pcWin << endl;
            break;
        }
        else if (pcWin >= countWins) {
            cout << "победил компьютер со счетом - " << playerWin << " : " << pcWin << endl;
            break;
        }
        system("pause");

    }


}
