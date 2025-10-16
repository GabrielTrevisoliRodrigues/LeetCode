class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        visited = set()    # 1
        node = head        # 2
        while node:        # 3
            if node in visited:   # 4
                return True       # 5
            visited.add(node)     # 6
            node = node.next      # 7
        return False              # 8