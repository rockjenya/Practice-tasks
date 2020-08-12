#include <iostream>
#include <string>

using namespace std;

void tobig(string &line);

int main()
{
    string line;
    cout << "Enter a string (q to quit): ";
    while((getline(cin, line)) && line !="q")
    {
        tobig(line);
        cout << "Next string (q to quit): ";
    }
    return 0;
}
void tobig(string &line)
{
    int i = 0;
    for(; line[i] != '\0'; i++)
    {
        line[i] = toupper(line[i]);
    }
    line[i]='\0';
    cout << line << endl;
}