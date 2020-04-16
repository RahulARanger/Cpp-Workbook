using namespace std;
int compile(string);
int compile(string, int);
static void introe()
{
    system("cls");
    cout.fill((char)236);

    cout.fill(32);
    for (int j = 0; j < 168; j++)cout << (char)236;
    time_t result = time(NULL);
    char str[26];
    ctime_s(str, sizeof str, &result);
    cout << setw(81 + 9) << "YOU ENTERED THIS BOX AT: " << str;
    for (int j = 0; j < 168; j++)cout << (char)236;

    cout.fill(32);
}
int compile(string name, int num)
{
    string cpp = name + ".cpp";
    string run;
    string compile = "g++ " + cpp;
    compile = compile + " ";
    compile = compile + "-o ";
    run = name + ".exe";
    compile = compile + run;

    run = "\"" + run;
    run = run + "\"";
    cout << " The Code is compiling ...";
    int y = wherey();
    cout << endl;
system(compile.c_str());
    system(run.c_str());
    there(0, y);
    cout << "                                    ";

    return 1;
}
int compile(string name)
{

    string cpp = name + ".cpp";
    string run;
    string compile = "g++ " + cpp;
    compile = compile + " ";
    compile = compile + "-o ";
    run = name + ".exe";
    compile = compile + run;

    run = "\"" + run;
    run = run + "\"";
    there(0, 15);
    cout << " The Code is compiling ...";
    int y = wherey();
    cout << endl;
    system(compile.c_str());
    system(run.c_str());
    there(0, y);
    cout << "                                    ";

    return 1;
}
void edite(string name)
{
    name.erase(name.begin() + name.find(".cpp"), name.end());
    
    string name2;
    string link;
   
    string g;
    string orig;
    orig = name;
    g = name;
    
    ofstream ofs;
    name2 = name + ".cpp";
    ofstream ofs2;
    orig = orig + ".txt";
    name = "dir/cpp/" + name;
    name2 = "dir/cpp/" + name2;
    name = name + ".txt";
    ofs2.open(name2, ios::out);
    ofs.open(name, ios::app);
    ofs.close();
    link = "dir\\cpp\\" + orig;

    // cout << name << endl << name2 << endl << link << endl;
    system(link.c_str());
    ifstream ifs;
    ifs.open(name, ios::in);
    while (ifs)
    {
        string s;
        getline(ifs, s);
        ofs2 << s << "\n";
    }
    ifs.close();
    ofs2.close();
    there(53, 35);
    system("pause");
    system("cls");
    compile("dir\\cpp\\" + g);
}
void deleted(string name)
{
    name.erase(name.begin() + name.find(".cpp"), name.end());
    string opened = "dir/cpp/";

    name = opened + name;
    string runfile = name + ".exe";
    string textfile = name + ".txt";
    string codefile = name + ".cpp";
  
    ofstream ofs("codename");
    ofs.close();
    remove(codefile.c_str());
    remove(textfile.c_str());
    remove(runfile.c_str());
    cout << endl << endl;
    cout << "The File has been Delted Successfully";
    cout << endl; system("pause");
    cout << endl;

}
void create(string name)
{
    name.erase(name.begin() + name.find(".cpp"), name.end());

    string name2;
    string link;

    string g;
    string orig;
    orig = name;
    g = name;

    ofstream ofs;
    name2 = name + ".cpp";
    ofstream ofs2;
    orig = orig + ".txt";
    name = "dir/cpp/" + name;
    name2 = "dir/cpp/" + name2;
    name = name + ".txt";
    ofs2.open(name2, ios::out);
    ofs.open(name, ios::out);
    ofs.close();
    link = "dir\\cpp\\" + orig;

    // cout << name << endl << name2 << endl << link << endl;
    system(link.c_str());
    ifstream ifs;
    ifs.open(name, ios::in);
    while (ifs)
    {
        string s;
        getline(ifs, s);
        ofs2 << s << "\n";
    }
    ifs.close();
    ofs2.close();
    there(53, 35);
    system("pause");
    system("cls");
    compile("dir\\cpp\\" + g);
}

void view(string name)
{
    name.erase(name.begin() + name.find(".cpp"), name.end());
    system("cls");
    introe();
    string opened="dir/cpp/";
    cout << endl << endl;
    string g = name;
    g = g + ".cpp";
    system("cls");
    name = opened + name;
    there(0, 16);
    cout << "Code in this file:" << endl << endl;
    ifstream ifs;
    name = name + ".txt";
    
    ifs.open(name, ios::in);
    while (ifs)
    {
        string s;
        getline(ifs, s);
        cout << s;
        cout << endl;
    }
    cout << endl << endl;
    cout << "The Output of the file is :" << endl;
    cout << endl;
    g.erase(g.begin() + g.find(".cpp"), g.end());
    compile("dir\\cpp\\" + g, 1);
   

}

