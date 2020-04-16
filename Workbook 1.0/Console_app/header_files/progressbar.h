#pragma once
#include<windows.h>

using namespace std;

void bar(string s, int x = 2)
{

    

    
    
    char c = (char)219;
    //cout<<setw(66)<<"THE FILES ARE LOADING..."<<endl;


    ifstream ifs;
    string a = "progress.txt";
    a = "Data/" + a;
    ifs.open(a, ios::in);
    while (ifs)
    {
        string s;
        getline(ifs, s);
        cout << s << endl;
    }
    ifs.close();

   // cout << s << endl;
    cout << s;
    cout << endl << endl;
    cout << "Progress : ";

    string acd = "Progress : ";
    for (unsigned int i = 0; i < 168 - acd.length() - 1; i++)
    {
        
        cout << c;
        Sleep(x * 1000 / (168));
    }
    
    Beep(500, 500);
    Beep(500, 500);

}

