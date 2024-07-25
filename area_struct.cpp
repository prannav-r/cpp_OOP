//Program to calculate the area and volume of a room
#include<stdio.h>
struct room
{
    int len, height, breadth;
};
int area(struct room);
int volume(struct room);
int main()
{
    struct room obj;
    obj.len=10;
    obj.breadth= 5;
    obj.height=15;
    printf("Area of the room is:%d \n",area(obj));
    printf("Volume of the room is:%d \n",volume(obj));
    return 0;
}
//Function to calculate the area of the room
int area(struct room obj)
{
    return obj.len*obj.breadth;
}

//Function to calculate the volume of the room
int volume(struct room obj)
{
    return obj.len*obj.breadth*obj.height;
}