int check_name(string a)
{
    if (a.find(".cpp") > 1000)
    {
        return 0;
    }
    else return 1;
}
int writecode(string name="")
{
redo:;
retry:;
    system("cls");
    int result;
    string name2;
    string link;
    string orig;
    system("cls");
    if (name.length() == 0)
    {
        open("getfilename.txt");
        there(53, 31 - 1);
        cin >> name;
        orig = name;
        name = "dir/cpp/" + name;
        system("cls");
        if (check_name(name) == 0)
        {
            system("cls");
            cout << "THE FILE NAME IS WRONG HINT TRY .cpp extension after the name";
            cout << endl;
            system("pause");
            system("cls"); name = "";
            goto retry;

        }
    }
    else
    {
        orig = name;
        name = "dir/cpp/" + name;

    }
    ifstream ifs;
    name.erase(name.begin() + name.find(".cpp"), name.end());
    name = name + ".txt";
  
    ifs.open(name);
    name.erase(name.begin() + name.find(".txt"), name.end());
    name = name + ".cpp";
    if (!ifs)
    {
                open("filenoexist.txt");

        
                
        there(66, 31);
        there(0, 0);
        char ch;
        int counte = 0;
        while (1)
        {
            ch = _getch();
            if (ch == 72)// this is the upper key
            {
                if (counte <= 0)continue;
                there(66, counte + 31); cout << " ";
                counte = counte - 2;
                there(66, counte + 31);

                cout << "*";
            }
            else if (ch == 80)
            {
                if (counte >= 2)continue;
                there(66, counte + 31);
                cout << " ";
                counte = counte + 2;
                there(66, counte + 31);
                cout << "*";
            }
            else if (ch == '\r')
            {
                counte /= 2;
                if (counte == 0)result = 1;
                else if (counte == 1)result = 2;

                break;
            }

        }
        system("cls");
        if (result == 1)
        {
            create(orig);
        }
        else if (result == 2)
        {
            system("cls");
            name = "";
            goto redo;
        }
    }
    else
    {
        
        open("fileexists.txt");
        
                there(66, 31);
        there(0, 0);
        char ch;
        int counte = 0;
        while (1)
        {
            ch = _getch();
            if (ch == 72)// this is the upper key
            {
                if (counte <= 0)continue;
                there(66, counte + 31); cout << " ";
                counte = counte - 2;
                there(66, counte + 31);

                cout << "*";
            }
            else if (ch == 80)
            {
                if (counte >= 4)continue;
                there(66, counte + 31);
                cout << " ";
                counte = counte + 2;
                there(66, counte + 31);
                cout << "*";
            }
            else if (ch == '\r')
            {
                counte /= 2;
                if (counte == 0)result = 1;
                else if (counte == 1)result = 2;
                else if (counte == 2)result = 3;
                break;
            }

        }
        system("cls");

        if (result == 1)
        {
            ifs.close();
            view(orig);
            result = 3;
        }
        else if (result == 2)
        {
            ifs.close();
            edite(orig);
            result = 4;
        }
        else if (result == 3)
        {
            ifs.close();
            deleted(orig);
            result = 5;
        }
        
    }
    return result;
}
int readcode(string name = "")
{
redo:;
retry:;
    int result;
    string name2;
    string link;
    string orig;
    system("cls");
    introe();
    cout << endl << endl;

        system("cls");
        if (name.length() == 0)
        {
            open("compile.txt");
            system("dir /a \"dir/cpp\"");
            string opened = "dir/cpp";
            cout << endl << "Enter the file Name :";
            cin >> name;
            orig = name;
            
            name = "dir/cpp/" + name;
            system("cls");
        }
        else
        {
            orig = name;
            name = "dir/cpp/" + name;

        }
        if (check_name(name) == 0)
        {
            system("cls");
            cout << "THE FILE NAME IS WRONG HINT TRY .cpp extension after the name";
            cout << endl;
            system("pause");
            system("cls"); name = "";
            goto retry;

        }
        ifstream ifs;
        name.erase(name.begin() + name.find(".cpp"), name.end());
        name = name + ".txt";

        ifs.open(name);
        name.erase(name.begin() + name.find(".txt"), name.end());
        name = name + ".cpp";

     
        if (!ifs)
        {
            open("filenoexist.txt");



            there(66, 31);
            there(0, 0);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(66, counte + 31); cout << " ";
                    counte = counte - 2;
                    there(66, counte + 31);

                    cout << "*";
                }
                else if (ch == 80)
                {
                    if (counte >= 2)continue;
                    there(66, counte + 31);
                    cout << " ";
                    counte = counte + 2;
                    there(66, counte + 31);
                    cout << "*";
                }
                else if (ch == '\r')
                {
                    counte /= 2;
                    if (counte == 0)result = 1;
                    else if (counte == 1)result = 2;

                    break;
                }

            }
            system("cls");
            if (result == 1)
            {
                create(orig);
            }
            else if (result == 2)
            {
                system("cls");
                name = "";
                goto redo;
            }
        }
        else
        {

            open("fileexists.txt");

            there(66, 31);
            there(0, 0);
            char ch;
            int counte = 0;
            while (1)
            {
                ch = _getch();
                if (ch == 72)// this is the upper key
                {
                    if (counte <= 0)continue;
                    there(66, counte + 31); cout << " ";
                    counte = counte - 2;
                    there(66, counte + 31);

                    cout << "*";
                }
                else if (ch == 80)
                {
                    if (counte >= 4)continue;
                    there(66, counte + 31);
                    cout << " ";
                    counte = counte + 2;
                    there(66, counte + 31);
                    cout << "*";
                }
                else if (ch == '\r')
                {
                    counte /= 2;
                    if (counte == 0)result = 1;
                    else if (counte == 1)result = 2;
                    else if (counte == 2)result = 3;
                    break;
                }

            }
            system("cls");

            if (result == 1)
            {
                ifs.close();
                view(orig);
            }
            else if (result == 2)
            {
                ifs.close();
                edite(orig);
            }
            else if (result == 3)
            {
                ifs.close();
                deleted(orig);
            }
            result += 2;
        }

        return result;
}