#include <iostream>
#include <vector>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    vector<string>wek;
    wek.resize(5);
    for(int i=0;i<wek.size();i++)
    {
        cout << "Enter word number " << i << ": ";
        cin >> wek[i];
    }
    for(int i=0;i<wek.size();i++)
    {
        cout << "Element number " << i << ": " << wek[i] << endl;
    }
}
