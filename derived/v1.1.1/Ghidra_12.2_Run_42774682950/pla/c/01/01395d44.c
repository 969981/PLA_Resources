/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395d44; name: FUN_01395d44
 */


void FUN_01395d44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    if (*(char *)(lVar1 + -0x2d8) != '\0') {
      *(char *)(lVar1 + -0x2d8) = '\0';
    }
    FUN_01395c2c(lVar1 + -0x310);
    lVar1 = lVar1 + -0x318;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


