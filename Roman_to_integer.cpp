int value(char symbol)
{
//     I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000

if(symbol == 'I')
return 1;

if(symbol == 'V')
return 5;


if(symbol == 'X')
return 10;

if(symbol == 'L')
return 50;

if(symbol == 'C')
return 100;

if(symbol == 'D')
return 500;

if(symbol == 'M')
return 1000;
    
}
int romanToDecimal(string &str) {
    // code 
    
    if(str.size()==1)
    {
        return value(str[0]);
    }
    
    int answer=0;
    for(int i=0;i<str.size();i++)
    {
        
        if(i+1 < str.size() && value(str[i+1])>value(str[i]))
        {
            answer=answer+value(str[i+1])-value(str[i]);
            i=i+1;
        }
        else
        {
            answer=answer+value(str[i]);
        }
    }
    
    return answer;
}