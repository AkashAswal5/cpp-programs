// Remove white Space from string

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str ;
    cout<<"enter String: ";
    getline(cin,str); //use getline to handle input with space
    string result;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i]!=' ')
        {
            result = result + str[i];
        }
    }
    cout << result;
    return 0;
}
