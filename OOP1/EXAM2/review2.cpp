#include<iostream>

using namespace std;

class Count {
   public:
      int count;
      Count(int c) {
         count = c;
      }
      Count() {
         count = 0;
      }
};
 

void increment(Count& c, int& times) {
   c.count++;
   times++;
   cout << times << ", ";
}

int main() {
   Count myCount;
   int times = 0;
   for (int i = 0; i < 100; i++){
    increment(myCount, times);
   }
   cout << endl;
   cout << "myCount.count is " << myCount.count;
   cout << " times is " << times;
   cout << endl;
   return 0;
}
