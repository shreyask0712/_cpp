/*
https://japlslounge.com/posts/articles/Sieve_Of_Eratosthenes/1.htm
                                            //used to list prime numbers<n
                                            //Time Complexity: log log(n)
                                            //Space Complexity: O(n)
void sieveofEratosthenes(int n)  
{
    vector<bool>primes(n,true);
    primes[1]=FALSE;
    for (int i=2;i<sqrt(n)+1;i++)
    {
        if
        {
            primes[i]==TRUE;
            for(int j=i*i;j<=n;j=j+i)
                {
                    primes[j]==FALSE;
                }
        }
    }
}
*/