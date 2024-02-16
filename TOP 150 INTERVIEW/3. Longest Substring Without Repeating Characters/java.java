class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer> seen = new HashMap<>();
        int start = 0;
        int result = 0;
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(seen.containsKey(c) && seen.get(c)>=start){
                start = seen.get(c)+1;
            }
            result = Math.max(result,i-start+1);
            seen.put(c,i);
        }
        return result;

    }
}