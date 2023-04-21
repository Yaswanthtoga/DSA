#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int ele=-1,cnt=0,i=0;
    while(i<size){
        if(cnt==0){
            cnt=1;
            ele = a[i];
        }else if(ele==a[i]){
            cnt++;
        }else{
            cnt--;
            if(cnt==0)continue;
        }
        i++;
    }
    
    cnt=0;
    for(int i=0;i<size;i++){
        if(ele == a[i])cnt++;
    }
    
    if(cnt>size/2)return ele;
    
    return -1;
}