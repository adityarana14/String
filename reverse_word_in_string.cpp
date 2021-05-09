class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string answer;
        string temp ;
        for(int i=s.size()-1;i>=0;i--)
        {
           
            if(s[i]!='.')
            {
                temp.push_back(s[i]);
            }
            else
            {
                reverse(temp.begin(),temp.end());
                // int k=0;
                // while(k<temp.size())
                // {
                //     answer.push_back(temp[k]);
                //     k++;
         
                // }
                answer=answer+temp;
                if(i!=0)
                answer.push_back('.');
                temp="";
            }
        }
        
                reverse(temp.begin(),temp.end());
                answer=answer+temp;
        
        return answer;
    } 
};