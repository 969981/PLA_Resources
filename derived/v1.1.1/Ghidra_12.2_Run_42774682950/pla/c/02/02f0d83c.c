/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d83c; name: FUN_02f0d83c
 */


void FUN_02f0d83c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  lVar1 = FUN_02f0d340(param_1,param_2,auStack_14);
  if (lVar1 == 0) {
    FUN_02f0d934(param_1);
  }
  else {
    FUN_02f0d884(param_1,(ulong)(lVar1 - *param_1) >> 3);
  }
  return;
}


