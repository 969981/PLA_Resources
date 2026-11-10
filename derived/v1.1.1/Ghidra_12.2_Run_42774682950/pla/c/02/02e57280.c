/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57280; name: FUN_02e57280
 */


void FUN_02e57280(long *param_1,int param_2)

{
  long lVar1;
  char local_24 [4];
  
  if (param_2 == 0) {
    if ((int)param_1[1] != 0) {
      lVar1 = *param_1;
      do {
        FUN_02e56b44(lVar1 + 0x18);
        lVar1 = lVar1 + 0x28;
      } while (lVar1 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28);
    }
  }
  else {
    lVar1 = FUN_02e57b9c(param_1,param_2,local_24);
    if ((lVar1 != 0) && (local_24[0] != '\0')) {
      FUN_02e56b44(lVar1 + 0x18);
      return;
    }
  }
  return;
}


