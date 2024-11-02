import java.util.Arrays;

class Solution {
    public String solution(String[] arr) {
        String answer = "";
        StringBuffer sb = new StringBuffer();
        Arrays.stream(arr).forEach(literal -> sb.append(literal));
        answer = sb.toString();
        return answer;
    }
}