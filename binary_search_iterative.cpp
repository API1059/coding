//necessary condition: all the elements must be in sorted order
//no. of comparisions is equal to the height of the tree. [ log(n) comparisons]
// min. comparisions= 1
// max. comparisions= n
//space complexity= O(1)
int itrBinSearch(A, n, key)    //an array A of size 'n' and we have to search for value='key'
{
	l=1;    //lower limit of the array 
	h=n;	//upper limit of the array 
	while(l<=h)   //repeat loop until we find the elemet or l and h overlap or cross over
	{
		mid=(l+h)/2;    // set middle index of the array 
		if(key==A[mid])  // search for the key value at mid index
		{
			return mid;
		}
		else if(key<A[mid])  //if not found at mid then search for key value at left half 
		{
			return h=mid-1;
		}
		else 				//if not found at above two cases then search in the right half of the array
		{
			return l=mid+1;
		}
	}
	return 0;
}