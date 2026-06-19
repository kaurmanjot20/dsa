class Solution1 {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        HashMap<Character, Integer> map = new HashMap<>();
        int maxLength = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s.charAt(right);
            // If duplicate found, shrink window from the left
            while (map.containsKey(currentChar)) {
                map.remove(s.charAt(left));
                left++;
            }
            map.put(currentChar, 1);
            maxLength = Math.max(maxLength, right - left + 1);
        }
        return maxLength;
    }
}