int maximizingXor(int l, int r) {
    int LXR = l^r;
    int msbPos = 0;
    while (LXR)
    {
        msbPos++;
        LXR >>= 1;
    }
    int maxXOR = 0;
    int two = 1;
    while (msbPos--)
    {
        maxXOR += two;
        two <<= 1;
    }
 
    return maxXOR;
}
----------------------------------
Examples 1:
L = 8    R = 20
L ^ R = (01000) ^ (10100) = (11100)

Now as L ^ R is of form (1xxxx) we
can get maximum XOR as (11111) by 
choosing A and B as 15 and 16 (01111 and 10000)
