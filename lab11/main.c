#include <stdio.h>
#include <stdlib.h>

enum State {
    INSIDE,
    OUTSIDE
};

enum PREF {
    Y,
    N
};

int process();

int main (void) {
    printf("%d\n", f());
    return 0;
}

int process() {
    enum State state = INSIDE;
    enum PREF pref = Y;
   
    int i = 0;
    int sum = 0;
    int a = 0;
    int b = 0;
   
    for(char c = getchar(); c != EOF; c = getchar()) {
        if(c != ' ') {
            if ((c > 47) && (c < 58)) {
                int p_1 = c - 48;
                sum = sum + p_1;
            } else if (c != 32) {
                        pref = N;
                        sum = 0;
                    }    
               
        }
            else if (pref == Y)  { 
                switch (state) {
                    case INSIDE:
                        if ((c == ' ') || (c == '\n')) {
                            a = sum;                        
                            sum = 0;
                            state = OUTSIDE;
                            break;
                        }
                    case OUTSIDE:
                        if ((c == ' ') || (c == '\n')) {        
                            b = sum;
                            sum = 0;
                            state = INSIDE;
                            break;
                        }
                }
                 } else { 
                      sum = 0;
                      pref = Y; 
            }  
    }
    
    if ((sum > 0) && (pref == Y)) {
        switch (state) {
            case INSIDE:
                a = sum;
                sum = 0;
                state = OUTSIDE;
                break;
            case OUTSIDE:
                b = sum;
                sum = 0;
                state = INSIDE;
                break;
        }       
    
    }

        if (state == INSIDE) {
            return a;
        }
        else {
            return  b;
        }
}
