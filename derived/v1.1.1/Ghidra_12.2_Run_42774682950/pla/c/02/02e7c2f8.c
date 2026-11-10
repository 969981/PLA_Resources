/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c2f8; name: FUN_02e7c2f8
 */


void FUN_02e7c2f8(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 == 0 || param_1[8] == 0) {
    return;
  }
  FUN_02e7a760(lVar1,param_1);
  return;
}


