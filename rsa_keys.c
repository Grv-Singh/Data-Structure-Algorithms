#include<stdio.h>
#include<math.h>
 
// Returns gcd of a and b
int gcd(int a, int h)
{
    int temp;
    while (1)
    {
        temp = a%h;
        if (temp == 0)
          return h;
        a = h;
        h = temp;
    }
}
 
// Code to demonstrate RSA algorithm
int main()
{
    // Two random prime numbers
    double p = 3;
    double q = 7;
 
    // First part of public key:
    double n = p*q;
 
    // Finding other part of public key.
    // e stands for encrypt
    double e = 2;
    double phi = (p-1)*(q-1);
    while (e < phi)
    {
        // e must be co-prime to phi and
        // smaller than phi.
        if (gcd(e, phi)==1)
            break;
        else
            e++;
    }
 
	FILE *fp;
	fp = fopen("publ_key.txt", "w");

	putc(n,fp);
	putc(e,fp);

	fclose(fp);
 
    return 0;
}