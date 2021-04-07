//Merge sort is an example of the divide and conquer strategy.
//Merge sort is Quick sort’s complement
//Merge sort accesses the data in a sequential manner •
//This algorithm is used for sorting a linked list
//Merge sort is insensitive to the initial order of its input •
//In Quick sort most of the work is done before the recursive calls. Quick sort starts with the largest subfile and finishes with the small ones and as a result it needs stack. Moreover, this algorithm is not stable. Merge sort divides the list into two parts; then each part is conquered individually. Merge sort starts with the small subfiles and finishes with the largest one. As a result it doesn’t need stack. This
//algorithm is stable.

##PERFORMANCE:

Worst case complexity : Θ(nlogn)
Best case complexity : Θ(nlogn) 
Average case complexity : Θ(nlogn)
Worst case space complexity: Θ(n) auxiliary

void mrgSort(A, temp, left, right) //given array A , auxiliary array temp, left index and right index
{
	if(left<right)      //check whether left index is less than right index
	{
		mid=(left+right)/2;				//find the mid index value
		mrgSort(A, temp, left, mid);    //apply merge sort recursively on left half of array
		mrgSort(A, temp, mid+1, right);  //apply mergesort recursively on right half of array
		mrg(A, temp, left, mid+1, right); //apply merge procedure on both the left half anf right half of array

	}

}

void mrg(A, temp, left, mid, right)  //procedure to merge two halfs of the array
{
	left_end=mid-1;			//set the left_end to the rightmost index value of left half of array
	temp_pos=left;			//set tem_pos to the left 
	size=right-left+1;		//set size value
	while((left<=left_end)&&(mid<=right))   //now we have two halves; left & right first check whether we are in the correct half
	{										//ensuring the neither of the havlve is already sorted
		if(A[left]<=A[mid])				//compare the leftmost element of the left half
		{								//with the leftmost element og the right half
			temp[temp_pos]=A[left];		//put the smallest of the two in temp array
			temp_pos=temp_pos+1;		//increment temp array's index value
			left=left+1;				//if smallest value is found in the left half
		}								//then increment left index value
		else
		{								//if samllest value is foud in right half do the same as we did above
			temp[temp_pos]=A[mid];
			temp_pos=temp_pos+1;
			mid=mid+1;
		}
	}
	while(left<=left_end)     		//if left half is already sorted
	{
		temp[temp_pos]=A[left];
		left=left+1;
		temp_pos=temp_pos+1;
	}
	while(mid<=right)				//if right half is already sorted
	{
		temp[temp_pos]=A[mid];
		mid=mid+1;
		temp_pos=temp_pos+1;
	}
	for(int i=0; i<=size; i++)   //copy the temp array to original array A
	{
		A[right]=temp[right];
		right=right-1;
	}
}