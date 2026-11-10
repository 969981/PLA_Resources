/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020549c; name: FUN_0020549c
 */


size_t FUN_0020549c(char *param_1,long param_2)

{
  size_t sVar1;
  
  if (*(long *)PTR_stdout_04372328 != param_2 && *(long *)PTR_stderr_04372330 != param_2) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03996322,&DAT_03996322,&DAT_03996322,0,&DAT_03996322);
  }
  if (param_1 == (char *)0x0) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = strlen(param_1);
  }
  return sVar1;
}


