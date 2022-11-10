#include<iostream>

int main(){
    std::cout<<"Hello World"<<std::endl;
    int v1,v2;
    std::cin>>v1>>v2;
    std::cout<<"the production of "<<"v1: "<<v1
    <<"v2: "<<v2<<" is "<<v1*v2<<std::endl;
    std::cout<<"in another way: ";
    std::cout<<"the production of ";
    std::cout<<"v1: ";
    std::cout<<v1;
    std::cout<<"v2: ";
    std::cout<<v2;
    std::cout<<" is ";
    std::cout<<v1*v2;
    std::cout<<std::endl;
    //1.6 不合法,多加了两个分号
    return 0;
}