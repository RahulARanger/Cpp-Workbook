

using namespace std;
void open(string a)
{
    ifstream ifs;
a="Data/"+a;
    ifs.open(a,ios::in);
    while(ifs)
    {

        string s;
        getline(ifs,s);
        cout<<s<<endl;
    }
    ifs.close();
}

