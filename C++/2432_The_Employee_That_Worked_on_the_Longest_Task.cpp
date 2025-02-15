class Solution {
public:
    
    set<int> getAllfactors(int n){
        set<int> st;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        return st;
    }
    
    int commonFactors(int a, int b) {
        set<int> s1=getAllfactors(a), s2=getAllfactors(b);
        
        set<int> :: iterator it;
        int c=0;
        for(it=s1.begin();it!=s1.end();it++){
            int val=*it;
            if(s2.find(val)!=s2.end()) c++;
        }
        return c;
    }
};