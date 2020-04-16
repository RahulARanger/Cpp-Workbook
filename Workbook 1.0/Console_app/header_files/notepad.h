
using namespace std;
void editore()
{
 gogo:;
 faggot:;
introe();

    for(int j=0;j<168;j++)cout<<(char)236;
    cout<<"These are the files which are available: "<<endl;
for(int j=0;j<168;j++)cout<<(char)236;
cout<<endl;
system("dir /a dir .*txt .*docx");
cout<<endl;
cout<<endl;
    string filename;
    for(int j=0;j<168;j++)cout<<(char)247;
    cout<<"ENTER THE NAME OF THE FILE: ";
        cin>>filename;
if(filename.find(".cpp")<1000)
{system("cls");
char f;
    cout<<"    ERROR 69: THIS FILE NAME IS WRONG  ";
    cout<<endl;
cout<<"you would probably lose the data if stored as this kind of file kindly proceed to editor so that you can perform operations there ";
cout<<endl<<"Wanna Go back to change the filename(y/n) ";
cin>>f;
system("cls");
goto faggot;
}
    for(int j=0;j<168;j++)cout<<(char)247;
    system("cls");
    filename="dir/"+filename;
    ifstream ifs;
   ifs.open(filename,ios::in);
   if(ifs){
    introe();
    int choice;
    cout<<setw(90)<<"The file already exists..."<<endl;
    cout<<setw(90)<<"--------------------------"<<endl;
    cout<<endl<<endl;
     for(int j=0;j<168;j++)cout<<(char)240;
    cout<<"1.To view the file "<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<"2.To append the file"<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<"3.Rewrite the file"<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<" any other number to delete that file"<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<endl;
    cout<<endl;
    cout<<"Enter your choice to perform that action : "<<endl;
    cin>>choice;
    if(choice==1)
    {ifs.close();
        dothate:;
    dothat:;

    ifstream ifse;
    ifse.open(filename,ios::in);
        system("cls");
        introe();
        for(int j=0;j<168;j++)cout<<(char)240;
        cout<<"The contents in the file are: "<<endl;
            for(int j=0;j<168;j++)cout<<(char)240;

          while(ifse)
          {
          string content;
          getline(ifse,content);
          cout<<content<<endl;
          }
          ifse.close();

    }
    else if(choice==2)
    {
ifs.close();
ofstream ofs;
ifstream ifse;
ifse.open(filename, ios::in);
ofs.open(filename,ios::app);
string content;
system("cls");
introe();
cout<<"Enter the content (note !stop to close the file) : "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

cout<<endl<<endl;
while (ifse)
{
    string content;
    getline(ifse, content);
    cout << content << endl;
}
ifse.close();
while (ofs)
{
    string content;
    getline(cin, content);
    if (content == "!stop")break;
    ofs << content << "\n";
}
cout<<endl<<endl;
cout<<endl<<endl;
cout<<endl<<endl;

cout<<"The content has been appended successfully (to check it enter back in command box) ";
cout<<endl;
 cout<<"The file has been rewritten successfully  ";
cout<<endl;
cout<<"wanna view the file (y/n)"<<endl;
char ch;
cin>>ch;
if(ch=='y'||ch=='Y'){system("cls");goto dothate;}
else return;
    }
    else if(choice==3)
    {
ifs.close();
ofstream ofs;
ofs.open(filename,ios::out);
string content;
system("cls");
introe();
cout<<"Enter the content (note !stop to close the file) : "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<endl;
cout<<endl;
string y;
while (ofs)
{
    string content;
    getline(cin, content);
    if (content == "!stop")break;
    ofs << content << "\n";
}
cout<<endl<<endl;
cout<<endl<<endl;
cout<<endl<<endl;

cout<<"The file has been rewritten successfully  ";
cout<<endl;
cout<<"wanna view the file (y/n)"<<endl;
char ch;
cin>>ch;
if(ch=='y'||ch=='Y'){system("cls");goto dothat;}
else return;
    }
    else
    {
        ifs.close();
if(remove(filename.c_str())!=0)
{
    cout<<"There was error in deleting the file";
    cout<<endl;
}
else
{
    cout<<"The file has been deleted successfully...";
    cout<<endl;
}
    }

   }
   else
   {
introe();
    int choice;
    cout<<setw(90)<<"The file doesn't exists..."<<endl;
    cout<<setw(90)<<"--------------------------"<<endl;
    cout<<endl<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<"1.Create the new file "<<endl;
    for(int j=0;j<168;j++)cout<<(char)240;
    cout<<"any other number to change the file name entered"<<endl;
      for(int j=0;j<168;j++)cout<<(char)240;
    cout<<endl;
     cout<<endl;
     cout<<"Enter your choice to perform the available options: ";
    cin>>choice;
    cout<<endl;
    if(choice==1)
   {
     ofstream ofs;
ofs.open(filename,ios::out);
//string content;
system("cls");
introe();
cout<<"Enter the content (note !stop to close the file) : "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<endl;
cout<<endl;
while (ofs)
{
    string content;
    getline(cin, content);
    if (content == "!stop")break;
    ofs << content << "\n";
}
cout<<endl<<endl;
cout<<endl<<endl;
cout<<endl<<endl;
cout<<"The file has created successfully :)"<<endl;
ofs.close();
   }
   else
   {
       ifs.close();
       system("cls");
       goto gogo;
   }
   }

}
