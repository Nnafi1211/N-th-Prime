#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005

void SieveOfEratosthenes(vector <int> &prime)
{
	bool Isprime[MAX];
	memset(Isprime, true, sizeof(Isprime));
	
	for(int i=2; i*i<MAX; ++i)
	{
		if(Isprime[i] == true)
		{
			for(int j=i*i; j<MAX; j += i)
				Isprime[j] = false;
		}
	}

	for(int p=2; p<MAX; p++)
		if(Isprime[p])
			prime.push_back(p);
			
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector <int> prime;

	cin >> n;

	SieveOfEratosthenes(prime);

	cout << prime[n-1] << "\n";




	return 0;

}