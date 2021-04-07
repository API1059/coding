//In-place sort (requires no additional storage space)
//Algorithm 
1. Find the minimum value in the list 
2. Swap it with the value in the current position
3. Repeat this process for all the elements until the entire array is sorted

##This algorithm is called selection sort since it repeatedly 
selects the smallest element

//Selection sort works well for small files. 
//It is used for sorting the files with very large values and small keys.
//This is because selection is made based on keys and swaps are
// made only when required.

##PERFORMANCE
BEST CASE: O(n^2)
AVERAGE CASE: O(n^2)
WORST CASE: O(n^2)
SPACE COMPLEXITY: O(1) auxiliary

void selctSort(A, n) //given array A of size n
{
	for(int i=0; i<n; i++) //using this find the index of smallest element
	{
		int min=i;   //initially assume min=i
		for(int j=i+1; j<n; j++) //apply this loop from the right element of i
		{
			if(A[j]<A[min])   //if we get minimum value in right part then set min to new index value 
			{
				min=j;
			}
		}
	}
	if(min!=i)    // if min value is changed then swap 
	{
		swap(A[i],A[min]);
	}
}