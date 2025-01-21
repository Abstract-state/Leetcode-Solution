class Solution {
    public int romanToInt(String s) {
        int value = 0;
        char letter;
        for(int i=s.length()-1;i>=0;i--){
            letter = s.charAt(i);
            switch(letter){
                case 'I':
                    if(i!=0 && s.charAt(i-1)=='V'){
                        value += 6;
                        i-=1;
                    }
                    else
                        value += 1;
                    break;
                case 'V':
                    if(i!=0 && s.charAt(i-1)=='I'){
                        value += 4;
                        i-=1;
                    }
                    else
                        value += 5;
                    break;
                case 'X':
                    if(i!=0 && s.charAt(i-1)=='I'){
                        value += 9;
                        i-=1;
                    }
                    else
                        value += 10;
                    break;
                case 'L':
                    if(i!=0 && s.charAt(i-1)=='X'){
                        value += 40;
                        i-=1;
                    }
                    else
                        value += 50;
                    break;
                case 'C':
                    if(i!=0 && s.charAt(i-1)=='X'){
                        value += 90;
                        i-=1;
                    }
                    else
                        value += 100;
                    break;
                case 'D':
                    if(i!=0 && s.charAt(i-1)=='C'){
                        value += 400;
                        i-=1;
                    }
                    else
                        value += 500;
                    break;
                case 'M':
                    if(i!=0 && s.charAt(i-1)=='C'){
                        value += 900;
                        i-=1;
                    }
                    else
                        value += 1000;
                    break;
                default:
                    System.out.println("Enter only roman numerals(caps letter)");
            }
        }
        return value;
    }
}
