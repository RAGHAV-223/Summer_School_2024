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
     short int T;
    cin>>T;
    for(short int i=0; i<T; i++){
        short int SS,seat;
        cin>>seat;
        SS = seat%12;
        switch(SS){
            case 1:
                cout<<"WS "<<seat+11<<endl;
                break;
            case 2:
                cout<<"MS "<<seat+9<<endl;
                break;
            case 3:
                cout<<"AS "<<seat+7<<endl;
                break;
            case 4:
                cout<<"AS "<<seat+5<<endl;
                break;
            case 5:
                cout<<"MS "<<seat+3<<endl;
                break;
            case 6:
                cout<<"WS "<<seat+1<<endl;
                break;
            case 7:
                cout<<"WS "<<seat-1<<endl;
                break;
            case 8:
                cout<<"MS "<<seat-3<<endl;
                break;
            case 9:
                cout<<"AS "<<seat-5<<endl;
                break;
            case 10:
                cout<<"AS "<<seat-7<<endl;
                break;
            case 11:
                cout<<"MS "<<seat-9<<endl;
                break;
            case 0:
                cout<<"WS "<<seat-11<<endl;
                break;
            default:
                break;
        }
       
    }
    return 0;
}