#include "fish.h"

#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long max_weights(int N, int M, vector<int> X, vector<int> Y, vector<int> W) {

    vector<vector<pair<int, int>>> a(N);

    /* subtask 1
    // O(M)
    
    long long tot = 0;
    for (int i = 0; i < M; i++)
    {
    a[X[i]].emplace_back(Y[i], W[i]);
    tot += W[i];
    }
    
    */

    /*// subtask 2
    // O(N+M)
    //

    long long tot = 0;

    int tot0 = 0, tot1 = 0;

    int lake[2][N];

    memset(lake, 0, sizeof(lake));

    for (int i = 0; i < M; i++)
    {
        if (X[i] == 0)
        {
	    tot0+=W[i];
        }
        else
        {
	    tot1+=W[i];
        }
	lake[X[i]][Y[i]] = W[i];
    }
    tot = (tot0 > tot1 ? tot0 : tot1);

    if (N == 2)
	return tot;

    tot0 = 0;

    for (int k = 0; k < N; k++)
    {
    	if (tot0+tot1 > tot)
	    tot = tot0 + tot1;

	tot1 -= lake[1][k];
	tot0 += lake[0][k];
    }
    */

    // Subtask 3
    // O(N+M)
    //

    long long tot = 0;
    int lake[N];
   
    memset(lake, 0, sizeof(lake));

    for (int i = 0; i < M; i++)
    {
	lake[X[i]] = W[i];
    }



    return tot;
}
