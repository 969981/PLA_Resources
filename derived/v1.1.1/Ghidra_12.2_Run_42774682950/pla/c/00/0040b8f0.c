/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040b8f0; name: FUN_0040b8f0
 */


char * FUN_0040b8f0(FILE *param_1)

{
  if (*(FILE **)PTR_stdout_04372328 == param_1 || *(FILE **)PTR_stderr_04372330 == param_1) {
    fwrite(&DAT_038da8c3,4,1,param_1);
    return (char *)0x0;
  }
  if (*(FILE **)PTR_stdin_04372360 == param_1) {
    return (char *)0x0;
  }
  return param_1->_IO_read_ptr;
}


