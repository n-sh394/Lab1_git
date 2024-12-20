#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> myArray;
string str;

void readingVectorFromFile()
{
    ifstream in;
    in.open("file.txt");

    if(in.is_open())
    {
        cout << "Open" << endl;

        while(!in.eof())
        {
            getline(in, str);
            myArray.push_back(str);
        }

        //for(const auto& str: myArray)
    //{
        //cout << str << endl;
    //}
    }
}

void outputStringsToConsole()
{

    //myArray.push_back("first line");
    //myArray.push_back("second line");
    //myArray.push_back("third line");

    for (const auto& str: myArray)
    {
        cout << str << endl;
    }
}

void writeVectorToFile()
{
    ofstream out;
    out.open("file2.txt");

    if(out.is_open())
    {
        cout << "Open" << endl;

       for(const auto& str: myArray)
       {
           out << str << endl;
       }
    }
}

int main()
{
    readingVectorFromFile();
    outputStringsToConsole();
    writeVectorToFile();

    return 0;
}
