class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        length = len(matrix)
        hold = dict()
        for i in range(length):
                    for j in range(len(matrix[i])):
                        if(matrix[i][j]==0):
                            if i not in hold:
                                hold[i] = [j]
                            else:
                                hold[i].append(j)
        for key in hold.keys():
            for i in range(len(matrix[0])):
                matrix[key][i] = 0
            for items in hold[key]:
                for i in range(length):
                    matrix[i][items] = 0

        
