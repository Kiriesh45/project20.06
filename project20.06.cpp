#include <iostream>
#include <Windows.h> 
#include <fstream> 

#define O cout
#define E endl;

using namespace std;
int main()
{


    setlocale(LC_CTYPE, "ukr");
    setlocale(LC_ALL, "");
    cout << "Working with files!\n";



    /*ofstream file("test.txt");
    if (file) O << "File exist"<<E
    else {
        O << "File not found!" << E
            return 1;
    }
    O << "====================" << E*/

        /*cout << "write down any information, it will be saved on the file"
        char txt[20];
    int row = 1;
    do {
        o << row << ")";
        cin.getline(txt, 20);
        if (*txt == '+') break;
        file << txt <<
    }*/
        /*char txt[20];
        int row = 1;
        cout << "Vvedit dozapis";
        while (*txt == '*') {
            O << row << ')';
            cin.getline(txt, 20);
            if (*txt = '*') break;
            file<<txt<<E
                row++
        }*/

    //    ifstream file("test.txt");

    //if (!file.is_open()) {
    //    O << "File not found" << E
    //        return 1;
    //    }
    //char txt[20];
    //int rah = 0;
    //string num;
    //bool end = false;
    //while (file) {
    //    file.getline(txt, 20);
    //    for (int i = 0; txt[i] != '\0'; i++) {
    //        if (isdigit(txt[i])) {
    //            num += txt[i];
    //            cout << num << " ";
    //            if (!end) {
    //                rah++;
    //                cout << rah << endl;
    //                end = true;
    //            }
    //            else end = false;
    //        }
    //        if (txt[i] == ' ') {
    //            cout << num << endl;
    //            rah++;
    //            num = "";
    //        }
    //    }
    //    /*for (char i:txt) {
    //        if (txt[i] >= '0' && txt[i] <= '9') cout << txt[i] << endl;
    //    }*/
    //    cout << rah << "Amount of nums" << endl;
    //    file.close();
    //}
    // Error
}
