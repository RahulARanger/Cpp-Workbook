
using namespace std;
int compile(string);
int compile(string,int);
int check(string a)
{
   fstream fs;
   fs.open(a,ios::in);
   if(fs)return 0;
   else return 1;
}
static void introe()
{system("cls");
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
int check_name(string a)
{
    if(a.find(".cpp")>1000)
    {
        return 0;
    }
    else return 1;
}
int readcode(string name="")
{
retry:;
rey:;
   int result;
    system("cls");
    introe();
    string opened;
    cout << endl << endl;
    if (name.length() == 0)
    {
        //cout << endl << endl;
        open("compile.txt");
        system("dir /a \"dir/cpp\"");
        opened = "dir/cpp/";
        cout << endl << "Enter the file Name :";
        cin >> name;
 
    }
    if (check_name(name) == 0)
    {
        system("cls");
        cout << "THE FILE NAME IS WRONG HINT TRY .cpp extension after the name";
        cout << endl;
        system("pause");
        system("cls");
        name = "";
        goto retry;
        

    }
    string g = name;
    system("cls");
    name = opened + name;
    ifstream ifs;
    ifs.open(name, ios::in);
    if (!ifs)
    {
        cout << "The File Doesn't Exist ";
        cout << endl;
        bar("Directing to the page to renter the file name");
        system("cls");
        name = "";
        goto rey;
    }
    else
    {
        introe();
        system("cls");
        open("fileexists.txt");
        there(66,31);
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
            
            there(0, 16);
            cout << "Code in this file:" << endl<<endl;
            ifstream ifs;
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
            compile("dir\\cpp\\" + g,1);
        }
    
        return result;
    }
 

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
    there(1, wherey());
    system(compile.c_str());
    system(run.c_str());
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
    there(1, wherey());
    system(compile.c_str());
    system(run.c_str());
    return 1;
}
int writecode(string name="")
{
retry:;
    string name2;
    string link;
    system("cls");
    
  
    if (name.length() == 0)
    {
 
        open("getfilename.txt");
        there(53, 31 - 1);
        cin >> name;
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

    }
    name.erase(name.begin() + name.find(".cpp"), name.end());
    
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
        if (check(name) == 0)return 0;
        ofs2.open(name2, ios::out);
    ofs.open(name, ios::out);
    ofs.close();
    link = "dir\\cpp\\" + orig;
    
    // cout << name << endl << name2 << endl << link << endl;
    system(link.c_str());
    ifstream ifs;
    ifs.open(name, ios::in);
    if (ifs)
    {
       int result;
        introe();
        system("cls");
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

            there(0, 16);
            cout << "Code in this file:" << endl << endl;
            ifstream ifs;
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
        else if(result==2)
        {
          
        }
        ifs.close();
        ofs2.close();
        return result;
    }

        else {
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
        //open("writecode.txt");
      
    }
    return 0;
    
}