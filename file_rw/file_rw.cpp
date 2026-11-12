#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>     /

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string line;

    ifstream fileR("read.txt"); 
    if (fileR.is_open())
    {
        while (getline(fileR, line))
        {
            cout <<"Данные из файла которые будут записаны: " << line << endl;
        }
    }
    fileR.close();

    ofstream fileW("write.txt");
    if (fileW.is_open())
    {
        fileW << line;
        cout << "Запись прошла успешно";
    }
    else
        cout << "Ошибка записи";
    fileW.close();

    return 0;
}