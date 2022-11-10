#include<iostream>

int main(){
    int i = 50;
    int sum = 0;
    while (i<=100){
        sum+=i;
        i++;
    }
    std::cout<<"sum from 50 to 100 is "<<sum<<std::endl;
    i=10;
    while(i>=0){
        std::cout<<"i is "<<i<<std::endl;
        i--;
    }
    int v1,v2;
    std::cout<<"please input v1,v2"<<std::endl;
    std::cin>>v1>>v2;
    i=v1;
    while(i<=v2){
        std::cout<<i<<std::endl;
        i++;
    }
    
}