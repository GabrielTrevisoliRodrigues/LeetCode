class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        visited = set()    
        node = head        
        while node:        
            if node in visited:   
                return True       
            visited.add(node)     
            node = node.next      
        return False              