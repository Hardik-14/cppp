#include<iostream>
using namespace std;

class MyClass 
{
    private:

        int private;
        int public;

    public:
        int public;
        
        void setPrivate(int num) 
		{
            private = num;
        }
        
        int getPrivate()
		 {
            return private;
        }
        
        void setPublic(int num) 
		{
            public = num;
        }
        
        int getPublic()
		 {
            return publicVar;
        }
};

int main() {
    
	MyClass obj;
    
    obj.setPrivate(10);
    obj.setPublic(20);
    
    cout << "Private variable: " << obj.getPrivate() << endl;
    
	cout << "Public variable: " << obj.getPublic() << endl;
    
	
    
    return 0;
}

