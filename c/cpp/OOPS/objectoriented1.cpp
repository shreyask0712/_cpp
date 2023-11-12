#include<iostream>
using namespace std;
class rectangle {
    private:
    int length, breadth;
    public:
    void setLength(int len){
        length = len;
    }
    void setBreadth(int bre){
        breadth=bre;
    }
    int area(){
        return rectobj.length*rectobj.breadth;
    }
};
int main()
{
    rectangle rectobj;
    rectobj.setLength(10);
    rectobj.setBreadth(20);
    cout<<"area is "<<rectobj.area();
    return 0;
}