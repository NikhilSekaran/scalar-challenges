/*
Brief Explanation:
f(i, j) = |A[i] - A[j]| + |i - j|

case1: A[i] > A[j] and i > j
f(i,j) = (A[i] + i) - (A[j] + j)

case2: A[i] < A[j] and i < j
f(i,j) = -(A[i] + i) + (A[j] + j)

case3: A[i] > A[j] and i < j
f(i,j) = (A[i] - i) - (A[j] - j)

case4: A[i] < A[j] and i > j
f(i,j) = -(A[i] - i) + (A[j] - j) 

case 1 & 2 are equivalent
case 3 & 4 are equivalent

candidate 1:
A[i] + i should be max and A[j] + j should be minimum

candidate 2:
A[i] - i should be max and A[j] - j should be minimum

max absolute difference is max of candidate 1 & 2
*/

int Solution::maxArr(vector<int> &A) {
    int max_1 = INT_MIN, min_1 = INT_MAX, max_2 = INT_MIN, min_2 = INT_MAX, cand_1, cand_2, curr_ele;

    // arrary size is one, then return the only element
    if (A.size() == 1)
    {
        return A[0];
    }

    for (int index = 0; index < A.size(); index++)
    {
        curr_ele = A[index];

        // for each element all the 4 combinations for f(i,j) is computed
        max_1 = max(curr_ele + index, max_1);
        min_1 = min(curr_ele + index, min_1);

        max_2 = max(curr_ele - index, max_2);
        min_2 = min(curr_ele - index, min_2);
    }

    cand_1 = max_1 - min_1;
    cand_2 = max_2 - min_2;

    return max (cand_1, cand_2);
}
