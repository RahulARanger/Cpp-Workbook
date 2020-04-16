#include"color.h"

using namespace std;


class start
{
   
    char border;
    char table;
  public:
      string result;
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
          there(87,0);
          
          cout << str;
          there(0, 1);
          //for (int j = 0; j < 168; j++)cout << (char)236;
          
      }
      start()
      {
          introed();

          
          ifstream ifs;
          string a = "start.txt";
          a = "Data/" + a;
          ifs.open(a, ios::in);
          while (ifs)
          {
              string s;
              getline(ifs, s);
              cout << s << endl;
          }
          ifs.close();
          there(1, 42);
          for (int i = 0; i < 166; i++)
              cout << (char)219;
          there(1, 43);
          for (int i = 0; i < 166; i++)
              cout << (char)219;
          there(0, 0);
          there(78, 20);
          select();
         
      }
      void select()
      {
          char ch;
          int counte = 0;
          while (1)
          {
              ch = _getch();
              if (ch == 72)//Rahul yeah myself this is upper key
              {
                  if (counte <= 0)continue;
                  there(78, counte + 20); cout << "  ";
                  counte = counte - 2;
                  there(78, counte + 20);
                  cout << "~>";


              }
              else if (ch == 80)//this is down bro
              {
                  if (counte >= 6)continue;
                  there(78, counte + 20);
                  cout << "  ";
                  counte = counte + 2;
                  there(78, 20 + counte);
                  cout << "~>";
              }
              else if (ch == '\r')
              {
                  counte /= 2;
                  if (counte == 0)result = "1";
                  else if (counte == 1)result = "2";
                  else if (counte == 2)result = "3";
                  else if (counte == 3)result = "4";
                  //cout << result;
                  break;
              }
          }
      }
          
             
        //  cout<<"Enter your choice: (note that the numbers before the help and exit.. represents the number as command to perform that action) ";
              
};

