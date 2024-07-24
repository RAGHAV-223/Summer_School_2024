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
    int n,num=0,count=0;
    cin>>n;
    while(n){
        int x=n%10;
        n/=10;
        if (x%2!=0){
            num=num+(x*pow(10,count));
            count+=1;
            
        }
    }
    cout<<num;
    return 0;
}