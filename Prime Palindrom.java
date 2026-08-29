class Solution {
    public int primePalindrome(int n) {
        if(n >= 10000000 && n <= 99999999)
                n = 100000000;
        
        if(n==1)
        return 2;
      while(true){
        int a=n;
        int r=0;
        while(a>0)
        {
            r=r*10+(a%10);
            a=a/10;
        }
        if(r==n)
        {
       int b= prime(r);
       if(b==1)
       return r;
        }
        n++;
    }
      }

    public int prime(int x)
    {
        int c=0;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            c=c+1;
        }
        if(c==0)
        return 1;
        return 0;
    } 
}
