# Advanced Vector Extensions

AVX instructions support both 128-bit and 256-bit SIMD. The 128-bit versions 
can be useful to improve old code without needing to widen the vectorization, 
and avoid the penalty of going from SSE to AVX, they are 
also faster on some early AMD implementations of AVX. This mode is 
sometimes known as AVX-128.

uname  −i
2                 X86  64
3                  l s b   r e l e a s e   −a
4                 No  LSB   modules   are    a v a i l a b l e .
5                  D i s t r i b u t o r   ID :           Ubuntu
6                  D e s c r i p t i o n :           Ubuntu   1 4 . 0 4 . 5   LTS
7                  Release :           14.04
8                 Codename :           t r u s t y
9
10                 How   to   check   given  system provide support for   AVX  or   not ?
11                 g++  checkAVX . cpp     //      code    i s    i n   /tmp/ j e t s o n /AVX   f o l d e r
12                 g++  checkAVX . cpp  −o   r1 . out      //   output    f i l e    s t o r e d    i n   r1 . out
13                  . / r1 . out
14                  . / a . out
15                 SSE : 1
16                 SSE2 : 1
17                 SSE3 : 1
18                 SSE4 . 1 : 1
19                 SSE4 . 2 : 1
20                 SSE4a : 0
21                 SSE5 : 0
22                AVX: 1
23
24	g++ −std=gnu++11     checkAVXv2 . cpp  −o   r2 . out      //   t h i s    i s another   code   f o r   the   above
25                CPU  vendor  =   GenuineIntel

