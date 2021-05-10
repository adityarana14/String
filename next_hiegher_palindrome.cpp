lass Solution{
    public:
    string nextPalin(string str) { 
        //complete the function here
        // string str=N;
        
        // //next permutation 
        // // N="aditya";
        
        // // cout<<"next permuation "<<next_permutation(N.begin(),N.end())<<endl;
        // // cout<<N<<endl;
        // // N=string(N.rbegin(),N.rend());
        // // cout<<N;
        
        // while(next_permutation(str.begin(),str.end()))
        // {
        //     if(str==string(str.rbegin(),str.rend()))
        //     {
        //         return str;
        //     }
        // }
        
        // return "-1";
        
        
        if(str.size() <= 3)
        {
            return "-1";
        }
        
        string res;
        
        int mid = str.size() / 2 - 1;
        
        string firstHalf = str.substr(0, mid + 1);
        string prevFirstHalf = firstHalf;
        
        //cout<<"first half "<<firstHalf<<endl;
        
        next_permutation(firstHalf.begin(), firstHalf.end());
        
       // cout<<"after next permutation "<<firstHalf<<endl;
        
        if(firstHalf <= prevFirstHalf)
        {
            return "-1";
        }
        
        res += firstHalf;
        
       // cout<<"result after adding first half "<<res<<endl;
        
        if(str.size() % 2 == 1)
        {
            res += str[str.size() / 2];
        }
        
        
        //cout<<"result after adding middle element "<<res<<endl;
        string secondHalf = firstHalf;
        
       // cout<<"second half "<<secondHalf;
        reverse(secondHalf.begin(), secondHalf.end());
        
        
       // cout<<"after reversing "<<secondHalf<<endl;
        
        res += secondHalf;
        
        return res;
    }
};