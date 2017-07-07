class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        if(n==0||n==-2147483648){
          return 0;
        }
        if(!(n&(n-1)))
        return 1;
        else
        return 0;
    }
};
