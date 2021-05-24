class Solution
{
    public:
    string lookandsay(int n) {
        // code here
        
        vector<string> v;
        
        v.push_back("1");
        v.push_back("11");
    
        for(int i=2;i<n;i++)
        {
            
            
            string previous = v[i-1];
            
        
            int count = 1;
            int j=0;
            
            string sub="";
           
            while(j < previous.length()-1)
            {
               
                if(previous[j] == previous[j+1])
                {
                    count++;
                    j++;
                    
                }
                else
                {
                     string cunt=to_string(count);
                     sub=sub+cunt;
                     sub=sub+previous[j];
                     count=1;
                     j++;
                     
                }
            }
            sub=sub+to_string(count);
            sub=sub+previous[j];
            
            v.push_back(sub);
            
        
        }
        
        
        return v[n-1];
    }   
};