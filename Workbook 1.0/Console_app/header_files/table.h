
#include"time.h"

using namespace std;
class tabled
{public:
    char pointer = (char)205;
    string result;
    int esc;
    void introed()
    {

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
        there(87, 0);

        cout << str;
        there(0, 1);
        //for (int j = 0; j < 168; j++)cout << (char)236;

    }

    tabled()
    {
        esc = 0;
                ifstream ifs;
        string a = "table.txt";
        a = "Data/" + a;
        ifs.open(a, ios::in);
        while (ifs)
        {
            string s;
            getline(ifs, s);
            cout << s << endl;
        }
        ifs.close();
        there(0, 42);
        timed(0,42);
        there(62, 16); 
        select();
        
    }
    void select()
    {
        char ch;
        int counte = 0;
        int ced = 0;
        while (1)
        {
            ch = _getch();
            if (ch == 72 && esc == 0)//Rahul, yeah myself this is upper key
            {
                
                if (counte <= 0)continue;
                there(62, counte + 16); cout << "  ";
                counte = counte - 2;
                there(62, counte + 16);
                cout << pointer << ">";


            }
            else if (ch == 80 && esc == 0)//this is down bro
            {
                if (counte >= 10)continue;
                there(62, counte + 16);
                cout << "  ";
                counte = counte + 2;
                there(62, 16 + counte);
                cout << pointer << ">";
            }
            else if (ch == 9)
            {
                there(62, counte + 16);
                cout << "  ";
                   esc++;
                   if (esc == 1)
                   {
                       there(9, 7); cout << pointer << ">";
                   }
                   else if (esc == 2)
                   {
                       there(9, 7); cout << "  ";
                       there(9, 38); cout << pointer << ">";
                   }
                   else if (esc == 3)
                   {
                       there(9, 38); cout << "  ";
                       there(71, 38); cout << pointer << ">";
                       
                   }
                   else if (esc == 4)
                   {
                       there(71, 38); cout << "  ";
                       there(150, 37 + 1); cout << pointer << ">";
                      
                   }
                   else if (esc == 5)
                   {
                       there(150, 38); cout << "  ";
                       there(151, 7); cout << pointer << ">";
                   }
                   else if (esc == 6)
                   {
                       there(151, 7); cout << "  ";
                       there(76, 5+2); cout << pointer << ">";
                   }
                   else
                   {
                       esc = 0;
                       there(76, 5+2); cout << "  ";
                       there(62, counte + 16);
                       cout << pointer << ">";
                   }

            }
         
            else if (ch == '\r')
            {
                counte /= 2;
                if (counte == 0&&esc==0)result = "1";
                else if (counte == 1 && esc == 0)result = "2";
                else if (counte == 2 && esc == 0)result = "3";
                else if (counte == 3 && esc == 0)result = "4";
            
                else if (counte == 4)result = "5";
                else if (counte == 5)result = "6";
                
                else
                {
                    if (esc == 1) result = "start";
                    else if (esc == 2)result = "7";
                    else if (esc == 3)result = "8";
                    else if (esc == 4)result = "9";
                    else if (esc == 5)result = "exit";
                    else if (esc == 6)result = "help";
                }
                break;
            }
            else continue;
        }
    }


};

