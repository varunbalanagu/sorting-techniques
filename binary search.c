/*Binary search:
1.Algorithm which is used to find a KEY in a SORTED data.
2.Binary search only works on Sorted data ( ascending or descending )

Algorithm.
1.Take two variables called low and high
2.set low to 0 and high to length-1
3.Run a loop as long as low <= high
	4.Compute a value called mid = (low+high)/2
	5.
		case 1: if A[mid] == key, then return mid
		case 2: if A[mid]>key, then set high to mid-1
		case 3: if A[mid]<key, then set low = mid +1
*/



