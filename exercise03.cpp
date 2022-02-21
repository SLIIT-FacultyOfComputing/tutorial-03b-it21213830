#include <iostream>

using namespace std;

int volume(int height, int width, int length);
struct box {
   int height;
   int width;
   int lenght;
}box1,box2;
int main() {
 
    int totalVolume;
    

    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.lenght;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >>box2.lenght;
    
    
    totalVolume = volume( box1.height,box1.width,box1.lenght)
             + volume(box2.height ,box2.width ,box2.lenght );
    
    cout << "Volume of Box is: " << totalVolume << endl;
    
    return 0;
}
int volume(int height, int width, int length)
{
  return height * width * lenght;
}


