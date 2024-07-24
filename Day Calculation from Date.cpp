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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day,month,year;
    cin>>day>>month>>year;
    if (month==1 || month==2){
        month+=10;
        year-=1;
    }
    else 
        month-=2;

    int m=month, k=day; 
    int D=year%100;
    int C=year/100;
    int F=k+ ((13*m-1)/5) +D+ (D/4) +(C/4)-2*C;
    
    int rem=abs(F%7);
    
    if(rem==0){
        cout<<"Sunday";
    }
    else if (rem==1){
        cout<<"Monday";
    }
    else if (rem==2){
        cout<<"Tuesday";
    }
    else if (rem==3){
        cout<<"Wednesday";
    }
    else if (rem==4){
        cout<<"Thursday";
    }
    else if (rem==5){
        cout<<"Friday";
    }
    else if (rem==6){
        cout<<"Saturday";
    }
    return 0;
}