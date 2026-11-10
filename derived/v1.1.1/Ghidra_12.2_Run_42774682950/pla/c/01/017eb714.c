/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017eb714; name: FUN_017eb714
 */


bool FUN_017eb714(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  if (*(long *)(*(long *)(*param_2 + 0x98) + 8) == 0) {
    return false;
  }
  iVar1 = FUN_02c66b3c();
  return iVar1 == 0;
}


