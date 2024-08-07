///______________ALGORITHM FOR PARENTHESIS MATCHING___________________
    /*             
BALENCING BRACKETS:
You'll be given a string consisting of one of these 6 "{([" , "})]" and you need to tell the given arrangement is valid 
or not
EXAMPLES:(BALANCED)
() , {()} , {([()])} , [[[((({{{}}})))]]]
(UN-BALANCED)
()) , {[(]} , {{}){}[)]
______________________________________ALGORITHM_____________________________________________
1. open = "{([" , closed = "})]"
2. We maintain a STACK of characters say(st).
3. Start running a loop on the given string say(s).
      4. If current character s[i] is an open bracket 
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')  ---->  Push into the stack.
         Else
           Check if stack is not empty and stack top contains corresponding open 
          ,then pop the element from stack.Else brackets are not balanced terminate the loop.*/
