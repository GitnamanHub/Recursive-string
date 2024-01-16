#include<iostream>
using namespace std;

string reverse(string &str, int s, int e)
{
    if(s>e)
    return str;

    swap(str[s],str[e]);
    s++;
    e--;
    reverse(str,s,e);
    return str;
}
int main()
{
    string str="abcde";
    int s=0;
    int e=str.length()-1;
    cout<<"current string is "<<str<<endl;
    cout<<"reverse string is "<<reverse(str,s,e)<<endl;
}