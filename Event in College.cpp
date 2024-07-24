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
    int T,current=0,max=0;
    cin>>T;
    int arr_enter[T];
    for (int i=0;i<T;i++){
        cin>>arr_enter[i];
    }
    for (int i=0;i<T;i++){
        int x;
        cin>>x;
        current+=arr_enter[i]-x;
        if (current>max){
            max=current;
        }
    }
    
    cout<<max;
    
    return 0;
}