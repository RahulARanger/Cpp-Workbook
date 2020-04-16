#pragma once


using namespace std;
void openl(string a)
{
    a = "docs/" + a;
    ifstream ifs;
    ifs.open(a, ios::in);
    while (ifs)
    {

        string s;
        getline(ifs, s);
        cout << s << endl;
    }
    ifs.close();
 
}

