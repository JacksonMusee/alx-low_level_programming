#ifdef ABS
#undef ABS
#endif

#if X < 1
#define ABS(X) (X * -1)
#else
#define ABS(X) X
#endif /* #if X < 1 */
