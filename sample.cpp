#include <stdio.h>

class animal{
  public:
    int x;
    void welcome(){
        printf("hi");
    }
  private:
      int y;
};

animal::animal(){}

int main(){
    animal dog;
    dog.welcome();
}