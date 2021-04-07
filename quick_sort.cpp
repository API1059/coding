//Quick sort is an example of a divide-and-conquer algorithmic technique. It is also called partition exchange sort
Divide: The array A[low ...high] is partitioned into two non-empty sub arrays A[low ...q] and A[q + 1... high], such that each element of A[low ... high] is less than or equal to each element of A[q + 1... high]. The index q is computed as part of this partitioning procedure.
Conquer: The two sub arrays A[low ...q] and A[q + 1 ...high] are sorted by recursive calls to
Quick sort

Algorithm The recursive algorithm consists of four steps: 1)
If there are one or no elements in the array to be sorted, return.
2) Pick an element in the array to serve as the “pivot” point. (Usually the left-most element in the array is used.)
3) Split the array into two parts – one with elements larger than the pivot and the other with elements smaller than the pivot.
4) Recursively repeat the algorithm for both halves of the original array.

##PERFORMANCE:
Worst case Complexity: O(n^2)
Best case Complexity: O(nlogn)
Average case Complexity: O(nlogn)
Worst case space Complexity: O(1)

void qckSort(A, l, h) //given array A, having left index l and right index h
{
	if(l<h)    //check whether left index is less than right index
	{
		k=partition(A, l, h+1);   //find the index value of the partitioned element
		qckSort(A, l, k-1);	//apply quicsort recursively on left side of partition
		qckSort(A, k+1, h);	//apply quicksort recursively on right side of partition
	}
}

int partition(A, p, m) //procedure to partition the array and return partition index
{
	pivot=A[p];   //set pivot value ( usually set to the left index)
	i=p;		//set i to left index
	j=m;		//set j to right indexx
	while(1)
	{
		loop:  //loop until we find the element which is larger than the pivot in left part
			i=i+1;
			until(A[i]>=pivot);
		loop:
			j=j-1; //loop untill we find the element which is smaller than pivot on right part
			until(A[j]<=pivot);
		if(i<j)               //if i and cross over then swap
			swap(A[i],A[j]);
		else                  		// else break out of loop
			break;
	}

	A[p]=A[j];         
	A[j]=A[pivot];  //replace j with pivot
	return j; //return the index of pivot
}