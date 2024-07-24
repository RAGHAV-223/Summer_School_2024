#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int c_g,c_p,n;
        cin>>c_g>>c_p;
        cin>>n;
        int cost=0;
        int high=max(c_g,c_p);
        int low=min(c_g,c_p);
        int p1_c=0,p2_c=0;
        for(int j=0;j<n;j++){
            int p1,p2;
            cin>>p1>>p2;
            p1_c+=p1;
            p2_c+=p2;
        }
        if (p1_c>=p2_c){
            cost+=p2_c*high;
            cost+=p1_c*low;
            
        }
        else{
            cost+=p1_c*high;
            cost+=p2_c*low;  
        }
        cout<<cost<<endl;
        }
    
       
    return 0;
}
