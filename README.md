# Buffering
The goal of this program is to receive a value and process it correctly according to 6 predetermined operation IDs. First, the "main.c" program gets a value from "io.c" and reads it into an input buffer. Next, the value is transferred into a local buffer, where its contents are assessed depending on the value of its first element:  

0 - MIN: the minimum value in the buffer is found.  
1 - MAX: the maximum value in the buffer is found.  
2 - ODD: the number of odd values in the buffer is found.  
3 - EVEN: the number of even values in the buffer is found.  
4 - MINMAX: the minimum and maximum values in the buffer are found.  
5 - ODDEVEN: the number of odd and even values in the buffer is found.  

The local buffer is then replaced by four elements: the ID, the number of results, the first result, and the second result (in that order). These results are transferred to the output buffer, which is then checked by the io.c file. The buffers are cleared, and the process repeats with a new input.
