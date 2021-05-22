
//this problem took me around 2 hours to solve, 
//One of the main issue was to whether 01 and 1 is same or different.
//Else everything was pretty smooth.

class Solution {
    public:
        int isValid(string s) {
            // code here
            
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='.')
                count++;
            }
            
            if(count!=3)
            return 0;
           
        
            count=0;
            string sub;
            
            for(int i=0;i<s.size() ;i++)
            {
                if(isalpha(s[i]))
                return 0;
           
                if(s[i]!='.')
                sub=sub+s[i];
                else
                {
                   
                    //cout<<"substring is "<<sub<<endl;
                    
                    count++;
                    if(sub.size()>3)
                    return 0;
                    
                    if(sub.size()==0)
                    return 0;
                    

                    int temp=stoi(sub);
                   int length = to_string(temp).length();
                   
                   
                   if(length!=sub.size() )
                   return 0;
                //    cout<<temp;
                    if(temp>=0 && temp<256)
                    {}
                    else
                    {
                        
                        return 0;
                    }
                    
                    sub="";
                }
            }
            
         
         
                   int temp=stoi(sub);
                   int length = to_string(temp).length();
                   
                    if(length!=sub.size() )
                       return 0;
                       
                    if(temp>=0 && temp<=255)
                    {}
                    else
                    {
                        // cout<<"this";
                        return 0;
                    }
         
       
            
            return 1;
        }
};