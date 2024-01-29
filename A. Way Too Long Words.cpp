#include<bits/stdc++.h>
using namespace std;

int main()
{

    int term;
    cin>>term;

    string word;

    for(int i = 0; i < term; i++)
    {
        cin>>word;
        if(word.size()<=10)
        {
            cout<<word<<endl;
        }
        else
        {
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }
    }
}


