/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69d40; name: FUN_02e69d40
 */


int FUN_02e69d40(long *param_1)

{
  int iVar1;
  
  if ((param_1[3] == 0) || ((char)param_1[0xd] != '\0')) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_02e65894(param_1[3],param_1[4]);
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x20))();
    }
    if (param_1[3] != 0) {
      FUN_02e657bc();
      param_1[3] = 0;
    }
  }
  return iVar1;
}


