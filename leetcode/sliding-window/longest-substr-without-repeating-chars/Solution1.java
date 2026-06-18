class Solution1 {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        HashMap<Character, Integer> map = new HashMap<>();
        int maxLength = 0;
        int i = 0;
        for (int j = 0; j < s.length(); j++) {
            char currentChar = s.charAt(j);
            // If duplicate found, shrink window from the left
            while (map.containsKey(currentChar)) {
                char leftChar = s.charAt(i);
                map.remove(leftChar);
                i++;
            }
            map.put(currentChar, 1);
            maxLength = Math.max(maxLength, j - i + 1);
        }
        return maxLength;
    }
}