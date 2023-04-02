
class Solution {
  public:
    int extractMax() {
        // your code here
        int x = H[0];
        swap(H[0],H[s--]);
        shiftDown(0);
        return x;
    }
};
