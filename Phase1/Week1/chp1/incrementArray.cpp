
#include <iostream>

using namespace std;

void inc(int array[], int size);
void print(int array[], int size);

int main(){

    int a1[] = {8, 4, 5, 3, 2};

    cout << "Before incrementig the array a1" << endl;
    print(a1, 5);

    inc(a1, 5);

    cout << "After incrementig the array a1" << endl;
    print(a1, 5);

    return 0;

}
void inc(int array[], int size) {  // array[] is not const
   for (int i = 0; i < size; ++i) {
      array[i] = array[i]+1;
   }
}
void print(int array[], int size) {
   cout << "{";
   for (int i = 0; i < size; ++i) {
      cout << array[i];
      if (i < size - 1) {
         cout << ",";
      }
   }
   cout << "}" << endl;
}