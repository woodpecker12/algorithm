/* �鲢����
 *
 * MERGE(A, p, q, r)
 * 		n1 = q - p + 1
 *		n2 = r - q
 *		let L[1...n1 + 1] and R[1...n2 + 1] be new arrays // ������A��ֳ���������
 *		for i = 1 to n1
 * 			L[i] = A[p + i - 1]
 *		for j = 1 to n2
 *			R[j] = A[q + j]
 *		L[n1 + 1] = �ڱ� 	// �������������ֵ�ĩβ���һ��������ַ�
 *		R[n2 + 1] = �ڱ�
 *		i = 1
 * 		j = 1
 * 		for k = p to r
 *			if L[i] =< R[j] 	// �Ƚ�����L��R��ÿһ��
 *				A[k] = L[i] 	// ���L[i]��R[j]С����L[i]д��A[k]
 *				i = i + 1		// ����L�ƶ���һ��
 *			else A[k] = R[j]	// ����R[i]д��A[k]
 *				j = j + 1		// ����R�ƶ���һ��
 *
 * MERGE-SORT(A, p, r)
 * 		if p < r
 *			q = [(p + r)/2]			// ������A�ݹ�ȷֳ��µ�����,qΪ���λ��
 *			MERGE-SORT(A, p, q)
 *			MERGE-SORT(A, q + 1, r)
 *			MERGE(A, p, q, r)		// ����С��ֵ�����������кϲ�
 */
 
 #include <stdio.h>
 
 merge(int A, int p, int q, int r )
 {
	
 }
 
 int main(char argc, char **argv)
 {
	return 0;
 }