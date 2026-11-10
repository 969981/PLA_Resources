/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3aa0; name: setjmp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_04371418)((int)__env);
  return iVar1;
}


