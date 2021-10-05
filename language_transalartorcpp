#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
void display();
const string space = " ";
const string space2 = " ";
const int length = 38;
ifstream inFile;
ofstream outFile;
fstream english("ENG.txt");
fstream spanish("SPAN.txt");


int main()
{
string word, ENG[length], SPAN[length], save;
int num, lang;
display ();
for(num=0; num<=length; num++)
{
getline(english,save);
ENG[num]=save;
}
cin >> lang;
system("cls");

switch(lang)
{
case 1:
cout << "What word would you like to translate?" << endl;
cin >> word;
break;

}
return 0;
}

void display()
{
cout << space << "What would you like to translate to?\n" << endl;
cout << space2 << "1. Spanish" << endl;
cout << space2 << "2. English" << endl;
cout << space2 << "0. Exit" << endl;
}
