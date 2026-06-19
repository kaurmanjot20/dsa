class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();
        if(n > m) return false;
        
        int[] freq1= new int[26];
        int[] freq2= new int[26];
        
        //build freq arrs equal to sizr of window needed
        for(int i=0;i<s1.length();i++){
            freq1[s1.charAt(i)-'a']++;
            freq2[s2.charAt(i)-'a']++;
        }
        //check first window
        if(Arrays.equals(freq1,freq2)) return true;
        // slide window over s2
        for(int i=n; i<m;i++){
            freq2[s2.charAt(i)-'a']++;      // add
            freq2[s2.charAt(i-n)-'a']--;    // remove

            if(Arrays.equals(freq1,freq2)) return true; // check
        }
        return false;
    }
}


// Time	O(m)
// Space	O(1)
// because the frequency arrays are always of fixed size 26 for lowercase English letters