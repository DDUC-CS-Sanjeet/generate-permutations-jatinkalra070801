#include<iostream>
using namespace std;
void swap(char &a,char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}
void permutations(string s,int x,int y)
{
    int j;
    if(x==y)
    cout<<s<<endl;
    else
    {
        for(j=x;j<=y;j++)
        {
            swap(s[x],s[j]);
            permutations(s,x+1,y);
            swap(s[x],s[j]);
        }
    }
} 
int main()
{
    int n;
    cout<<"enter the number of characters";
    cin>>n;
    string s;char a;
    cout<<"enter the string  ";
    cin>>s;
    permutations(s,0,n-1);
    return 0;
}