class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        trya = set()
        tryb = set()
        tryc = set()
        for i in range(9):
            for j in range(9):
                try:
                    int(board[i][j])
                except:
                    continue
                for a in range(j+1,9):
                    if(board[i][j] == board[i][a]):
                        return False
                for b in range(i+1,9):
                    if(board[i][j] == board[b][j]):
                        return False
                if(j<3):
                    if(board[i][j] in trya):
                        return False
                    else:
                        trya.add(board[i][j])
                elif(j<6):
                    if(board[i][j] in tryb):
                        return False
                    else:
                        tryb.add(board[i][j])
                elif(j<9):
                    if(board[i][j] in tryc):
                        return False
                    else:
                        tryc.add(board[i][j])
            if((i+1)%3==0):
                    trya.clear()
                    tryb.clear()
                    tryc.clear()
        return True
       