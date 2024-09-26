set breakpoint pending on
tbreak __libc_start_main 
r
break *$rdi
c
x/10i $rip
set breakpoint pending off
