/* 归并排序
 *
 * MERGE(A, p, q, r)
 * 		n1 = q - p + 1
 *		n2 = r - q
 *		let L[1...n1 + 1] and R[1...n2 + 1] be new arrays // 将数组A拆分成两个数组
 *		for i = 1 to n1
 * 			L[i] = A[p + i - 1]
 *		for j = 1 to n2
 *			R[j] = A[q + j]
 *		L[n1 + 1] = 哨兵 	// 在这两个新数字的末尾添加一个特殊的字符
 *		R[n2 + 1] = 哨兵
 *		i = 1
 * 		j = 1
 * 		for k = p to r
 *			if L[i] =< R[j] 	// 比较数组L和R的每一项
 *				A[k] = L[i] 	// 如果L[i]较R[j]小，则将L[i]写入A[k]
 *				i = i + 1		// 数组L移动下一项
 *			else A[k] = R[j]	// 否则将R[i]写入A[k]
 *				j = j + 1		// 数组R移动下一项
 *
 * MERGE-SORT(A, p, r)
 * 		if p < r
 *			q = [(p + r)/2]			// 将数组A递归等分成新的数组,q为拆分位置
 *			MERGE-SORT(A, p, q)
 *			MERGE-SORT(A, q + 1, r)
 *			MERGE(A, p, q, r)		// 对最小拆分的两个数组进行合并
 */
 
 #include <stdio.h>
 
 merge(int A, int p, int q, int r )
 {
	
 }
 
 int main(char argc, char **argv)
 {
	return 0;
 }