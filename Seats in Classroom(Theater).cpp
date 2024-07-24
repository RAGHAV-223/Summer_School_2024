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
int fact(int x){
        return (x==0 || x==1) ? 1 : (x*fact(x-1));
    }
int main() {
    int n,r,num=0;
    cin>>n>>r;    
    if (n>r){
        cout<<"Cannot adjust "<<n<<" people on "<<r<<" seats";
    }
    else{
        num=(fact(r)/(fact(r-n)));
        cout<<num;
    }
    return 0;
}