//Program to calculate the area and volume of a room
#include<stdio.h>
class room
{
    private:
    int len;
    int height, breadth;
    public:
    room()
    {
        len = 10;
        breadth = 5;
        height = 15;
    }
    int area()
    {
        return len*breadth;
    }
    int volume();
    void set(int len1, int bre1, int hei1)
    {
        len = len1;
        breadth = bre1;
        height = hei1;
    }
};
int main()
{
    room obj;
    //obj.len;
    printf("\nDefault area of the room: %d",obj.area());
    printf("\nDefault volume of the room: %d\n",obj.volume());
    return 0;
}
int room::volume()
{
    return len * breadth * height;
}