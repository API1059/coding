//smaller elements bubble to the top of the list
###it can detect whether the input list is already sorted or not###
##PERFORMANCE##
best case: O(n)
average case: O(n^2)
worst case: O(n^2)
space complexity: O(1)
// n-1 iterations
// 1st iteration n-1 comparisions
// 2nd iteration n-2 comparisions
...

int bblSort(A, n) // given an array A of size n
{
	for(int i=1; i<n; i++) //total n-1 iterations in worst case
	{
		flag=0;			//make flag value 0 to know whether the array is already sorted or not
		for(int j=1; j<=n-i; j++) //apply inner loop to bubble out the largest value to right end of the array 
		{
			if(A[j]>A[j+1])
			{
				flag=1; // make flag value 1 indicating that the array was not already sorted
				swap(A[j],A[j+1]); 
			}
		}
		if(flag==0) //if the array was already sorted then break out of the for loop
			break;
	}
}
