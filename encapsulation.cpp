#include <stdio.h>

class animal{
    int age;  
    public:
    int setage(int x){
        age=x;
    }
    int getage(){
        return age;
    }
};

int main(){
    animal lion;
    lion.setage(10);
    int x=lion.getage();
    printf("%d",x);
}