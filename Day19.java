class Solution {
    static int i=0;
    public String decodeString(String s) {
        i=0;
        return fun(s);
    }
    static String fun(String s){
        String out="";
        for(;i<s.length();i++){
            if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                out+=s.charAt(i);
            }
            else if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                int num=0;
                while(s.charAt(i)!='['){
                    num*=10;
                    num+= s.charAt(i)-'0';
                    i++;
                }
                i++;
                String append = fun(s);
                for(int j=0;j<num;j++){
                    out+=append;
                }
            }
            else if(s.charAt(i)==']'){
                return out;
            }
        }
        return out;
    }
}