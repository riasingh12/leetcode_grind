class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> tmp;
      while(n!=1)
      {
          if(tmp.find(n)==tmp.end())
              tmp.insert(n);
          else
              return false;
          
          int doubpro=0;
          while(n>0)
          {
          int d=n%10;
          doubpro=doubpro+d*d;
          n=n/10;
          }
          n=doubpro;
      }
        return true;
    }
};
