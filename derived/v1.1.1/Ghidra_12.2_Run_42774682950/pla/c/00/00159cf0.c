/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159cf0; name: FUN_00159cf0
 */


void FUN_00159cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s1 = (char *)FUN_00173970();
  __s2 = (char *)FUN_00173970(param_1,param_3);
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001599d0(param_1,"attempt to compare two %s values",__s1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_001599d0(param_1,"attempt to compare %s with %s",__s1,__s2);
}


