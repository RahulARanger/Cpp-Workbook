#pragma once
class lessons
{
    char pointer;
    string result;
    
	public:
         string title;
        lessons()
        {
            pointer =(char) 223;
           // hulk();
    }
        void afterintro()
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
        string afterpanel(string title)
        {
            this->title = title;

            afterintro();
            int esc = 0;
            open("afterpanel.txt");
            there(64+12, 7);
            cout << title;
            there(23, 3);
            char p = '$';
            cout << p;
            
            
            while (1)
            {
                char ch;
                ch = _getch();

                if (ch == 9)
                {
                    esc++;
                    if (esc == 1)
                    {
                        there(23, 3); cout << " ";
                        there(148,3); cout << p;
                        
                    }
                    else if (esc == 2)
                    {
                        there(148, 3); cout << " ";
                        there(21,11); cout << p;
                    }
                    else if (esc == 3)
                    {
                        there(21,11); cout << " ";
                        there(85,11); cout << p;
                    }
                    else if (esc == 4)
                    {
                        there(85,11); cout << " ";
                        there(146,11); cout << p;

                    }
                    
                    else 
                    {
                        esc = 0;
                        there(146,11); cout << " ";
                        there(23,3); cout <<p;

                    }
                 
                    
                }
                else if (ch == '\r')
                {
                    if (esc == 0)return "start";
                    else if (esc == 1)return "back";
                    else if (esc == 2)return "table";
                    else if (esc == 3)return "exit";
                    else if (esc == 4)return "help";
                }
            }
            
            return "start";
        }
        string ide()
        {
            title = " OUTPUT ";
            introe();
            there(0, 3);
            open("ide.txt");
            there(0, 0);
            there(47, 27); 
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(47, counte + 27); cout << "      ";
                    counte = counte - 5;
                    there(47, counte + 27);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)//this is the down key
                {
                    if (counte >= 5)continue;
                    there(47, counte + 27);
                    cout << "      ";
                    counte = counte + 5;
                    there(47, counte + 27);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 5;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    

                    //cout << result;
                    break;
                }

            }
            return result;
        }
        void introe()
        {
            time_t result = time(NULL);
            char str[26];
            ctime_s(str, sizeof str, &result);
            for (int i = 0; i < 168; i++)cout << (char)236;
            cout << setw(80+10+10) << str;
            for (int i = 0; i < 168; i++)cout << (char)236; cout << endl;
        }
        string part6()
        {
            introe();
            there(0, 3);
            open("ln6.txt");
            there(0, 0);
            there(58, 33);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(58, counte + 33); cout << "      ";
                    counte = counte - 4;
                    there(58, counte + 33);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)
                {
                    if (counte >= 8)continue;
                    there(58, counte + 33);
                    cout << "      ";
                    counte = counte + 4;
                    there(58, counte + 33);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    else if (counte == 2)result = "3";

                    //cout << result;
                    break;
                }

            }

            return result;
        }
        string part5()
        {
            introe();
            there(0, 3);
            open("ln5.txt");
            there(0, 0);
            there(44, 33);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(44, counte + 33); cout << "      ";
                    counte = counte - 4;
                    there(44, counte + 33);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)
                {
                    if (counte >= 8)continue;
                    there(44, counte + 33);
                    cout << "      ";
                    counte = counte + 4;
                    there(44, counte + 33);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    else if (counte == 2)result = "3";
                    break;
                }

            }

            return result;
        }
        string part4()
        {
            introe();
            there(0, 3);
            open("ln4.txt");
            there(0, 0);
            there(61, 34);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(61, counte + 34); cout << "      ";
                    counte = counte - 4;
                    there(61, counte + 34);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)
                {
                    if (counte >= 4)continue;
                    there(61, counte + 34);
                    cout << "      ";
                    counte = counte + 4;
                    there(61, counte + 34);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                                     break;
                }

            }

            return result;
                
        }
        string part3()
        {
            introe();
            there(0, 3);
            open("ln3.txt");
            there(0, 0);
            there(72,29-1);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(72, counte + 29-1); cout << "      ";
                    counte = counte - 4;
                    there(72, counte + 29-1);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)
                {
                    if (counte >= 8)continue;
                    there(72, counte + 29-1);
                    cout << "      ";
                    counte = counte + 4;
                    there(72, counte + 28);
                    cout << pointer << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    else if (counte == 2)result = "3";
                                       
                    //cout << result;
                    break;
                }

            }
            
            return result;
        }
        string part2()
        {
            introe();
            there(0, 3);
            open("ln2.txt");
            there(0, 0);
            there(64,27);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(64, counte + 27); cout << "      ";
                    counte = counte - 4;
                    there(64, counte + 27);
                    cout << pointer <<pointer<< pointer << pointer << pointer << pointer;

                }
                else if (ch == 80)
                {
                    if (counte >= 16)continue;
                    there(64, counte + 27);
                    cout << "      ";
                    counte = counte + 4;
                    there(64, 27 + counte);
                    cout << pointer<<pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    else if (counte == 2)result = "3";
                    else if (counte == 3)result = "4";
                    else if (counte == 4)result = "5";
                                 //cout << result;
                    break;
                }
               
            }
            return result; 
        }
	string part1()
	{
        introe();
        there(0,3);
        open("ln1.txt");
        there(56-1, 21);
        
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)//Rahul yeah myself this is upper key
                {
                    if (counte <= 0)continue;
                    there(55, counte + 21); cout << "     ";
                    counte = counte - 4;
                    there(55, counte + 21);
                    cout << pointer << pointer << pointer << pointer << pointer;


                }
                else if (ch == 80)//this is down bro
                {
                    if (counte >= 20)continue;
                    there(55, counte + 21);
                    cout << "     ";
                    counte = counte + 4;
                    there(55, 21 + counte);
                    cout << pointer << pointer << pointer << pointer << pointer;
                }
                else if (ch == '\r')
                {
                    counte /= 4;
                    if (counte == 0)result = "1";
                    else if (counte == 1)result = "2";
                    else if (counte == 2)result = "3";
                    else if (counte == 3)result = "4";
                    else if (counte == 4)result = "5";
                    else if (counte == 5)result = "6";
                    //cout << result;
                    break;
                }
            }
            system("cls");
            return result;

	}

};
