#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int da,de,ma,me,ya,ye,fine=0;

    cin>>da>>ma>>ya;
    cin>>de>>me>>ye;

    if(da<=de && ma<=me && ya<=ye)
        fine=0;
    else if(da>de && ma==me && ya==ye)
        fine=15*(da-de);
    else if( ma>me && ya==ye)
        fine=500*(ma-me);
    else if(ya>ye)
        fine=10000;    
         

    cout<<fine;
    return 0;
}
