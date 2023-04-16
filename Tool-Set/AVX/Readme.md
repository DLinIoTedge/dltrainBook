
AVX instructions support both 128-bit and 256-bit SIMD. The 128-bit versions 
can be useful to improve old code without needing to widen the vectorization, 
and avoid the penalty of going from SSE to AVX, they are 
also faster on some early AMD implementations of AVX. This mode is 
sometimes known as AVX-128.
