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

}

void writeVectorToFile()
{

}

int main()
{
    readingVectorFromFile();
    outputStringsToConsole();
    writeVectorToFile();

    return 0;
}
