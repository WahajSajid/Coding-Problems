class Solution {
    fun isPalindrome(x: Int): Boolean {
        if(x<0) return false
        var string1:String  = x.toString()
        var reversedString:String = ""
        var i = string1.length-1
        while(i>=0){
            reversedString +=string1[i]
            i--
        }
        return if(reversedString.toLong() == x.toLong()) true 
        else false
    }
}
