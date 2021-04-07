//assumption is that the given array is unsorted
//no. of comparisions is equal to the size of the array. [ n comparisions]
//min. no. of comparisions = 1
//max. no. of comparisions = n
//space complexity is O(1)
int lnr_Search(A, n, key) // given array A of size n we have to search for value=key
{
	for(int i=0; i<n; i++)  //compare with each element of array until we have a match
	{
		if(A[i]==key)  //if match is found in the array 
		{
			return i; //then return that index
		}
		else
			return -1;  //if no match is found the return false 
	}
	return 0;
}