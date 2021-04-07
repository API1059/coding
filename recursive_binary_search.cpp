//necessary condition: all the elements must be in sorted order
//no. of comparisions is equal to the height of the tree. [log(n) comparisions]
// min. comparisions= 1
// max. comparisions= n
// space complexity= O(log(n))
int recBinSearch(A, l, h, key) //an array A of size 'n' and we have to search for value='key'
{
	if(l==h) // if the array consists of a single element
	{
		if(A[l]==key) //and that element is the key
		{
			return l;  // then return that element
		}
		else 
			return 0;
	}
	else   // when the array consists of more than one elements
	{
		mid=(l+h)/2;  //set mid index value
		if(key==A[mid])   //if key value is present at mid index value
		{
			return mid; //then return that mid index
		}
		else if(key<A[mid])  //if key value is present in the left half of the array 
		{
			return rec_Bin_Search(A, l, mid-1, key); //then apply recursive binary search on left part
		}
		else   //if key value is present in the right part of the array 
		{
			return rec_Bin_Search(A, mid+1, h, key); //then apply recursive binary search on the right part
		} 
	}
}