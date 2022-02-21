#include <iostream>

using namespace std;

int volume(int height, int width, int length);
struct structname {
   datatype var1;
   datatype var2;
};
int main() {
    int box1.varheight,box1width,box1lenght;
    int totalVolume;
    int box2height,box2width,box2lenght;

    cout << "Enter Box 1 Height : ";
    cin >> Height of Box 1;
    cout << "Enter Box 1 Width : ";
    cin >> Width of Box 1;
    cout << "Enter Box 1 Length : ";
    cin >> Length of Box 1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height of Box 2;
    cout << "Enter Box 2 Width : ";
    cin >> Width of Box 2;
    cout << "Enter Box 2 Length : ";
    cin >> Length of Box 2;
    

    totalVolume = volume( box1height,box1width,box1lenght)
             + volume(box2height ,box2width ,box2lenght );
    
    cout << "Volume of Box is: " << totalVolume << endl;
    
    return 0;
}
int volume(int height, int width, int length)
{
  return height * width & lenght;
}


