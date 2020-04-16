#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<ctime>
#include<windows.h>
#include<chrono>
#include<fstream>
#include".h/gotoxy.h"
#include".h/box.h"
#include".h/openln.h"
#include".h/first.h"
#include".h/progressbar.h"
#include".h/table.h"
#include".h/open.h"
#include".h/end.h"
#include".h/ide3.0.h"
#include".h/notepad.h"
#include".h/admin.h"
#include".h/color.h"
#include".h/time.h"
#include".h/lessons.h"
using namespace std;
int after(string);
int generalcheck(string);
class table;
class intro
{

public:
    static int hbox;
    static int abox;
    string g;

    void starte()
    {

        start* st = new start;
        g = st->result;
        delete st;
        cout.fill(32);
              
        //1.start
        //2.about
        //3.help
        //4.exit
        if (g == "1")
        {
            if (abox == 0)
            {

                introe();
                open("about.txt");
                system("pause");
                system("cls");
                abox++;
            }
            if (hbox == 0)
            {

                introe();
                open("help.txt");
                system("pause");
                system("cls");
                hbox++;
            }
            system("cls");

            //delete ar;

        }
        else if (g == "2")
        {
            introe();
            open("help.txt");

            system("pause");
            system("cls");
            abox++;
            starte();
        }
        else if (g == "3")
        {
            introe();
            open("about.txt");
            system("pause");
            system("cls");
            hbox++;
            starte();
        }
        else if (g == "4")
        {
            system("cls");

            bar("Sending you to the end box...");
            system("cls");
            cout.fill(32);
            ended();
            exit(0);
        }
        else if (g.length() == 0)
        {
            cout << "That key is to force close the project" << endl;
            cout << "Bye .... :( ";
            cout << endl;
            exit(0);
        }
        else
        {
            cout << (char)7;
            system("cls");
            open("redo.txt");
            system("pause");
            system("CLS");
            starte();
        }
        system("CLS");
    }
    static void ended()
    {
        ende* f = new ende;
        delete f;
    }
};
int intro::hbox;
int intro::abox;

//this is the important class

class table :public intro
{
    //    string command;
  
 

    static void editor()
    {
    refo:;
        introe();
        system("cls");
        
        open("editortip.txt");
        there(0, 43);
        system("pause");
        there(0, 0);
        system("cls");
        editore();
        system("pause");
        int y = after(" OUTPUT : ");
        if (y == 0)
        {
            system("cls");
            goto refo;
        }
    }
    static void admin()
    {
    redo:;
    refo:;
        introe();
        open("admin.txt");
        system("pause");
        system("cls");
        string t;
        admined ed;
        if (ed.return1() == 1) {
            open("adminchoice.txt");
            box* strange = new box;
            string punisher;
            punisher = strange->create("ENTER THE COMMAND (NUMBER BEFORE THE COMMAND OVER ABOVE) : ");
            if (punisher == "1")
            {
                admined::hulk();
            }
            else if (punisher == "2")
            {
                ifstream ife;
                ife.open("main.cpp");
                introe();
                cout << endl;
                cout << "The Contents in the Requested file is : " << endl;
                for (int j = 0; j < 168; j++)
                {
                    cout << (char)206;
                }
                while (ife)
                {
                    string content;
                    getline(ife, content);
                    cout << content << endl;
                }
                for (int j = 0; j < 168; j++)
                {
                    cout << (char)206;
                }
                ife.close();
                system("pause");
            }
            else if (punisher == "3")
            {

            }
            else if (punisher == "4")
            {

            }
            else
            {
                int y = generalcheck(t);
                if (y == 0)goto redo;
            }
        }

        int y = after(" ADMIN MODE : ");
        if (y == 0)
        {
            system("cls");
            goto refo;
        }

    }
 
