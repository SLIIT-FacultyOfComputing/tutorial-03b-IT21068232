#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct box {
   int Height;
   int Width;
   int Length;
}box1,box2;

int main() {
   int box1; 
    int box1Height,box1Width,box1Length;
    int box2;
    int box2Height,box2Weight,box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Height of box 1;
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
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1.Height,box1.Width,box1.Length )
             + volume( box2.Hieght,box2.Width,box2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int volume(int height, int width, int length)
{
  int vol;

  vol= height*width*length;

  return vol;
}
