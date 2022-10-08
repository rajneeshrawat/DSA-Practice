int Solution::maxSubArray(const vector<int> &A) {
   int tempMax = A[0];
   int n=A.size();
   int curr_max = tempMax;
   for (int i = 1; i < n; i++ ) { 
      curr_max = max(A[i], curr_max+A[i]);
      tempMax = max(tempMax, curr_max);
   }
   return tempMax;
}
