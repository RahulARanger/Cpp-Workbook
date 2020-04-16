#pragma once
void timed(int x=0,int y=0)
{
    if (x != 0 || y != 0)
    {
        there(0, y);
    }
    time_t result = time(NULL);
    char str[26];
    ctime_s(str, sizeof str, &result);
    ifstream ifs;
    string a = "introe.txt";
    a = "Data/" + a;
    ifs.open(a, ios::in);
    while (ifs)
    {
        string s;
        getline(ifs, s);
        cout << s;
    }
    ifs.close();
    there(87+x, y);

    cout << str;
    if(x!=0||y!=0)
    {
        there(0, 43); cout << " ";
        for (int i = 1; i < 167; i++)cout << (char)219;
    }
    there(0+x, 1+y);
    //for (int j = 0; j < 168; j++)cout << (char)236;

}