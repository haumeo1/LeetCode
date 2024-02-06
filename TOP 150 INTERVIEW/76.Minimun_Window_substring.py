class Solution:
    def minWindow(self,s, t):
        char_map = [0] * 128  # Initialize a list to store character frequencies
        for c in t:
            char_map[ord(c)] += 1  # Count the frequency of each character in string t

        counter, begin, end, d, head = len(t), 0, 0, float('inf'), 0  # Variables for sliding window

        # Sliding window loop
        while end < len(s):
            if char_map[ord(s[end])] > 0:
                counter -= 1  # Decrement the frequency in the map and update the counter if the character is in t
            char_map[ord(s[end])] -= 1
            end += 1

            # Check if the current window is valid
            while counter == 0:
                # Update the minimum window information if the current window is smaller
                if end - begin < d:
                    d = end - (head := begin)

                # Make the window invalid by moving the left boundary
                char_map[ord(s[begin])] += 1
                if char_map[ord(s[begin])] > 0:
                    counter += 1  # Increment the frequency in the map and update the counter
                begin += 1

        # Return the minimum window substring or an empty string if not found
        return s[head:head + d] if d != float('inf') else ""
        
        
