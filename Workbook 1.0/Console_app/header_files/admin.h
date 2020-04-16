
using namespace std;
class admined
{string b;
    string choice;
    char design;
    string give;
    string password;
public:

    admined()
    {
unsigned char ch=219;
    for(int i=0;i<44;i++)
    {
        for(int j=0;j<168;j++)
        {if(i==22)
        {cout.fill(219);
            cout<<setw(66)<<"Password : ";
            cout.fill(32);
            cout<<setw(20)<<" ";
            for(int k=0;k<168-66-206;k++)cout<<ch;
            break;
        }
            else cout<<ch;

        }
    }
    there(67, 22);

    cin>>password;
if(password=="36966")give="1";
else give="0";
    }
    int return1()
    {
        if(give=="1")
        {
            return 1;
        }
        else return 0;
    }
    static void hulk()
    {
        introe();
string filenamee;
    for(int j=0;j<168;j++)cout<<(char)236;
    cout<<"These are the files which are available: "<<endl;
for(int j=0;j<168;j++)cout<<(char)236;
cout<<endl;
system("dir /a src");
cout<<endl;
cout<<endl;
  for(int j=0;j<168;j++)cout<<(char)247;
    cout<<"ENTER THE NAME OF THE FILE: ";
        cin>>filenamee;

    for(int j=0;j<168;j++)cout<<(char)247;
    system("cls");
open_admin(filenamee);

    }
    static void open_admin(string hulk)
{


    ifstream ifs;
    hulk="src/"+hulk;
    ifs.open(hulk,ios::in);
    introe();
    cout<<endl;
    cout<<"The Contents in the Requested file is : "<<endl;
    for(int j=0;j<168;j++)
    {
        cout<<(char)206;
    }
    while(ifs)
    {
        string content;
        getline(ifs,content);
        cout<<content<<endl;
    }
    for(int j=0;j<168;j++)
    {
cout<<(char)206;
    }
    ifs.close();
    system("pause");

}

};
