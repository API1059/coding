//comparision based sort
each iteration removes an element from the input data and inserts it into 
the correct position in the list being sorted.
the choice of the element being removed from the lsit is random
//we repeat this till all the elements are sorted.

//efficient for small data
//Adaptive: If the input list is presorted [may not be completely] then
// insertions sort takes O(n + d), where d is the number of inversions
Practically more efficient than selection and bubble sorts, even though
all of them have O(n^2) worst case complexity
//Stable: Maintains relative order of input data if the keys are same
//In-place: It requires only a constant amount O(1) of additional memory space
//Online: Insertion sort can sort the list as it receives it

##PERFORMANCE:
BEST CASE: theta(n)
AVERAGE CASE: theta(n^2)
WORST CASE: theta(n^2)
SPACE COMPLEXITY: O(n^2) ; O(1) ==> auxiliary


void insrtSort(A, n) // given array A of size n
{
	for(int j=2; j<=n; j++) // assume 1st element is in sorted list
	{
		key=A[j];   //set key value to first element of unsorted list
		i=j-1;		//set i value to last element of sorted list
		while(i>0 && (A[i]>key)) // repeat until i=0 or A[i]<= key(i.e. till we get the correct position of key)
		{
			A[i+1]=A[i]; //swap elements 
			i=i-1;       
		}
		A[i+1]=key;//set key value to it's correct index position in sorted list
	}
}