#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    char ch=',';
    int a,b,c;
    cin>>a>>ch>>b>>ch>>c;  
    if (a>=b && a>=c){
        if (b>=c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    else if (b>=a && b>=c){
        if (a>=c)
            cout<<a;
        else
            cout<<c;
    }
    else{
        if (a>b)    
            cout<<a;
        else
            cout<<b;
    }
    
    return 0;
}