lass Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1)
        {
            return arr[0];
        }
        string result;
        
        string first = arr[0];
        int k =0;
        
        while(k<first.size())
        {
        for(int i=1;i<N;i++)
        {
            string temp = arr[i];
            if(first[k]==temp[k])
            {}
            else
            {
                if(result.size()==0)
                return "-1";
                
                return result;
                
            }
        }
        result = result+first[k];
        k++;
        }
    
   
    
    return result;
    }
};