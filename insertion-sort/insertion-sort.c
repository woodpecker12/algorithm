/* 插入排序
 *
 * 伪代码(从小到大):
 * INSERTION-SORT(A)
 * for j = 2 to A.length
 * 		key = A[j]
 *		// Insert A[j] into the sorted sequence A[1...j - 1]
 * 		i = j - 1 // i 等于 j的前一个
 * 		while i > 0 and A[i] > key // 当i > 0并且A[i] > A[j]时
 *				A[i+1] = A[i] // 将大的和小的交换
 *				i = i - 1
 *		A[i + 1] = key // 将A[j]插入到合适的地方
 */
 
 #include <stdio.h>
 
 void insertion_sort(int *sequence, int num)
 {
	int i, j, key;
	for (j = 1; j < num; j++){
		key = sequence[j];
		i = j -1;
		
		while ((i >= 0) && (sequence[i] > key)){
			sequence[i + 1] = sequence[i];
			i--;
		}
	sequence[i + 1] = key;
	}
 }
 
 int main(char argv, char **argc)
 {
	int i;
	int a[8] = {5, 2, 4, 6, 1, 3, 12, 20};

	insertion_sort(a, 8);
	
	for (i = 0; i < 8; i++)
		printf("a[%d] = %d\n", i, a[i]);
 }