    static void ide()
    {
    refo:;
    redo:;
        
        string choice;
        lessons l;
        choice = l.ide();
        string title;
        int result{};
         if (choice == "1")
        {
        
             system("cls");
             open("idetip.txt");
             there(0, 43);
             system("pause");
             system("cls");
             there(0, 0);
         result = writecode();
             there(0, 15);
           
        }
        else if (choice == "2")
        {
             system("cls");
             open("idetip.txt");
             there(0, 43);
             system("pause");
             system("cls");
             there(0, 0);
             result = readcode();
             //  int result = readcode();
             there(0, 15);
                      
           
        }
        else
        {
            int y = generalcheck(choice);
            if (y == 0)goto redo;
        }
         if (result == 1)
         {
             title = " Creating the file ";
         }
         else if (result == 3)
         {
             title = " Viewing the file ";
         }
         else if (result == 4)
         {
             title == " The file is edited ";
         }
         else if (result == 5)
         {
             title == " The file is deleted ";
         }
        
        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }


    }
    static void chap1()
    {
    redo:;
    refo:;
               
        string t;
        string title;
        lessons l;
        t=l.part1();
        string send;
        there(0, 15);
        if (t == "1")
        {

           title = " INTRODUCTION ";
            //    cout<<"\"E:\\c++ and c files\\project\\Workbook 3.0\\files\\help.txt\"";
            openl("1.1.txt");
        }
        else if (t == "2")
        {
           title = " OOPS CONCEPTS ";
        
            openl("1.2.txt");
        }
        else if (t == "3")
        {
            title = " DATA TYPES ";
     
            openl("1.3.txt");
        }
        else if (t == "4")
        {
            title = " FUNCTIONS ";
   
            openl("1.4.txt");
        }
        else if (t == "5")
        {
            title = " SELECTION STATEMENTS ";
       
            openl("1.5.txt");
        }
        else if (t == "6")
        {
            title = " LOOPS ";
      
        openl("1.6.txt");
        }

        else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }
        
        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }
    }
    static void chap2()
    {
    redo:;
    refo:;
        string t;
        system("cls");
        lessons l;
        string title;
        t = l.part2();
        string send;
        there(0, 15);
        system("cls");
        if (t == "1")
        {

            title = " POINTERS ";
        
            openl("2.1.txt");
        }
        else if (t == "2")
        {
            title = " REFERENCES ";
          
            openl("2.2.txt");
        }
        else if (t == "3")
        {
            title = " VARIABLES ";
       
            openl("2.3.txt");
        }
        else if (t == "4")
        {
            title = "ARRAYS ";

            openl("2.4.txt");
        }
        else if (t == "5")
        {
            title = " STRING CLASS ";
      
            openl("2.5.txt");
        }
               else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }

        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }

    }
    static void chap3()
    {
    redo:;
    refo:;
        string t;
        string title;
        system("cls");
        lessons l;
        t = l.part3();
        there(0, 15);
        if (t == "1")
        {
            title = " CONSTRUCTORS ";
       
            openl("3.1.txt");
        }
        else if (t == "2")
        {
            title = " DESTRUCTORS ";
            introe();
            openl("3.2.txt");
        }
        else if (t == "3")
        {
            title = " FILE HANDLING ";
          
            openl("3.3.txt");
        }
        else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }
        
        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }

    }
    static void chap4()
    {
    redo:;
    refo:;
        string t;
        string title;
        system("cls");
        lessons l;
        t = l.part4();
        there(0, 15);
        if (t == "1")
        {
            title = " OVERLOADING ";

            openl("4.1.txt");
        }
        else if (t == "2")
        {
            title = " TYPE CONVERSION ";
         
            openl("4.2.txt");
        }
        else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }

        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }


    }
    static void chap5()
    {
    redo:;
    refo:;
        string t;
        string title;
        system("cls");
        lessons l;
        t = l.part5();
        system("cls");
        there(0, 16);
        if (t == "1")
        {
            title = " INHERITANCE ";
            openl("5.1.txt");
        }
        else if (t == "2")
        {
            title = " DYNAMIC MEMORY MANAGEMENT ";
            
            openl("5.2.txt");
        }
        else if (t == "3")
        {
            title = " POLYMORPHISM ";
            
            openl("5.3.txt");
        }
        else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }

        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }
    }
    static void chap6()
    {
    redo:;
    refo:;
        string t;
        string title;
        system("cls");
        lessons l;
        t = l.part6();
        there(0, 15);
        if (t == "1")
        {
            title = " EXCEPTION HANDLING ";
          
            openl("6.1.txt");
        }
        else if (t == "2")
        {
            title = " TEMPLATES ";
           
            openl("6.2.txt");
        }
        else if (t == "3")
        {
            title = " STL ";
        
            openl("6.3.txt");

        }
        else
        {
            int y = generalcheck(t);
            if (y == 0)goto redo;
        }

        int y = after(title);
        if (y == 0)
        {
            system("cls");
            goto refo;
        }
    }
