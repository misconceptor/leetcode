class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder res = new StringBuilder();

        Arrays.sort(strs);

        char [] s1 = strs[0].toCharArray();
        char [] s2 = strs[strs.length-1].toCharArray();

        for(int i=0; i<s1.length; ++i){
            if(s1[i] != s2[i]){
                break;
            }
            res.append(s1[i]);
        }
        return res.toString();

    }
}
