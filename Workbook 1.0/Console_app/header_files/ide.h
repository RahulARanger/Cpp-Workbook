using namespace std;
int check(string a)
{
   fstream fs;
   fs.open(a,ios::in);
   if(fs)return 0;
   else return 1;
}
int check_name(string a)
{
    if(a.find(".cpp")>1000)
    {cout<<"    ERROR 69: THIS FILE NAME IS WRONG  ";
        return 0;
    }
    else return 1;
}
int compile()
{
    open("compile.txt");
    system("dir /a \"dir / .cpp\"")
     string a;
cout<<"Enter the File name to view the code:"<<endl;
cin>>a;
if(check_name(a)==0)return 1;
string opened="dir/.cpp/"+a;
if(check(opened)==0){cout<<"..";return 0;}
a=a+"\"";
string b="\"dir/.cpp/"+a;
ofstream ofs;
ofs.open(opened,ios::out);
string test;
while(getline(cin,test))
{
    ofs<<test<<"\n";
}
ofs.close();
    return 1;
}

int run()
{

    string a;
cout<<"Enter the File name to view the code:"<<endl;
cin>>a;
if(check_name(a)==0)return 1;
string opened="dir/.cpp/"+a;
if(check(opened)==1)return 0;
a=a+"\"";
string b="\"dir/.cpp/"+a;
ifstream ifs;
ifs.open(opened,ios::in);
cout<<endl;
string compile;
string run;
compile="g++ "+b;
a.replace(a.find(".cpp"),4,".exe");
run="\"E:/c++ and c files/project/Workbook 3.0/dir/.cpp/"+a;
a=" -o "+run;
compile=compile+a;
system("cls");
system(compile.c_str());
system("cls");
cout<<"Code written in that file: "<<endl;
while(ifs)
{    string v;
    getline(ifs,v);
    cout<<v<<endl;
}
ifs.close();
cout<<"THE OUTPUT OF THE FILE IS:"<<endl;
system(run.c_str());
cout<<endl;
cout<<endl;
return 1;
}
