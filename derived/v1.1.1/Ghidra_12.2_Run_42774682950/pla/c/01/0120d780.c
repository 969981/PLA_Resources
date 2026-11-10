/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120d780; name: FUN_0120d780
 */


void FUN_0120d780(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = thunk_FUN_00d2f008(param_1 + 0x180);
  if (lVar1 == 0) {
    return;
  }
  FUN_028077c0(lVar1,param_3 & 1);
  return;
}


