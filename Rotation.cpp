
#include <iostream>
using namespace std;

void rotation(int* list, int size, int rot)
{
    
    if(rot > 0)
    {
        for (int i = 0; i < rot; i++) {
            
            int temp = list[size-1]; // Save last element
            
            for (int j = size-1; j > 0; j--) {
                
                list[j] = list[j-1];
            }
            
            list[0] =  temp;
        }
    }
  
    if(rot<0)
    {
        for (int i = 0; i <abs(rot); i++) {
            
        int temp = list[0];
            
        for ( int j= 0 ; j < size ; j++)
            
            list[j] = list[j+1];
        
        list[size-1] = temp;
    }
    
        if(rot == 0) { }
        
}
}
int main()
{
    int size = 3;
    int rot = -2;
    int a[] = {1,2,3};
    
    rotation(a,size,rot);
    
    for(int i = 0; i<size; i++)
        cout << a[i] << " ";
    return 0;
}

