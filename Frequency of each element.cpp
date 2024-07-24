//WAP to count the frequency of the each character in the string
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(auto i=str.begin();i<str.end();i++){
        auto flag=find(str.begin(),i,*i);
        if(flag==i){
            int freq=count(str.begin(),str.end(),*i);
            cout<<*i<<" occurs "<<freq<<" times."<<endl;
        }        
    }

}