#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    ifstream in("/Users/s20181102932/Desktop/123.txt");
        in>>a>>b;
    ofstream out("/Users/s20181102932/Desktop/321.txt");
    {
        if(out.is_open())
        {
            out<<a<<" "<<b+1;
            out.close();
        }
    }
    return 0;
}
