class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        result = []
        self.reversedd(root,result)
        return result
    def reversedd(self,root:'Node',result):
        if not root:
            return
        for child in root.children:
            self.reversedd(child,result)
        result.append(root.val)