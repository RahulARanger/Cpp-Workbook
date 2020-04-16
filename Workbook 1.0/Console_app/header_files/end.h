
using namespace std;
class ende
{
    string name;
    string suggestions;
    string rating;
  
public:
    ende()
    {
        suggestions = new char[200];
        ifstream ifs;
        ofstream ofs;
        ofs.open("Admin/Rating.txt",ios::app);
        string a = "end.txt";
        a = "Data/" + a;
        ifs.open(a, ios::in);
        while (ifs)
        {
            string s;
            getline(ifs, s);
            cout << s << endl;
        }
        ifs.close();
        timed(0, 42);
        
        there(62, 16);
        there(50, 20);
        
        getline(cin, name);
        ofs << "NAME : ";
        ofs << name;
        ofs << " ;";
        ofs << "\n";
        there(64, 23);
        ofs << "Rated : ";
        cin >> rating;
        fflush(stdin);
        ofs << rating;
        ofs << "\n";
        
        there(57, 26);
        ofs << "Suggested : ";
       
        for (int i = 0;i<4;i++)
        {
            there(57, 26 + i-1);
            getline(cin, suggestions);
            ofs << suggestions << "\n";
            fflush(stdin);
            
        }
    
        ofs << "\n\n";
        there(43, 30); 
        cout << "                       THANKS FOR ATTENDING THIS SURVEY";
           }
     ~ende()
     {
         for (int i = 0; i < 3; i++)
         {
             Beep(500,500);
             Sleep(1000/3);
       }
         

    }
};

