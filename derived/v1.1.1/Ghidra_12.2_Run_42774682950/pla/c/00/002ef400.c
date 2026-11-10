/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef400; name: FUN_002ef400
 */


int FUN_002ef400(long param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x20c49b) {
    if (param_1 < -0x20c49a) {
      return -0x7fffffff;
    }
    iVar1 = param_2 / 1000000 + (int)param_1 * 1000;
  }
  else {
    iVar1 = 0x7fffffff;
    if (param_1 == 0x20c49b) {
      iVar1 = 0x7fffffff;
      if (param_2 < 648000000) {
        iVar1 = param_2 / 1000000 + 0x7ffffd78;
      }
      return iVar1;
    }
  }
  return iVar1;
}


