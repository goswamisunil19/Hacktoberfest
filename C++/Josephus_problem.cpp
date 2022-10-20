class Solution
{
    public:
    int myJos(int n,int k)
    {
        if(n==1)
            return 0;
        return ((myJos(n-1,k)+k)%n);
    }
    
    int josephus(int n, int k)
    {
       //Your code here
       return (myJos(n,k)+1);
    }
};

