#ifdef __cplusplus
# error "The CMAKE_C_COMPILER is set to a C++ compiler"
#endif
#if defined(__CLASSIC_C__)
int main(argc, argv)
  int argc;
  char* argv[];
#else
int main(int argc, char* argv[])
#endif
{ (void)argv; return argc-1;}
