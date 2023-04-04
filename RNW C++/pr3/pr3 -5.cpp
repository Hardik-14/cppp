#include<iostream>
using namespace std;

class Rectangle {
  
    private:
        int length;
        int width;
  
    public:
        void setLength(int len) 
		{
            length = len;
        }
        
		int getLength() 
		{
            return length;
        }
        
		void setWidth(int wid)
	    {
            width = wid;
        }
        
		int getWidth() 
		{
            return width;
        }
        
		int area() 
		{
            return length * width;
        }
};

int main() 
{
    Rectangle r;

    r.setLength(5);

    r.setWidth(3);

    cout << "Area: " << r.area() << endl;

    return 0;
}

