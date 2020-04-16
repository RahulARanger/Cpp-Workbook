

using namespace std;
class box
{

    string result;
char border;
char u;
public:
    box()
    {cout.fill((char)32);
        u=(char)205;
        border=(char)236;
cout.fill(border);
                      cout<<setw(168)<<border;
                      cout.fill(32);
    cout<<setw(81)<<"COMMAND BOX"<<endl;
    cout.fill(border);
    cout<<setw(168)<<border;
    }

    string create(string a)
    {
        cout<<a<<": ";cin>>result;


    return result;
    }
};
