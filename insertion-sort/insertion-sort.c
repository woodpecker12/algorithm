/* ��������
 *
 * α����(��С����):
 * INSERTION-SORT(A)
 * for j = 2 to A.length
 * 		key = A[j]
 *		// Insert A[j] into the sorted sequence A[1...j - 1]
 * 		i = j - 1 // i ���� j��ǰһ��
 * 		while i > 0 and A[i] > key // ��i > 0����A[i] > A[j]ʱ
 *				A[i+1] = A[i] // ����ĺ�С�Ľ���
 *				i = i - 1
 *		A[i + 1] = key // ��A[j]���뵽���ʵĵط�
 */
 
 #include <stdio.h>
 
 void insertion_sort(int *sequence)
 {
	int i, j, key;
	for (j = 1; j < sizeof(sequence); j++){
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
	int a[] = {5, 2, 4, 6, 1, 3};
	
	insertion_sort(a);
	
	for (i = 0; i < sizeof(a); i++)
		printf("a[%d] = %d\n", i, a[i]);
 }