public:

    static void ta()
    {
    redo:;
        string g;
       
        tabled a;
  
        g = a.result;
        if (g == "1")
        {
            system("cls");
                    chap1();
        }

        else if (g == "2")
        {
            system("cls");
            introe();
            chap2();
        }
        else if (g == "3")
        {
            system("cls");
            introe();
            chap3();

        }
        else if (g == "4")
        {
            system("cls");
            introe();
            chap4();
        }
        else if (g == "5")
        {
            system("cls");
            introe();
            chap5();
        }
        else if (g == "6")
        {
            system("cls");
            introe();
            chap6();
        }
        else if (g == "7")
        {
            system("cls");
            
            ide();
            
        }
        else if (g == "8")
        {
            system("cls");
            introe();
            //editor();
            editor();
        }
        else if (g == "9")
        {
            system("cls");
            introe();
            admin();
        }
        else
        {
            int y = generalcheck(g);
            if (y == 0)goto redo;
        }
    }

};
int generalcheck(string t)
{
    if (t == "start")
    {
        //    first:
        system("cls");
        table td;
        td.starte();
        string li = "THE TABLE IS LOADING...PLEASE WAIT ";
        bar(li);
        system("cls");
        table::ta();
    }

    else if (t == "table")
    {//table:;
        system("cls");
        string li = "THE TABLE IS LOADING...PLEASE WAIT ";
        bar(li);
        system("cls");
        table::ta();
    }
    else if (t == "help")
    {
        system("cls");
        open("help.txt");
        system("pause");
        system("cls");

        return 0;
    }
    else if (t.length() == 0)
    {
        cout << "That key is to force close the project" << endl;
        cout << "Bye .... :( ";
        cout << endl;
        exit(0);
    }
    else if (t == "about")
    {
        system("cls");
        open("about.txt");
        system("pause");
        system("cls");
        return 0;
    }
    else if (t == "exit" || t == "end")
    {
        system("cls");

        bar("Sending you to the end box...");
        system("cls");
        cout.fill(32);
        intro::ended();
        exit(0);
    }


    else
    {
        cout << (char)7;
        system("cls");
        open("redo.txt");
        system("pause");
        system("CLS");

        return 0;
    }
    return 1;
}

int after(string a="hello")
{
    there(0, 0);
    
    string h;
    lessons f;
    h=f.afterpanel(a);
    if (h == "back")
    {
        return 0;
    }
    else if (h == "start")
    {
        system("cls");
        table te;
        te.starte();
        string li = "THE TABLE IS LOADING...PLEASE WAIT ";
        bar(li);
        system("cls");
        table::ta();
    }
    else if (h.length() == 0)
    {
        cout << "That key is to force close the project" << endl;
        cout << "Bye .... :( ";
        cout << endl;
        exit(0);
    }
    else if (h == "table")
    {
        system("cls");
        string li = "THE TABLE IS LOADING...PLEASE WAIT ";
        bar(li);
        system("cls");
        table::ta();
    }
    else if (h == "help")
    {
        system("cls");
        open("help.txt");
        system("pause");
        system("cls");

        return 0;
    }
    else if (h == "about")
    {
        system("cls");
        open("about.txt");
        system("pause");
        system("cls");
        return 0;
    }
    else if (h == "end" || h == "exit")
    {
        system("cls");

        bar("Sending you to the end box...");
        system("cls");
        cout.fill(32);
        intro::ended();
        exit(0);
    }

    else
    {
        cout << (char)7;
        system("cls");
        open("redo.txt");
        system("pause");
        system("CLS");
        return 0;
    }
    return 1;
}
int main()
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions

    MoveWindow(console, r.left, r.top, 1680,9001, TRUE); // 800 width, 100 height
    cout << endl << endl;
    //    first:
    SetColor(6);
    string begin = "STARTING THE WORKBOOK";
    bar(begin,1);
    SetColor(1);
    table te;
    te.starte();
    string li = "THE TABLE IS LOADING...PLEASE WAIT ";
    bar(li);
    system("cls");
    table::ta();


    return 0;
}
