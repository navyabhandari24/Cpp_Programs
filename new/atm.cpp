#include<iostream>
using namespace std;

int main(){
    int x;
    float y;
    cin>>x>>y;
    float ans;
    if((x%5==0)&&(x<y-0.5)){
        ans=(y-x)-0.5;
        printf("%.2f",ans);
    }
    else{
        printf("%.2f",y);
    }
    return 0;
}